#include "GetData.hpp"

#include "parson.h"

#include "device.hpp"
#include "event.hpp"
#include "ParseEventProperties.h"
#include "removeChar.h"
#include "Topic.h"
#include "Analytics.hpp"


GetData::GetData(std::string user, std::string pass, std::string url, bool verbose) {
	m_username = user;
	m_password = pass;
	m_url = url;
	m_verbose = verbose;

	device.SetParameters(user, pass, url);

	int SyncCam = device.SyncCamTime();

	if (SyncCam != SOAP_OK) {
		if ((SyncCam == 2) && (verbose)) {
			//This does not actually mean that the camera cannot be conntacted too, as certain Onvif cameras do not allow you to sync time
			std::cerr << "The camera and local system times could not be synched, but this is normal for some cameras" << std::endl;
		}
		else if (SyncCam == 1) {
			std::cerr << "the camera could not be connected too" << ". The provided ip address could not be reached." << std::endl;
			connected = false;
		}
			
	}

	if (device.GetCapabilities() != SOAP_OK) {
		if (verbose) {
			std::cerr << "Device Capabilities could not be gotten ";
		}
	}

	if ((device.GetDeviceInformation() != SOAP_OK)&&(verbose)) {
			std::cerr << "Device Information could not be gotten" << std::endl;
	}

	if ((device.GetRelayOutputs() != SOAP_OK) && (verbose)) {
		std::cerr << "Relay Outputs could not be gotten" << std::endl;
	}

	event_url = device.evXaddr;
	media_url = device.meXaddr;
	io_url = device.ioXaddr;

	event.SetParameters(m_username, m_password, event_url);

	int eventResp = event.GetEventProperties();
	if(eventResp != SOAP_OK) {

		std::cerr << "the camera could not be connected too" << std::endl;
		connected = false;
		
		if (verbose) {
			std::cerr << "Event Properties could not be gotten" << std::endl;
			return;
		}
		
	}
	else {
		connected = true;
	}

	Manufacturer = device.Manufacturer;

	/* This might be needed later idk
	std::string FirmwareVersion = device.FirmwareVersion;
	std::string HardwareId = device.HardwareId;
	std::string Model = device.Model;
	std::string SerialNumber = device.SerialNumber;
	*/
}

void GetData::DataToJson()
{
	std::vector<soap_dom_element> domVector = event.topics;

	std::vector<Topic> topics = ParseEventProperties(domVector);

	if ((topics.size() < 1)&&(m_verbose)){
		std::cerr << "This camera does not support topics" << std::endl;
		return;
	}

	//Topics are returned with different numbers of elements
	//The number of elements changes the way that they are parsed by the system
	for (size_t i = 0; i < topics.size(); i++) {
		std::vector<std::pair<std::string, std::string>> elements = topics[i].elements;
		std::string name = topics[i].name;
		if (elements.size() == 2) {
			ToJsonTopicTwoElements(name, elements);
		}
		else if (elements.size() > 2) {
			ToJsonTopicMoreElements(name, elements);
		}
		else if (elements.size() == 1) {
			ToJsonTopicOneElement(name, elements);
		}
		else {
			std::cerr << "ERROR" << std::endl;
		}
	}

	root_value = json_value_init_object();
	JSON_Object *root_object = json_value_get_object(root_value);

	json_object_set_string(root_object, "manufacturer", Manufacturer.c_str());

	//Adds all motion topics to the Json
	if (motionV.size()) {
		std::string mString;
		for (size_t i = 0; i < motionV.size(); i++) {
			if (i == motionV.size() - 1) {
				mString += motionV[i];
			}
			else {
				mString += motionV[i] + ",";
			}
		}
		mString = '[' + mString + ']';
		json_object_dotset_value(root_object, "motion.topic", json_parse_string(mString.c_str()));
	}


	//Adds all input trigger topics to the Json
	if (inputV.size()) {
		std::string iString;
		for (size_t i = 0; i < inputV.size(); i++) {
			if (i == inputV.size() - 1) {
				iString += inputV[i];
			}
			else {
				iString += inputV[i] + ",";
			}
		}
		iString = '[' + iString + ']';
		json_object_dotset_value(root_object, "input trigger.topic", json_parse_string(iString.c_str()));
	}
}

