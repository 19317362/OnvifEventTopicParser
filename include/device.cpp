#include "device.hpp"

#include <ctime>

#include "wsseapi.h"


Device::Device() {}

int Device::SyncCamTime()
{
	_tds__GetSystemDateAndTime GSDAT;
	_tds__GetSystemDateAndTimeResponse GSDATresp;
	int result = deviceBindProxy.GetSystemDateAndTime(&GSDAT, GSDATresp);
	if (result != SOAP_OK) {
		return 1;
	}
	
	tt__DateTime* camTime = GSDATresp.SystemDateAndTime->UTCDateTime;
	time_t localTime = std::time(NULL);
	struct tm offsetStruct;
	//= gmtime(&localTime);
	gmtime_s(&offsetStruct, &localTime);

	double offset = findDiffTime(offsetStruct, *camTime, GSDATresp.SystemDateAndTime->DaylightSavings);

	soap_wsse_add_Security(&deviceBindProxy);
	LocalAddUsernameTokenDigest(&deviceBindProxy, offset);

	// creating and setting parameter for the set date and time request
	_tds__SetSystemDateAndTime SetDateTimeReq;
	_tds__SetSystemDateAndTimeResponse SetSystemDateAndTimeResponse;
	
	SetDateTimeReq.DaylightSavings = (bool)offsetStruct.tm_isdst;// DayLightSavings
																	  
	tt__TimeZone* TiZ = new tt__TimeZone;	
	std::string TimeZ = "GMT-5:00:00";
	TiZ->TZ = TimeZ;	SetDateTimeReq.TimeZone = TiZ;
	tt__DateTime* UTCDateTime = new tt__DateTime;

	time_t NOW = std::time(NULL);
	struct tm noww;
	gmtime_s(&noww, &NOW);

	tt__Date thisDate;		
	thisDate.Day = noww.tm_mday;	

	// added 1 to month and 1900 to year to account for how tm defines those values
	thisDate.Month = noww.tm_mon + 1;	
	thisDate.Year = noww.tm_year + 1900; 

	tt__Time thisTime;		
	thisTime.Hour = noww.tm_hour + 1;
	thisTime.Minute = noww.tm_min;	
	thisTime.Second = noww.tm_sec;
	UTCDateTime->Date = &thisDate;	
	UTCDateTime->Time = &thisTime;
	SetDateTimeReq.UTCDateTime = UTCDateTime;
	result = deviceBindProxy.SetSystemDateAndTime(&SetDateTimeReq, SetSystemDateAndTimeResponse);

	if (result != SOAP_OK) {
		return 2;
	}

	return 0;
}

int Device::GetDeviceInformation()
{
	soap_wsse_add_Security(&deviceBindProxy);
	soap_wsse_add_UsernameTokenDigest(&deviceBindProxy, "Id", m_username.c_str(), m_password.c_str());
	_tds__GetDeviceInformation GDI;
	int result = deviceBindProxy.GetDeviceInformation(&GDI, GDIresp);

	if (result != SOAP_OK) {
		return result;
	}

	Manufacturer = GDIresp.Manufacturer;
	FirmwareVersion = GDIresp.FirmwareVersion;
	HardwareId = GDIresp.HardwareId;
	Model = GDIresp.Model;
	SerialNumber = GDIresp.SerialNumber;

	return result;
}

int Device::GetCapabilities()
{
	soap_wsse_add_Security(&deviceBindProxy);
	soap_wsse_add_UsernameTokenDigest(&deviceBindProxy, "Id", m_username.c_str(), m_password.c_str());

	_tds__GetCapabilities GC;
	int result = deviceBindProxy.GetCapabilities(&GC, GCresp);
	
	if (GCresp.Capabilities->Analytics) {
		if (GCresp.Capabilities->Analytics->XAddr.compare(m_url)) {
			anXaddr = GCresp.Capabilities->Analytics->XAddr;
		}
		else {
			anXaddr = m_url;
		}
	}

	if (GCresp.Capabilities->Device->XAddr.compare(m_url)) {
		deXaddr = GCresp.Capabilities->Device->XAddr;
	}
	else {
		deXaddr = m_url;
	}

	if (GCresp.Capabilities->Events->XAddr.compare(m_url)) {
		evXaddr = GCresp.Capabilities->Events->XAddr;
	}
	else {
		evXaddr = m_url;
	}

	if (GCresp.Capabilities->Media->XAddr.compare(m_url)) {
		meXaddr = GCresp.Capabilities->Media->XAddr;
	}
	else {
		meXaddr = m_url;
	}

	if (GCresp.Capabilities->Extension) {
		if (GCresp.Capabilities->Extension->DeviceIO->XAddr.compare(m_url)) {
			ioXaddr = GCresp.Capabilities->Extension->DeviceIO->XAddr;
		}
		else {
			ioXaddr = m_url;
		}
	}
	else {
		ioXaddr = m_url;
	}

	num_of_input_connectors = *GCresp.Capabilities->Device->IO->InputConnectors;

	return result;
}

