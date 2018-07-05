#pragma once
#include <string>
#include "parson.h"
#include <sstream>
#include "device.hpp"
#include "profiles.hpp"
#include "event.hpp"

class GetData {
public: //Constructor
	GetData(std::string user, std::string pass, std::string url);
private://Internal functions
	void ToJsonTopicTwoElements(std::string, std::vector<std::pair<std::string, std::string>>);
	void ToJsonTopicMoreElements(std::string, std::vector<std::pair<std::string, std::string>>);
	void ToJsonTopicLessElements(std::string, std::vector<std::pair<std::string, std::string>>);
	bool IsMotion(std::string);
	bool IsInTrig(std::string);
	std::string FindReferenceToken(std::pair<std::string, std::string>);
	void DealWithTypes(JSON_Object*, std::pair<std::string, std::string>);
public:
	std::stringstream& returnStream();
	std::string returnManu();
	JSON_Value* returnRoot();
private:
	std::string m_username;
	std::string m_password;
	std::string m_url;
	std::string event_url;
	std::string media_url;
	std::vector<std::string> motionV;
	std::vector<std::string> inputV;
	std::stringstream stream;
	std::string Manufacturer;
	JSON_Value * root_value;
	Profiles profile;
	Device device;
	Event event;
public:
	std::string io_url;
};