void GetData::AddDeviceIO(std::vector<tt__DigitalInput*> di, std::vector<tt__RelayOutput*> ro)
{
	digital_inputs_soap = di;
	diSoap = true;
	relay_outputs = ro;
}

void GetData::AddDeviceIO(std::vector<std::string> di, std::vector<tt__RelayOutput*> ro) {
	digital_inputs_string = di;
	diString = true;
	relay_outputs = ro;
}

void GetData::ToJsonTopicTwoElements(std::string name, std::vector<std::pair<std::string, std::string>> elements)
{

	JSON_Value *topic_value = json_value_init_object();
	JSON_Object *topic_object = json_value_get_object(topic_value);
	
	char* c_name = &(name[0]);

	removeChar(c_name, '\\');
	json_object_set_string(topic_object, "name", c_name);

	JSON_Value *source_value = json_value_init_object();
	JSON_Object *source_object = json_value_get_object(source_value);
	JSON_Value *data_value = json_value_init_object();
	JSON_Object *data_object = json_value_get_object(data_value);

	json_object_set_string(source_object, "name", elements[0].first.c_str());
	json_object_set_string(data_object, "name", elements[1].first.c_str());

	source_value = DealWithTypes(elements[0]);
	data_value = DealWithTypes(elements[1]);

	json_object_set_value(topic_object, "source", source_value);
	json_object_set_value(topic_object, "data", data_value);

	if (IsMotion(name)) {
		motionV.push_back(std::string(json_serialize_to_string(topic_value)));
	}
	else if (IsInTrig(name)) {
		inputV.push_back(std::string(json_serialize_to_string(topic_value)));
	}
	else {
		std::cout << "Neither motion or input trigger: " << name << std::endl;
	}

	return;
}

void GetData::ToJsonTopicMoreElements(std::string name, std::vector<std::pair<std::string, std::string>> elements)
{
	JSON_Value *topic_value = json_value_init_object();
	JSON_Object *topic_object = json_value_get_object(topic_value);

	char* c_name = &(name[0]);
	removeChar(c_name, '\\');
	json_object_set_string(topic_object, "name", c_name);

	JSON_Value *source_value = json_value_init_object();
	JSON_Object *source_object = json_value_get_object(source_value);
	JSON_Value *data_value = json_value_init_object();
	JSON_Object *data_object = json_value_get_object(data_value);

	json_object_set_string(source_object, "name", elements[0].first.c_str());
	
	source_value = DealWithTypes(elements[0]);
	elements.erase(elements.begin());

	if ((elements[0].second.find("tt:ReferenceToken") != std::string::npos)|| (elements[0].first.find("Token") != std::string::npos)) {
		elements.erase(elements.begin());
	}

	if (elements[0].first.find("Rule") != std::string::npos) {
		elements.erase(elements.begin());
	}

	if (elements.size() == 1) {
		json_object_set_string(data_object, "name", elements[0].first.c_str());
		data_value = DealWithTypes(elements[0]);
	}
	else {
		if (elements.size() != 2) {
			std::cerr << "Issue with the number of topic elements\n";
		}

		if ((elements[1].second.find("string") != std::string::npos)|| (elements[1].second.find("boolean") != std::string::npos)) {
			json_object_set_string(data_object, "name", elements[1].first.c_str());
			data_value = DealWithTypes(elements[1]);
		}
		else if ((elements[0].second.find("string") != std::string::npos) || (elements[0].second.find("boolean") != std::string::npos)) {
			json_object_set_string(data_object, "name", elements[0].first.c_str());
			data_value = DealWithTypes(elements[0]);
		}
		else { //Unusual datatype
			json_object_set_string(data_object, "name", elements[0].first.c_str());
			data_value = DealWithTypes(elements[0]);
			//json_object_set_string(data_object, "name", elements[1].first.c_str());
			//data_value = DealWithTypes(elements[1]);
		}
	}


	json_object_set_value(topic_object, "source", source_value);
	json_object_set_value(topic_object, "data", data_value);

	if (IsMotion(name)) {
		motionV.push_back(std::string(json_serialize_to_string(topic_value)));
	}
	else if (IsInTrig(name)) {
		inputV.push_back(std::string(json_serialize_to_string(topic_value)));
	}
	else {
		std::cout << "Neither motion or input trigger: " << name << std::endl;
	}

	return;
}

