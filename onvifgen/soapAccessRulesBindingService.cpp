/* soapAccessRulesBindingService.cpp
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

#include "soapAccessRulesBindingService.h"

AccessRulesBindingService::AccessRulesBindingService() : soap(SOAP_IO_DEFAULT)
{	AccessRulesBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

AccessRulesBindingService::AccessRulesBindingService(const AccessRulesBindingService& rhs)
{	soap_copy_context(this, &rhs);
}

AccessRulesBindingService::AccessRulesBindingService(const struct soap &_soap) : soap(_soap)
{ }

AccessRulesBindingService::AccessRulesBindingService(soap_mode iomode) : soap(iomode)
{	AccessRulesBindingService_init(iomode, iomode);
}

AccessRulesBindingService::AccessRulesBindingService(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	AccessRulesBindingService_init(imode, omode);
}

AccessRulesBindingService::~AccessRulesBindingService()
{
	this->destroy();
}

void AccessRulesBindingService::AccessRulesBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
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

void AccessRulesBindingService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void AccessRulesBindingService::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	AccessRulesBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
AccessRulesBindingService *AccessRulesBindingService::copy()
{	AccessRulesBindingService *dup = SOAP_NEW_UNMANAGED(AccessRulesBindingService(*(struct soap*)this));
	return dup;
}
#endif

AccessRulesBindingService& AccessRulesBindingService::operator=(const AccessRulesBindingService& rhs)
{	soap_done(this);
	soap_copy_context(this, &rhs);
	return *this;
}

int AccessRulesBindingService::soap_close_socket()
{	return soap_closesock(this);
}

int AccessRulesBindingService::soap_force_close_socket()
{	return soap_force_closesock(this);
}

int AccessRulesBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int AccessRulesBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int AccessRulesBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int AccessRulesBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void AccessRulesBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void AccessRulesBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *AccessRulesBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void AccessRulesBindingService::soap_noheader()
{	this->header = NULL;
}

void AccessRulesBindingService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
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

::SOAP_ENV__Header *AccessRulesBindingService::soap_header()
{	return this->header;
}

#ifndef WITH_NOIO
int AccessRulesBindingService::run(int port)
{	if (!soap_valid_socket(this->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->errnum == 0) // timeout?
				this->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int AccessRulesBindingService::ssl_run(int port)
{	if (!soap_valid_socket(this->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->errnum == 0) // timeout?
				this->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->error;
}
#endif

SOAP_SOCKET AccessRulesBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET AccessRulesBindingService::accept()
{	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int AccessRulesBindingService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif
#endif

int AccessRulesBindingService::serve()
{
#ifndef WITH_FASTCGI
	this->keep_alive = this->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->keep_alive > 0 && this->max_keep_alive > 0)
			this->keep_alive--;
#endif
		if (soap_begin_serve(this))
		{	if (this->error >= SOAP_STOP)
				continue;
			return this->error;
		}
		if ((dispatch() || (this->fserveloop && this->fserveloop(this))) && this->error && this->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___ns3__GetServiceCapabilities(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileInfo(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileInfoList(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfiles(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileList(AccessRulesBindingService*);
static int serve___ns3__CreateAccessProfile(AccessRulesBindingService*);
static int serve___ns3__ModifyAccessProfile(AccessRulesBindingService*);
static int serve___ns3__DeleteAccessProfile(AccessRulesBindingService*);

int AccessRulesBindingService::dispatch()
{
	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "ns3:GetServiceCapabilities"))
		return serve___ns3__GetServiceCapabilities(this);
	if (!soap_match_tag(this, this->tag, "ns3:GetAccessProfileInfo"))
		return serve___ns3__GetAccessProfileInfo(this);
	if (!soap_match_tag(this, this->tag, "ns3:GetAccessProfileInfoList"))
		return serve___ns3__GetAccessProfileInfoList(this);
	if (!soap_match_tag(this, this->tag, "ns3:GetAccessProfiles"))
		return serve___ns3__GetAccessProfiles(this);
	if (!soap_match_tag(this, this->tag, "ns3:GetAccessProfileList"))
		return serve___ns3__GetAccessProfileList(this);
	if (!soap_match_tag(this, this->tag, "ns3:CreateAccessProfile"))
		return serve___ns3__CreateAccessProfile(this);
	if (!soap_match_tag(this, this->tag, "ns3:ModifyAccessProfile"))
		return serve___ns3__ModifyAccessProfile(this);
	if (!soap_match_tag(this, this->tag, "ns3:DeleteAccessProfile"))
		return serve___ns3__DeleteAccessProfile(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___ns3__GetServiceCapabilities(AccessRulesBindingService *soap)
{	struct __ns3__GetServiceCapabilities soap_tmp___ns3__GetServiceCapabilities;
	_ns3__GetServiceCapabilitiesResponse ns3__GetServiceCapabilitiesResponse;
	ns3__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities);
	if (!soap_get___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities, "-ns3:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetServiceCapabilities(soap_tmp___ns3__GetServiceCapabilities.ns3__GetServiceCapabilities, ns3__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetServiceCapabilitiesResponse.soap_put(soap, "ns3:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetServiceCapabilitiesResponse.soap_put(soap, "ns3:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileInfo(AccessRulesBindingService *soap)
{	struct __ns3__GetAccessProfileInfo soap_tmp___ns3__GetAccessProfileInfo;
	_ns3__GetAccessProfileInfoResponse ns3__GetAccessProfileInfoResponse;
	ns3__GetAccessProfileInfoResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileInfo(soap, &soap_tmp___ns3__GetAccessProfileInfo);
	if (!soap_get___ns3__GetAccessProfileInfo(soap, &soap_tmp___ns3__GetAccessProfileInfo, "-ns3:GetAccessProfileInfo", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessProfileInfo(soap_tmp___ns3__GetAccessProfileInfo.ns3__GetAccessProfileInfo, ns3__GetAccessProfileInfoResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileInfoResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileInfoResponse.soap_put(soap, "ns3:GetAccessProfileInfoResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileInfoResponse.soap_put(soap, "ns3:GetAccessProfileInfoResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileInfoList(AccessRulesBindingService *soap)
{	struct __ns3__GetAccessProfileInfoList soap_tmp___ns3__GetAccessProfileInfoList;
	_ns3__GetAccessProfileInfoListResponse ns3__GetAccessProfileInfoListResponse;
	ns3__GetAccessProfileInfoListResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileInfoList(soap, &soap_tmp___ns3__GetAccessProfileInfoList);
	if (!soap_get___ns3__GetAccessProfileInfoList(soap, &soap_tmp___ns3__GetAccessProfileInfoList, "-ns3:GetAccessProfileInfoList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessProfileInfoList(soap_tmp___ns3__GetAccessProfileInfoList.ns3__GetAccessProfileInfoList, ns3__GetAccessProfileInfoListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileInfoListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileInfoListResponse.soap_put(soap, "ns3:GetAccessProfileInfoListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileInfoListResponse.soap_put(soap, "ns3:GetAccessProfileInfoListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfiles(AccessRulesBindingService *soap)
{	struct __ns3__GetAccessProfiles soap_tmp___ns3__GetAccessProfiles;
	_ns3__GetAccessProfilesResponse ns3__GetAccessProfilesResponse;
	ns3__GetAccessProfilesResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfiles(soap, &soap_tmp___ns3__GetAccessProfiles);
	if (!soap_get___ns3__GetAccessProfiles(soap, &soap_tmp___ns3__GetAccessProfiles, "-ns3:GetAccessProfiles", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessProfiles(soap_tmp___ns3__GetAccessProfiles.ns3__GetAccessProfiles, ns3__GetAccessProfilesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfilesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfilesResponse.soap_put(soap, "ns3:GetAccessProfilesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfilesResponse.soap_put(soap, "ns3:GetAccessProfilesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileList(AccessRulesBindingService *soap)
{	struct __ns3__GetAccessProfileList soap_tmp___ns3__GetAccessProfileList;
	_ns3__GetAccessProfileListResponse ns3__GetAccessProfileListResponse;
	ns3__GetAccessProfileListResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileList(soap, &soap_tmp___ns3__GetAccessProfileList);
	if (!soap_get___ns3__GetAccessProfileList(soap, &soap_tmp___ns3__GetAccessProfileList, "-ns3:GetAccessProfileList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessProfileList(soap_tmp___ns3__GetAccessProfileList.ns3__GetAccessProfileList, ns3__GetAccessProfileListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileListResponse.soap_put(soap, "ns3:GetAccessProfileListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileListResponse.soap_put(soap, "ns3:GetAccessProfileListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__CreateAccessProfile(AccessRulesBindingService *soap)
{	struct __ns3__CreateAccessProfile soap_tmp___ns3__CreateAccessProfile;
	_ns3__CreateAccessProfileResponse ns3__CreateAccessProfileResponse;
	ns3__CreateAccessProfileResponse.soap_default(soap);
	soap_default___ns3__CreateAccessProfile(soap, &soap_tmp___ns3__CreateAccessProfile);
	if (!soap_get___ns3__CreateAccessProfile(soap, &soap_tmp___ns3__CreateAccessProfile, "-ns3:CreateAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->CreateAccessProfile(soap_tmp___ns3__CreateAccessProfile.ns3__CreateAccessProfile, ns3__CreateAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__CreateAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__CreateAccessProfileResponse.soap_put(soap, "ns3:CreateAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__CreateAccessProfileResponse.soap_put(soap, "ns3:CreateAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__ModifyAccessProfile(AccessRulesBindingService *soap)
{	struct __ns3__ModifyAccessProfile soap_tmp___ns3__ModifyAccessProfile;
	_ns3__ModifyAccessProfileResponse ns3__ModifyAccessProfileResponse;
	ns3__ModifyAccessProfileResponse.soap_default(soap);
	soap_default___ns3__ModifyAccessProfile(soap, &soap_tmp___ns3__ModifyAccessProfile);
	if (!soap_get___ns3__ModifyAccessProfile(soap, &soap_tmp___ns3__ModifyAccessProfile, "-ns3:ModifyAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->ModifyAccessProfile(soap_tmp___ns3__ModifyAccessProfile.ns3__ModifyAccessProfile, ns3__ModifyAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__ModifyAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__ModifyAccessProfileResponse.soap_put(soap, "ns3:ModifyAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__ModifyAccessProfileResponse.soap_put(soap, "ns3:ModifyAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__DeleteAccessProfile(AccessRulesBindingService *soap)
{	struct __ns3__DeleteAccessProfile soap_tmp___ns3__DeleteAccessProfile;
	_ns3__DeleteAccessProfileResponse ns3__DeleteAccessProfileResponse;
	ns3__DeleteAccessProfileResponse.soap_default(soap);
	soap_default___ns3__DeleteAccessProfile(soap, &soap_tmp___ns3__DeleteAccessProfile);
	if (!soap_get___ns3__DeleteAccessProfile(soap, &soap_tmp___ns3__DeleteAccessProfile, "-ns3:DeleteAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->DeleteAccessProfile(soap_tmp___ns3__DeleteAccessProfile.ns3__DeleteAccessProfile, ns3__DeleteAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__DeleteAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__DeleteAccessProfileResponse.soap_put(soap, "ns3:DeleteAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__DeleteAccessProfileResponse.soap_put(soap, "ns3:DeleteAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
