/* soapPACSBindingService.cpp
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

#include "soapPACSBindingService.h"

PACSBindingService::PACSBindingService() : soap(SOAP_IO_DEFAULT)
{	PACSBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

PACSBindingService::PACSBindingService(const PACSBindingService& rhs)
{	soap_copy_context(this, &rhs);
}

PACSBindingService::PACSBindingService(const struct soap &_soap) : soap(_soap)
{ }

PACSBindingService::PACSBindingService(soap_mode iomode) : soap(iomode)
{	PACSBindingService_init(iomode, iomode);
}

PACSBindingService::PACSBindingService(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	PACSBindingService_init(imode, omode);
}

PACSBindingService::~PACSBindingService()
{
	this->destroy();
}

void PACSBindingService::PACSBindingService_init(soap_mode imode, soap_mode omode)
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

void PACSBindingService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void PACSBindingService::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	PACSBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
PACSBindingService *PACSBindingService::copy()
{	PACSBindingService *dup = SOAP_NEW_UNMANAGED(PACSBindingService(*(struct soap*)this));
	return dup;
}
#endif

PACSBindingService& PACSBindingService::operator=(const PACSBindingService& rhs)
{	soap_done(this);
	soap_copy_context(this, &rhs);
	return *this;
}

int PACSBindingService::soap_close_socket()
{	return soap_closesock(this);
}

int PACSBindingService::soap_force_close_socket()
{	return soap_force_closesock(this);
}

int PACSBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int PACSBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int PACSBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int PACSBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void PACSBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void PACSBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *PACSBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void PACSBindingService::soap_noheader()
{	this->header = NULL;
}

void PACSBindingService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
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

::SOAP_ENV__Header *PACSBindingService::soap_header()
{	return this->header;
}

#ifndef WITH_NOIO
int PACSBindingService::run(int port)
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
int PACSBindingService::ssl_run(int port)
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

SOAP_SOCKET PACSBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET PACSBindingService::accept()
{	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int PACSBindingService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif
#endif

int PACSBindingService::serve()
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

static int serve___ns1__GetServiceCapabilities(PACSBindingService*);
static int serve___ns1__GetAccessPointInfoList(PACSBindingService*);
static int serve___ns1__GetAccessPointInfo(PACSBindingService*);
static int serve___ns1__GetAreaInfoList(PACSBindingService*);
static int serve___ns1__GetAreaInfo(PACSBindingService*);
static int serve___ns1__GetAccessPointState(PACSBindingService*);
static int serve___ns1__EnableAccessPoint(PACSBindingService*);
static int serve___ns1__DisableAccessPoint(PACSBindingService*);
static int serve___ns1__ExternalAuthorization(PACSBindingService*);

int PACSBindingService::dispatch()
{
	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetServiceCapabilities"))
		return serve___ns1__GetServiceCapabilities(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetAccessPointInfoList"))
		return serve___ns1__GetAccessPointInfoList(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetAccessPointInfo"))
		return serve___ns1__GetAccessPointInfo(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetAreaInfoList"))
		return serve___ns1__GetAreaInfoList(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetAreaInfo"))
		return serve___ns1__GetAreaInfo(this);
	if (!soap_match_tag(this, this->tag, "ns1:GetAccessPointState"))
		return serve___ns1__GetAccessPointState(this);
	if (!soap_match_tag(this, this->tag, "ns1:EnableAccessPoint"))
		return serve___ns1__EnableAccessPoint(this);
	if (!soap_match_tag(this, this->tag, "ns1:DisableAccessPoint"))
		return serve___ns1__DisableAccessPoint(this);
	if (!soap_match_tag(this, this->tag, "ns1:ExternalAuthorization"))
		return serve___ns1__ExternalAuthorization(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___ns1__GetServiceCapabilities(PACSBindingService *soap)
{	struct __ns1__GetServiceCapabilities soap_tmp___ns1__GetServiceCapabilities;
	_ns1__GetServiceCapabilitiesResponse ns1__GetServiceCapabilitiesResponse;
	ns1__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___ns1__GetServiceCapabilities(soap, &soap_tmp___ns1__GetServiceCapabilities);
	if (!soap_get___ns1__GetServiceCapabilities(soap, &soap_tmp___ns1__GetServiceCapabilities, "-ns1:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetServiceCapabilities(soap_tmp___ns1__GetServiceCapabilities.ns1__GetServiceCapabilities, ns1__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetServiceCapabilitiesResponse.soap_put(soap, "ns1:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetServiceCapabilitiesResponse.soap_put(soap, "ns1:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__GetAccessPointInfoList(PACSBindingService *soap)
{	struct __ns1__GetAccessPointInfoList soap_tmp___ns1__GetAccessPointInfoList;
	_ns1__GetAccessPointInfoListResponse ns1__GetAccessPointInfoListResponse;
	ns1__GetAccessPointInfoListResponse.soap_default(soap);
	soap_default___ns1__GetAccessPointInfoList(soap, &soap_tmp___ns1__GetAccessPointInfoList);
	if (!soap_get___ns1__GetAccessPointInfoList(soap, &soap_tmp___ns1__GetAccessPointInfoList, "-ns1:GetAccessPointInfoList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessPointInfoList(soap_tmp___ns1__GetAccessPointInfoList.ns1__GetAccessPointInfoList, ns1__GetAccessPointInfoListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetAccessPointInfoListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetAccessPointInfoListResponse.soap_put(soap, "ns1:GetAccessPointInfoListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetAccessPointInfoListResponse.soap_put(soap, "ns1:GetAccessPointInfoListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__GetAccessPointInfo(PACSBindingService *soap)
{	struct __ns1__GetAccessPointInfo soap_tmp___ns1__GetAccessPointInfo;
	_ns1__GetAccessPointInfoResponse ns1__GetAccessPointInfoResponse;
	ns1__GetAccessPointInfoResponse.soap_default(soap);
	soap_default___ns1__GetAccessPointInfo(soap, &soap_tmp___ns1__GetAccessPointInfo);
	if (!soap_get___ns1__GetAccessPointInfo(soap, &soap_tmp___ns1__GetAccessPointInfo, "-ns1:GetAccessPointInfo", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessPointInfo(soap_tmp___ns1__GetAccessPointInfo.ns1__GetAccessPointInfo, ns1__GetAccessPointInfoResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetAccessPointInfoResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetAccessPointInfoResponse.soap_put(soap, "ns1:GetAccessPointInfoResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetAccessPointInfoResponse.soap_put(soap, "ns1:GetAccessPointInfoResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__GetAreaInfoList(PACSBindingService *soap)
{	struct __ns1__GetAreaInfoList soap_tmp___ns1__GetAreaInfoList;
	_ns1__GetAreaInfoListResponse ns1__GetAreaInfoListResponse;
	ns1__GetAreaInfoListResponse.soap_default(soap);
	soap_default___ns1__GetAreaInfoList(soap, &soap_tmp___ns1__GetAreaInfoList);
	if (!soap_get___ns1__GetAreaInfoList(soap, &soap_tmp___ns1__GetAreaInfoList, "-ns1:GetAreaInfoList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAreaInfoList(soap_tmp___ns1__GetAreaInfoList.ns1__GetAreaInfoList, ns1__GetAreaInfoListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetAreaInfoListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetAreaInfoListResponse.soap_put(soap, "ns1:GetAreaInfoListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetAreaInfoListResponse.soap_put(soap, "ns1:GetAreaInfoListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__GetAreaInfo(PACSBindingService *soap)
{	struct __ns1__GetAreaInfo soap_tmp___ns1__GetAreaInfo;
	_ns1__GetAreaInfoResponse ns1__GetAreaInfoResponse;
	ns1__GetAreaInfoResponse.soap_default(soap);
	soap_default___ns1__GetAreaInfo(soap, &soap_tmp___ns1__GetAreaInfo);
	if (!soap_get___ns1__GetAreaInfo(soap, &soap_tmp___ns1__GetAreaInfo, "-ns1:GetAreaInfo", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAreaInfo(soap_tmp___ns1__GetAreaInfo.ns1__GetAreaInfo, ns1__GetAreaInfoResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetAreaInfoResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetAreaInfoResponse.soap_put(soap, "ns1:GetAreaInfoResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetAreaInfoResponse.soap_put(soap, "ns1:GetAreaInfoResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__GetAccessPointState(PACSBindingService *soap)
{	struct __ns1__GetAccessPointState soap_tmp___ns1__GetAccessPointState;
	_ns1__GetAccessPointStateResponse ns1__GetAccessPointStateResponse;
	ns1__GetAccessPointStateResponse.soap_default(soap);
	soap_default___ns1__GetAccessPointState(soap, &soap_tmp___ns1__GetAccessPointState);
	if (!soap_get___ns1__GetAccessPointState(soap, &soap_tmp___ns1__GetAccessPointState, "-ns1:GetAccessPointState", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->GetAccessPointState(soap_tmp___ns1__GetAccessPointState.ns1__GetAccessPointState, ns1__GetAccessPointStateResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__GetAccessPointStateResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__GetAccessPointStateResponse.soap_put(soap, "ns1:GetAccessPointStateResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__GetAccessPointStateResponse.soap_put(soap, "ns1:GetAccessPointStateResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__EnableAccessPoint(PACSBindingService *soap)
{	struct __ns1__EnableAccessPoint soap_tmp___ns1__EnableAccessPoint;
	_ns1__EnableAccessPointResponse ns1__EnableAccessPointResponse;
	ns1__EnableAccessPointResponse.soap_default(soap);
	soap_default___ns1__EnableAccessPoint(soap, &soap_tmp___ns1__EnableAccessPoint);
	if (!soap_get___ns1__EnableAccessPoint(soap, &soap_tmp___ns1__EnableAccessPoint, "-ns1:EnableAccessPoint", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->EnableAccessPoint(soap_tmp___ns1__EnableAccessPoint.ns1__EnableAccessPoint, ns1__EnableAccessPointResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__EnableAccessPointResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__EnableAccessPointResponse.soap_put(soap, "ns1:EnableAccessPointResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__EnableAccessPointResponse.soap_put(soap, "ns1:EnableAccessPointResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__DisableAccessPoint(PACSBindingService *soap)
{	struct __ns1__DisableAccessPoint soap_tmp___ns1__DisableAccessPoint;
	_ns1__DisableAccessPointResponse ns1__DisableAccessPointResponse;
	ns1__DisableAccessPointResponse.soap_default(soap);
	soap_default___ns1__DisableAccessPoint(soap, &soap_tmp___ns1__DisableAccessPoint);
	if (!soap_get___ns1__DisableAccessPoint(soap, &soap_tmp___ns1__DisableAccessPoint, "-ns1:DisableAccessPoint", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->DisableAccessPoint(soap_tmp___ns1__DisableAccessPoint.ns1__DisableAccessPoint, ns1__DisableAccessPointResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__DisableAccessPointResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__DisableAccessPointResponse.soap_put(soap, "ns1:DisableAccessPointResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__DisableAccessPointResponse.soap_put(soap, "ns1:DisableAccessPointResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__ExternalAuthorization(PACSBindingService *soap)
{	struct __ns1__ExternalAuthorization soap_tmp___ns1__ExternalAuthorization;
	_ns1__ExternalAuthorizationResponse ns1__ExternalAuthorizationResponse;
	ns1__ExternalAuthorizationResponse.soap_default(soap);
	soap_default___ns1__ExternalAuthorization(soap, &soap_tmp___ns1__ExternalAuthorization);
	if (!soap_get___ns1__ExternalAuthorization(soap, &soap_tmp___ns1__ExternalAuthorization, "-ns1:ExternalAuthorization", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->ExternalAuthorization(soap_tmp___ns1__ExternalAuthorization.ns1__ExternalAuthorization, ns1__ExternalAuthorizationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns1__ExternalAuthorizationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns1__ExternalAuthorizationResponse.soap_put(soap, "ns1:ExternalAuthorizationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns1__ExternalAuthorizationResponse.soap_put(soap, "ns1:ExternalAuthorizationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