void GetData::ToJsonTopicOneElement(std::string name, std::vector<std::pair<std::string, std::string>> elements)
{
	JSON_Value *topic_value = json_value_init_object();
	JSON_Object *topic_object = json_value_get_object(topic_value);
	json_object_set_string(topic_object, "name", name.c_str());

	JSON_Value *data_value = json_value_init_object();
	JSON_Object *data_object = json_value_get_object(data_value);

	json_object_set_string(data_object, "name", elements[0].first.c_str());

	//data
	if (elements[0].second.find("boolean") != std::string::npos) {
		json_object_set_string(data_object, "on", "true");
		json_object_set_string(data_object, "off", "false");
	}
	else if ((elements[0].second.find("token") != std::string::npos) || (elements[0].second.find("Token") != std::string::npos)) {
		std::string token = FindReferenceToken(data_object, elements[0]);
		json_object_set_string(data_object, "token", token.c_str());
	}
	else { //non-boolean data
		json_object_set_string(data_object, "datatype", elements[0].second.c_str());
	}

	json_object_set_value(topic_object, "data", data_value);
	if (IsMotion(name)) {
		if (!std::string(json_serialize_to_string(topic_value)).empty()) {
			motionV.push_back(std::string(json_serialize_to_string(topic_value)));
		}
	}
	else if (IsInTrig(name)) {
		if (!std::string(json_serialize_to_string(topic_value)).empty()) {
			inputV.push_back(std::string(json_serialize_to_string(topic_value)));
		}
	}
	else {
		std::cout << "Neither motion or input trigger: " << name << std::endl;
	}
	return;
}

bool GetData::IsMotion(std::string s)
{
	bool boo;
	if (s.find("Video") != -1 || s.find("RuleEngine") != -1) {
		boo = true;
	}
	else {
		boo = false;
	}
	return boo;
}

bool GetData::IsInTrig(std::string s)
{
	bool boo;
	if (s.find("Device") != -1 || s.find("UserAlarm") != -1) {
		boo = true;
	}
	else {
		boo = false;
	}
	return boo;
}