int Device::GetRelayOutputs()
{
	soap_wsse_add_Security(&deviceBindProxy);
	soap_wsse_add_UsernameTokenDigest(&deviceBindProxy, "Id", m_username.c_str(), m_password.c_str());

	_tds__GetRelayOutputs GRO;
	int result = deviceBindProxy.GetRelayOutputs(&GRO, GROresp);

	return result;
}

int Device::GetServiceCapabilities()
{
	soap_wsse_add_Security(&deviceBindProxy);
	soap_wsse_add_UsernameTokenDigest(&deviceBindProxy, "Id", m_username.c_str(), m_password.c_str());

	_tds__GetServiceCapabilities GSC;
	int result = deviceBindProxy.GetServiceCapabilities(&GSC, GSCresp);
	return result;
}

void Device::SetParameters(std::string user, std::string pass, std::string url)
{
	m_username = user;
	m_password = pass;
	m_url = url;
	deviceBindProxy.soap_endpoint = m_url.c_str();
}

int Device::LocalAddUsernameTokenDigest(soap * soapOff, double cam_pc_offset)
{
	// start soap_wsse_add_UsernameTokenDigest; Taken from wsseapi.cpp
	_wsse__Security *security = soap_wsse_add_Security(soapOff);
	time_t now = time(NULL);
	now -= (time_t)cam_pc_offset; //offset so digest comes out correctly (synced times between cam and pc);
	struct tm offsetStruct;
	gmtime_s(&offsetStruct, &now);

	const char *created = soap_dateTime2s(soapOff, now);
	char HA[SOAP_SMD_SHA1_SIZE], HABase64[29];
	char nonce[20], *nonceBase64;

	//start calc_nonce(soapOff, nonce); Taken from wsseapi.cpp
	time_t r = time(NULL);
	r -= (time_t)cam_pc_offset; //offset so digest comes out correctly (synced times between cam and pc);
	memcpy(nonce, &r, 4);
	for (int i = 4; i < 20; i += 4)
	{
		r = soap_random;
		memcpy(nonce + i, &r, 4);
	}
	//end calc_nonce

	nonceBase64 = soap_s2base64(soapOff, (unsigned char*)nonce, NULL, 20);

	// start calc_digest(soapOff, created, nonce, 20, strPass, HA);  Taken from wsseapi.cpp
	struct soap_smd_data context;

	soap_smd_init(soapOff, &context, SOAP_SMD_DGST_SHA1, NULL, 0);
	soap_smd_update(soapOff, &context, nonce, 20);
	soap_smd_update(soapOff, &context, created, strlen(created));
	soap_smd_update(soapOff, &context, m_password.c_str(), strlen(m_password.c_str()));
	soap_smd_final(soapOff, &context, HA, NULL);
	// end calc_digest

	soap_s2base64(soapOff, (unsigned char*)HA, HABase64, SOAP_SMD_SHA1_SIZE);
	soap_wsse_add_UsernameTokenText(soapOff, "Id", m_username.c_str(), HABase64);

	security->UsernameToken->Password->Type = (char*)wsse_PasswordDigestURI;
	security->UsernameToken->Nonce = (struct wsse__EncodedString*)soap_malloc(soapOff, sizeof(struct wsse__EncodedString));

	if (!security->UsernameToken->Nonce)
		return soapOff->error = SOAP_EOM;
	soap_default_wsse__EncodedString(soapOff, security->UsernameToken->Nonce);
	security->UsernameToken->Nonce->__item = nonceBase64;
	security->UsernameToken->Nonce->EncodingType = (char*)wsse_Base64BinaryURI;
	security->UsernameToken->wsu__Created = soap_strdup(soapOff, created);
	return SOAP_OK;
}

double Device::findDiffTime(tm local_sys, tt__DateTime cameraTime, bool isDST)
{
	tt__Date* camDate = cameraTime.Date;
	tt__Time* camTime = cameraTime.Time;

	// Converting tt__DateTime to tm struct to find time offset
	struct tm *CamDateTime = new tm;

	CamDateTime->tm_hour = camTime->Hour;
	CamDateTime->tm_min = camTime->Minute;
	CamDateTime->tm_sec = camTime->Second;
	CamDateTime->tm_mday = camDate->Day;
	CamDateTime->tm_mon = camDate->Month;
	CamDateTime->tm_year = camDate->Year - 1900;
	CamDateTime->tm_isdst = isDST;

	if (isDST)
		CamDateTime->tm_hour++;
	//convert camera and system tm to time_t
	time_t camera_time_t = mktime(CamDateTime);		time_t sys_time_t = mktime(&local_sys);

	double diff = difftime(sys_time_t, camera_time_t);
	return diff;
}