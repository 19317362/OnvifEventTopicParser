/* soapDoorControlBindingProxy.cpp
   Generated by gSOAP 2.8.66 for onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapDoorControlBindingProxy.h"

DoorControlBindingProxy::DoorControlBindingProxy() : soap(SOAP_IO_DEFAULT)
{	DoorControlBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DoorControlBindingProxy::DoorControlBindingProxy(const DoorControlBindingProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

DoorControlBindingProxy::DoorControlBindingProxy(const struct soap &_soap) : soap(_soap)
{ }

DoorControlBindingProxy::DoorControlBindingProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	DoorControlBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

DoorControlBindingProxy::DoorControlBindingProxy(soap_mode iomode) : soap(iomode)
{	DoorControlBindingProxy_init(iomode, iomode);
}

DoorControlBindingProxy::DoorControlBindingProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	DoorControlBindingProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

DoorControlBindingProxy::DoorControlBindingProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	DoorControlBindingProxy_init(imode, omode);
}

DoorControlBindingProxy::~DoorControlBindingProxy()
{
	this->destroy();
	}

void DoorControlBindingProxy::DoorControlBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
        {"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
        {"saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL},
        {"saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL},
        {"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
        {"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
        {"wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", NULL, NULL},
        {"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {"wsdd", "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01", NULL, NULL},
        {"ns12", "http://www.onvif.org/ver20/analytics", NULL, NULL},
        {"ns2", "http://www.onvif.org/ver10/pacs", NULL, NULL},
        {"ns10", "http://www.onvif.org/ver20/analytics/radiometry", NULL, NULL},
        {"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
        {"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
        {"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
        {"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
        {"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
        {"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
        {"ns1", "http://www.onvif.org/ver10/accesscontrol/wsdl", NULL, NULL},
        {"ns11", "http://www.onvif.org/ver10/network/wsdl/", NULL, NULL},
        {"ns13", "http://www.onvif.org/ver10/schedule/wsdl", NULL, NULL},
        {"ns14", "http://www.onvif.org/ver10/thermal/wsdl", NULL, NULL},
        {"ns3", "http://www.onvif.org/ver10/accessrules/wsdl", NULL, NULL},
        {"ns4", "http://www.onvif.org/ver10/actionengine/wsdl", NULL, NULL},
        {"ns5", "http://www.onvif.org/ver10/advancedsecurity/wsdl", NULL, NULL},
        {"ns6", "http://www.onvif.org/ver10/credential/wsdl", NULL, NULL},
        {"ns7", "http://www.onvif.org/ver10/doorcontrol/wsdl", NULL, NULL},
        {"ns8", "http://www.onvif.org/ver20/media/wsdl", NULL, NULL},
        {"ns9", "http://www.onvif.org/ver10/provisioning/wsdl", NULL, NULL},
        {"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
        {"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
        {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
        {"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
        {"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
        {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
        {"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
        {"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
        {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
        {"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
        {"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
        {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
        {"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
        {"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

DoorControlBindingProxy *DoorControlBindingProxy::copy()
{	DoorControlBindingProxy *dup = SOAP_NEW_UNMANAGED(DoorControlBindingProxy(*(struct soap*)this));
	return dup;
}

DoorControlBindingProxy& DoorControlBindingProxy::operator=(const DoorControlBindingProxy& rhs)
{	soap_done(this);
	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void DoorControlBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void DoorControlBindingProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	DoorControlBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void DoorControlBindingProxy::soap_noheader()
{	this->header = NULL;
}

void DoorControlBindingProxy::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
{	::soap_header(this);
	this->header->wsse__Security = wsse__Security;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
	this->header->chan__ChannelInstance = chan__ChannelInstance;
	this->header->wsdd__AppSequence = wsdd__AppSequence;
}

::SOAP_ENV__Header *DoorControlBindingProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *DoorControlBindingProxy::soap_fault()
{	return this->fault;
}

const char *DoorControlBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *DoorControlBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int DoorControlBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

int DoorControlBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void DoorControlBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void DoorControlBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *DoorControlBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int DoorControlBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns7__GetServiceCapabilities *ns7__GetServiceCapabilities, _ns7__GetServiceCapabilitiesResponse &ns7__GetServiceCapabilitiesResponse)
{	struct soap *soap = this;
	struct __ns7__GetServiceCapabilities soap_tmp___ns7__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/GetServiceCapabilities";
	soap_tmp___ns7__GetServiceCapabilities.ns7__GetServiceCapabilities = ns7__GetServiceCapabilities;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__GetServiceCapabilities(soap, &soap_tmp___ns7__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__GetServiceCapabilities(soap, &soap_tmp___ns7__GetServiceCapabilities, "-ns7:GetServiceCapabilities", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__GetServiceCapabilities(soap, &soap_tmp___ns7__GetServiceCapabilities, "-ns7:GetServiceCapabilities", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__GetServiceCapabilitiesResponse*>(&ns7__GetServiceCapabilitiesResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__GetServiceCapabilitiesResponse.soap_get(soap, "ns7:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::GetDoorInfoList(const char *endpoint, const char *soap_action, _ns7__GetDoorInfoList *ns7__GetDoorInfoList, _ns7__GetDoorInfoListResponse &ns7__GetDoorInfoListResponse)
{	struct soap *soap = this;
	struct __ns7__GetDoorInfoList soap_tmp___ns7__GetDoorInfoList;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/GetDoorInfoList";
	soap_tmp___ns7__GetDoorInfoList.ns7__GetDoorInfoList = ns7__GetDoorInfoList;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__GetDoorInfoList(soap, &soap_tmp___ns7__GetDoorInfoList);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__GetDoorInfoList(soap, &soap_tmp___ns7__GetDoorInfoList, "-ns7:GetDoorInfoList", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__GetDoorInfoList(soap, &soap_tmp___ns7__GetDoorInfoList, "-ns7:GetDoorInfoList", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__GetDoorInfoListResponse*>(&ns7__GetDoorInfoListResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__GetDoorInfoListResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__GetDoorInfoListResponse.soap_get(soap, "ns7:GetDoorInfoListResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::GetDoorInfo(const char *endpoint, const char *soap_action, _ns7__GetDoorInfo *ns7__GetDoorInfo, _ns7__GetDoorInfoResponse &ns7__GetDoorInfoResponse)
{	struct soap *soap = this;
	struct __ns7__GetDoorInfo soap_tmp___ns7__GetDoorInfo;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/GetDoorInfo";
	soap_tmp___ns7__GetDoorInfo.ns7__GetDoorInfo = ns7__GetDoorInfo;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__GetDoorInfo(soap, &soap_tmp___ns7__GetDoorInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__GetDoorInfo(soap, &soap_tmp___ns7__GetDoorInfo, "-ns7:GetDoorInfo", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__GetDoorInfo(soap, &soap_tmp___ns7__GetDoorInfo, "-ns7:GetDoorInfo", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__GetDoorInfoResponse*>(&ns7__GetDoorInfoResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__GetDoorInfoResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__GetDoorInfoResponse.soap_get(soap, "ns7:GetDoorInfoResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::GetDoorState(const char *endpoint, const char *soap_action, _ns7__GetDoorState *ns7__GetDoorState, _ns7__GetDoorStateResponse &ns7__GetDoorStateResponse)
{	struct soap *soap = this;
	struct __ns7__GetDoorState soap_tmp___ns7__GetDoorState;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/GetDoorState";
	soap_tmp___ns7__GetDoorState.ns7__GetDoorState = ns7__GetDoorState;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__GetDoorState(soap, &soap_tmp___ns7__GetDoorState);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__GetDoorState(soap, &soap_tmp___ns7__GetDoorState, "-ns7:GetDoorState", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__GetDoorState(soap, &soap_tmp___ns7__GetDoorState, "-ns7:GetDoorState", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__GetDoorStateResponse*>(&ns7__GetDoorStateResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__GetDoorStateResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__GetDoorStateResponse.soap_get(soap, "ns7:GetDoorStateResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::AccessDoor(const char *endpoint, const char *soap_action, _ns7__AccessDoor *ns7__AccessDoor, _ns7__AccessDoorResponse &ns7__AccessDoorResponse)
{	struct soap *soap = this;
	struct __ns7__AccessDoor soap_tmp___ns7__AccessDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/AccessDoor";
	soap_tmp___ns7__AccessDoor.ns7__AccessDoor = ns7__AccessDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__AccessDoor(soap, &soap_tmp___ns7__AccessDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__AccessDoor(soap, &soap_tmp___ns7__AccessDoor, "-ns7:AccessDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__AccessDoor(soap, &soap_tmp___ns7__AccessDoor, "-ns7:AccessDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__AccessDoorResponse*>(&ns7__AccessDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__AccessDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__AccessDoorResponse.soap_get(soap, "ns7:AccessDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::LockDoor(const char *endpoint, const char *soap_action, _ns7__LockDoor *ns7__LockDoor, _ns7__LockDoorResponse &ns7__LockDoorResponse)
{	struct soap *soap = this;
	struct __ns7__LockDoor soap_tmp___ns7__LockDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/LockDoor";
	soap_tmp___ns7__LockDoor.ns7__LockDoor = ns7__LockDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__LockDoor(soap, &soap_tmp___ns7__LockDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__LockDoor(soap, &soap_tmp___ns7__LockDoor, "-ns7:LockDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__LockDoor(soap, &soap_tmp___ns7__LockDoor, "-ns7:LockDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__LockDoorResponse*>(&ns7__LockDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__LockDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__LockDoorResponse.soap_get(soap, "ns7:LockDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::UnlockDoor(const char *endpoint, const char *soap_action, _ns7__UnlockDoor *ns7__UnlockDoor, _ns7__UnlockDoorResponse &ns7__UnlockDoorResponse)
{	struct soap *soap = this;
	struct __ns7__UnlockDoor soap_tmp___ns7__UnlockDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/UnlockDoor";
	soap_tmp___ns7__UnlockDoor.ns7__UnlockDoor = ns7__UnlockDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__UnlockDoor(soap, &soap_tmp___ns7__UnlockDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__UnlockDoor(soap, &soap_tmp___ns7__UnlockDoor, "-ns7:UnlockDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__UnlockDoor(soap, &soap_tmp___ns7__UnlockDoor, "-ns7:UnlockDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__UnlockDoorResponse*>(&ns7__UnlockDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__UnlockDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__UnlockDoorResponse.soap_get(soap, "ns7:UnlockDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::BlockDoor(const char *endpoint, const char *soap_action, _ns7__BlockDoor *ns7__BlockDoor, _ns7__BlockDoorResponse &ns7__BlockDoorResponse)
{	struct soap *soap = this;
	struct __ns7__BlockDoor soap_tmp___ns7__BlockDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/BlockDoor";
	soap_tmp___ns7__BlockDoor.ns7__BlockDoor = ns7__BlockDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__BlockDoor(soap, &soap_tmp___ns7__BlockDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__BlockDoor(soap, &soap_tmp___ns7__BlockDoor, "-ns7:BlockDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__BlockDoor(soap, &soap_tmp___ns7__BlockDoor, "-ns7:BlockDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__BlockDoorResponse*>(&ns7__BlockDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__BlockDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__BlockDoorResponse.soap_get(soap, "ns7:BlockDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::LockDownDoor(const char *endpoint, const char *soap_action, _ns7__LockDownDoor *ns7__LockDownDoor, _ns7__LockDownDoorResponse &ns7__LockDownDoorResponse)
{	struct soap *soap = this;
	struct __ns7__LockDownDoor soap_tmp___ns7__LockDownDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/LockDownDoor";
	soap_tmp___ns7__LockDownDoor.ns7__LockDownDoor = ns7__LockDownDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__LockDownDoor(soap, &soap_tmp___ns7__LockDownDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__LockDownDoor(soap, &soap_tmp___ns7__LockDownDoor, "-ns7:LockDownDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__LockDownDoor(soap, &soap_tmp___ns7__LockDownDoor, "-ns7:LockDownDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__LockDownDoorResponse*>(&ns7__LockDownDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__LockDownDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__LockDownDoorResponse.soap_get(soap, "ns7:LockDownDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::LockDownReleaseDoor(const char *endpoint, const char *soap_action, _ns7__LockDownReleaseDoor *ns7__LockDownReleaseDoor, _ns7__LockDownReleaseDoorResponse &ns7__LockDownReleaseDoorResponse)
{	struct soap *soap = this;
	struct __ns7__LockDownReleaseDoor soap_tmp___ns7__LockDownReleaseDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/LockDownReleaseDoor";
	soap_tmp___ns7__LockDownReleaseDoor.ns7__LockDownReleaseDoor = ns7__LockDownReleaseDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__LockDownReleaseDoor(soap, &soap_tmp___ns7__LockDownReleaseDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__LockDownReleaseDoor(soap, &soap_tmp___ns7__LockDownReleaseDoor, "-ns7:LockDownReleaseDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__LockDownReleaseDoor(soap, &soap_tmp___ns7__LockDownReleaseDoor, "-ns7:LockDownReleaseDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__LockDownReleaseDoorResponse*>(&ns7__LockDownReleaseDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__LockDownReleaseDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__LockDownReleaseDoorResponse.soap_get(soap, "ns7:LockDownReleaseDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::LockOpenDoor(const char *endpoint, const char *soap_action, _ns7__LockOpenDoor *ns7__LockOpenDoor, _ns7__LockOpenDoorResponse &ns7__LockOpenDoorResponse)
{	struct soap *soap = this;
	struct __ns7__LockOpenDoor soap_tmp___ns7__LockOpenDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/LockOpenDoor";
	soap_tmp___ns7__LockOpenDoor.ns7__LockOpenDoor = ns7__LockOpenDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__LockOpenDoor(soap, &soap_tmp___ns7__LockOpenDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__LockOpenDoor(soap, &soap_tmp___ns7__LockOpenDoor, "-ns7:LockOpenDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__LockOpenDoor(soap, &soap_tmp___ns7__LockOpenDoor, "-ns7:LockOpenDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__LockOpenDoorResponse*>(&ns7__LockOpenDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__LockOpenDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__LockOpenDoorResponse.soap_get(soap, "ns7:LockOpenDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::LockOpenReleaseDoor(const char *endpoint, const char *soap_action, _ns7__LockOpenReleaseDoor *ns7__LockOpenReleaseDoor, _ns7__LockOpenReleaseDoorResponse &ns7__LockOpenReleaseDoorResponse)
{	struct soap *soap = this;
	struct __ns7__LockOpenReleaseDoor soap_tmp___ns7__LockOpenReleaseDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/LockOpenReleaseDoor";
	soap_tmp___ns7__LockOpenReleaseDoor.ns7__LockOpenReleaseDoor = ns7__LockOpenReleaseDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__LockOpenReleaseDoor(soap, &soap_tmp___ns7__LockOpenReleaseDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__LockOpenReleaseDoor(soap, &soap_tmp___ns7__LockOpenReleaseDoor, "-ns7:LockOpenReleaseDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__LockOpenReleaseDoor(soap, &soap_tmp___ns7__LockOpenReleaseDoor, "-ns7:LockOpenReleaseDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__LockOpenReleaseDoorResponse*>(&ns7__LockOpenReleaseDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__LockOpenReleaseDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__LockOpenReleaseDoorResponse.soap_get(soap, "ns7:LockOpenReleaseDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DoorControlBindingProxy::DoubleLockDoor(const char *endpoint, const char *soap_action, _ns7__DoubleLockDoor *ns7__DoubleLockDoor, _ns7__DoubleLockDoorResponse &ns7__DoubleLockDoorResponse)
{	struct soap *soap = this;
	struct __ns7__DoubleLockDoor soap_tmp___ns7__DoubleLockDoor;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/doorcontrol/wsdl/DoubleLockDoor";
	soap_tmp___ns7__DoubleLockDoor.ns7__DoubleLockDoor = ns7__DoubleLockDoor;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns7__DoubleLockDoor(soap, &soap_tmp___ns7__DoubleLockDoor);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__DoubleLockDoor(soap, &soap_tmp___ns7__DoubleLockDoor, "-ns7:DoubleLockDoor", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns7__DoubleLockDoor(soap, &soap_tmp___ns7__DoubleLockDoor, "-ns7:DoubleLockDoor", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns7__DoubleLockDoorResponse*>(&ns7__DoubleLockDoorResponse)) // NULL ref?
		return soap_closesock(soap);
	ns7__DoubleLockDoorResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__DoubleLockDoorResponse.soap_get(soap, "ns7:DoubleLockDoorResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