std::string GetData::FindReferenceToken(JSON_Object* json, std::pair<std::string, std::string> pair)
{
	std::string token;
	
	if (pair.second.find("AlarmInToken") != std::string::npos) {
		//Not sure if alarm tokens are within my scope
	}
	else if (pair.second.find("InputToken") != std::string::npos) {

		std::cout << device.num_of_input_connectors << std::endl;
		if ((!diSoap) || (!diString)) {
			if (device.num_of_input_connectors) {
				for (int i = 0; i < device.num_of_input_connectors; ++i) {
					digital_inputs_string.push_back(std::to_string(i));
				}
				diString = true;
			}
		}

		if ((diSoap) || (diString)) {
			std::vector<char*> strings;
			if (diSoap) {
				for (size_t i = 0; i < digital_inputs_soap.size(); ++i) {
					JSON_Value* value = json_value_init_object();
					JSON_Object* object = json_value_get_object(value);
					json_object_set_string(object, "name", pair.first.c_str());
					json_object_set_string(object, "value", digital_inputs_soap[i]->token.c_str());
					strings.push_back(json_serialize_to_string(value));
				}
			}

			if (diString) {
				for (size_t i = 0; i < digital_inputs_string.size(); ++i) {
					JSON_Value* value = json_value_init_object();
					JSON_Object* object = json_value_get_object(value);
					json_object_set_string(object, "name", pair.first.c_str());
					json_object_set_string(object, "value", digital_inputs_string[i].c_str());
					strings.push_back(json_serialize_to_string(value));
				}
			}

			std::string diString;
			for (size_t i = 0; i < strings.size(); ++i) {
				if (i == strings.size() - 1) {
					diString += std::string(strings[i]);
				}
				else {
					diString += std::string(strings[i]) + ",";
				}
			}
			diString = '[' + diString + ']';

			return diString;
		}
	}
	else if (pair.second.find("RelayToken") != std::string::npos) {

		if ((!relay_outputs.size()) && (m_verbose)) {
			if (!device.num_of_input_connectors) {
				std::cerr << "no relay_outputs" << std::endl;
			}
		}

		std::vector<char*> strings;

		if (relay_outputs.size()) {
			for (size_t i = 0; i < relay_outputs.size(); ++i) {
				JSON_Value* value = json_value_init_object();
				JSON_Object* object = json_value_get_object(value);
				json_object_set_string(object, "name", pair.first.c_str());
				json_object_set_string(object, "value", relay_outputs[i]->token.c_str());
				strings.push_back(json_serialize_to_string(value));
			}
		}
		else if (device.num_of_input_connectors) {
			JSON_Value* value = json_value_init_object();
			JSON_Object* object = json_value_get_object(value);
			json_object_set_string(object, "name", pair.first.c_str());
			strings.push_back(json_serialize_to_string(value));
		}

		std::string roString;
		for (size_t i = 0; i < strings.size(); ++i) {
			if (i == strings.size() - 1) {
				roString += std::string(strings[i]);
			}
			else {
				roString += std::string(strings[i]) + ",";
			}
		}
		roString = '[' + roString + ']';

		return roString;
	}
	else if (pair.second.find("ReferenceToken") != std::string::npos) {
		if (pair.first.find("VideoSource") != std::string::npos) {

		} else if (pair.first.find("Input") != std::string::npos) {

			if ((!diSoap) || (!diString)) {
				if (device.num_of_input_connectors) {
					for (int i = 0; i < device.num_of_input_connectors; ++i) {
						digital_inputs_string.push_back(std::to_string(i));
					}
					diString = true;
				}
				else {
					std::cerr << "This camera has a topic with InputTokens, but does not contain any data about them" << std::endl;
				}
			}




			if ((diSoap)||(diString)) {
				std::vector<char*> strings;
				if (diSoap) {
					for (size_t i = 0; i < digital_inputs_soap.size(); ++i) {
						JSON_Value* value = json_value_init_object();
						JSON_Object* object = json_value_get_object(value);
						json_object_set_string(object, "name", pair.first.c_str());
						json_object_set_string(object, "value", digital_inputs_soap[i]->token.c_str());
						strings.push_back(json_serialize_to_string(value));
					}
				}

				if (diString) {
					for (size_t i = 0; i < digital_inputs_string.size(); ++i) {
						JSON_Value* value = json_value_init_object();
						JSON_Object* object = json_value_get_object(value);
						json_object_set_string(object, "name", pair.first.c_str());
						json_object_set_string(object, "value", digital_inputs_string[i].c_str());
						strings.push_back(json_serialize_to_string(value));
					}
				}
				
				std::string diString;
				for (size_t i = 0; i < strings.size(); ++i) {
					if (i == strings.size() - 1) {
						diString += std::string(strings[i]);
					}
					else {
						diString += std::string(strings[i]) + ",";
					}
				}
				diString = '[' + diString + ']';

				return diString;
			} else if (device.num_of_input_connectors) { //Treat like int values
				std::cout << "Finish turning input connector into num" << std::endl;
			}
		}
		else if (pair.first.find("Relay") != std::string::npos) {
			if ((!relay_outputs.size()) && (m_verbose)) {
				if (!device.num_of_input_connectors) {
					std::cerr << "no relay_outputs" << std::endl;
				}
			}
			std::vector<char*> strings;

			if (relay_outputs.size()) {
				for (size_t i = 0; i < relay_outputs.size(); ++i) {
					JSON_Value* value = json_value_init_object();
					JSON_Object* object = json_value_get_object(value);
					json_object_set_string(object, "name", pair.first.c_str());
					json_object_set_string(object, "value", relay_outputs[i]->token.c_str());
					strings.push_back(json_serialize_to_string(value));
				}
			}
			else if (device.num_of_input_connectors) {
				for (size_t i = 0; i < device.num_of_input_connectors; ++i) {
					JSON_Value* value = json_value_init_object();
					JSON_Object* object = json_value_get_object(value);
					json_object_set_string(object, "name", pair.first.c_str());
					json_object_set_string(object, "value", std::to_string(i).c_str());
					strings.push_back(json_serialize_to_string(value));
				}
			}

			std::string roString;
			for (size_t i = 0; i < strings.size(); ++i) {
				if (i == strings.size() - 1) {
					roString += std::string(strings[i]);
				}
				else {
					roString += std::string(strings[i]) + ",";
				}
			}
			roString = '[' + roString + ']';

			return roString;
		}
		else {
			//std::cout << pair.first << " " << pair.second << std::endl;
		}
	}
	else {
		//std::cerr << "Unrecognized token: " << pair.second << std::endl;
	}

	token = "IN PROGRESS";

	//std::cout << "IN PROGRESS\n" << pair.first << " " << pair.second << std::endl;


	return token;
}

JSON_Value* GetData::DealWithTypes(std::pair<std::string, std::string> pair)
{

	JSON_Value* value = json_value_init_object();
	JSON_Object* json = json_value_get_object(value);
	
	//In the existing json some boolean values are written in a variety of ways. There is no way to figure out which way based off the camera
	if ((pair.second.find("boolean") != std::string::npos) || (pair.second.find("string") != std::string::npos)) {
		if ((pair.first.find("LogicalState") != std::string::npos)|| (pair.first.find("state") != std::string::npos)|| (pair.first.find("Level") != std::string::npos)) {
			json_object_set_string(json, "name", pair.first.c_str());
			json_object_set_string(json, "open", "false");
			json_object_set_string(json, "close", "true");
		}
		else if ((pair.first.find("State") != std::string::npos) || (pair.first.find("Is") != std::string::npos)) {
			json_object_set_string(json, "name", pair.first.c_str());
			json_object_set_string(json, "on", "true");
			json_object_set_string(json, "off", "false");
		}
		else {
			json_object_set_string(json, "name", pair.first.c_str());
			json_object_set_string(json, "on", "1");
			json_object_set_string(json, "off", "0");
		}
	}
	else if ((pair.first.find("Token") != std::string::npos) || (pair.second.find("Token") != std::string::npos)) {
		if (pair.first.find("Source") != std::string::npos) {
			json_object_set_string(json, "name", pair.first.c_str());
		}
		else {
			std::string tokens = FindReferenceToken(json, pair);
			value = json_parse_string(tokens.c_str());
		}
	}
	else if (pair.second.find("int") != std::string::npos) {

		//Some cameras who have motion input triggers simply have integer values
		//This value comes from the number of input connectors obtained through the Device Capabilities
		if (pair.first.find("Index") != std::string::npos) {
			JSON_Value* v_array = json_value_init_array();
			JSON_Array* array = json_value_get_array(v_array);


			for (int i = 0; i < device.num_of_input_connectors; ++i) {
				JSON_Value* value_i = json_value_init_object();
				JSON_Object* json_i = json_value_get_object(value_i);

				json_object_set_string(json_i, "name", pair.first.c_str());
				json_object_set_string(json_i, "value", std::to_string(i).c_str());

				json_array_append_value(array, value_i);
			}

			return v_array;
		}
		else {
			json_object_set_string(json, "name", pair.first.c_str());
			json_object_set_string(json, "int", pair.second.c_str());
		}
	}
	else if (pair.second.find("RelayLogicalState") != std::string::npos) {
		json_object_set_string(json, "name", pair.first.c_str());
		json_object_set_string(json, "open", "false");
		json_object_set_string(json, "close", "true");
	}
	else {
		std::cout << "Unknown datatype " << pair.second.c_str() << std::endl;
		json_object_set_string(json, "name", pair.first.c_str());
		json_object_set_string(json, "datatype", pair.second.c_str());
	}

	return value;
}

std::stringstream& GetData::returnStream()
{
	char *serialized_string = NULL;
	serialized_string = json_serialize_to_string_pretty(root_value);
	
	removeChar(serialized_string, '\\');
	stream << serialized_string;
	json_free_serialized_string(serialized_string);
	return stream;
}

std::string GetData::returnManu()
{
	return Manufacturer;
}

JSON_Value * GetData::returnRoot()
{
	return root_value;
}