/* soapPACSBindingProxy.h
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

#ifndef soapPACSBindingProxy_H
#define soapPACSBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC PACSBindingProxy : public soap {
      public:
        /// Endpoint URL of service 'PACSBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        PACSBindingProxy();
        /// Copy constructor
        PACSBindingProxy(const PACSBindingProxy& rhs);
        /// Construct proxy given a managing context
        PACSBindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        PACSBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        PACSBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        PACSBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PACSBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~PACSBindingProxy();
        /// Initializer used by constructors
        virtual void PACSBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PACSBindingProxy *copy();
        /// Copy assignment
        PACSBindingProxy& operator=(const PACSBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns1__GetServiceCapabilities, ns1__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetAccessPointInfoList' (returns SOAP_OK or error code)
        virtual int GetAccessPointInfoList(_ns1__GetAccessPointInfoList *ns1__GetAccessPointInfoList, _ns1__GetAccessPointInfoListResponse &ns1__GetAccessPointInfoListResponse)
        { return this->GetAccessPointInfoList(NULL, NULL, ns1__GetAccessPointInfoList, ns1__GetAccessPointInfoListResponse); }
        virtual int GetAccessPointInfoList(const char *soap_endpoint, const char *soap_action, _ns1__GetAccessPointInfoList *ns1__GetAccessPointInfoList, _ns1__GetAccessPointInfoListResponse &ns1__GetAccessPointInfoListResponse);
        /// Web service operation 'GetAccessPointInfo' (returns SOAP_OK or error code)
        virtual int GetAccessPointInfo(_ns1__GetAccessPointInfo *ns1__GetAccessPointInfo, _ns1__GetAccessPointInfoResponse &ns1__GetAccessPointInfoResponse)
        { return this->GetAccessPointInfo(NULL, NULL, ns1__GetAccessPointInfo, ns1__GetAccessPointInfoResponse); }
        virtual int GetAccessPointInfo(const char *soap_endpoint, const char *soap_action, _ns1__GetAccessPointInfo *ns1__GetAccessPointInfo, _ns1__GetAccessPointInfoResponse &ns1__GetAccessPointInfoResponse);
        /// Web service operation 'GetAreaInfoList' (returns SOAP_OK or error code)
        virtual int GetAreaInfoList(_ns1__GetAreaInfoList *ns1__GetAreaInfoList, _ns1__GetAreaInfoListResponse &ns1__GetAreaInfoListResponse)
        { return this->GetAreaInfoList(NULL, NULL, ns1__GetAreaInfoList, ns1__GetAreaInfoListResponse); }
        virtual int GetAreaInfoList(const char *soap_endpoint, const char *soap_action, _ns1__GetAreaInfoList *ns1__GetAreaInfoList, _ns1__GetAreaInfoListResponse &ns1__GetAreaInfoListResponse);
        /// Web service operation 'GetAreaInfo' (returns SOAP_OK or error code)
        virtual int GetAreaInfo(_ns1__GetAreaInfo *ns1__GetAreaInfo, _ns1__GetAreaInfoResponse &ns1__GetAreaInfoResponse)
        { return this->GetAreaInfo(NULL, NULL, ns1__GetAreaInfo, ns1__GetAreaInfoResponse); }
        virtual int GetAreaInfo(const char *soap_endpoint, const char *soap_action, _ns1__GetAreaInfo *ns1__GetAreaInfo, _ns1__GetAreaInfoResponse &ns1__GetAreaInfoResponse);
        /// Web service operation 'GetAccessPointState' (returns SOAP_OK or error code)
        virtual int GetAccessPointState(_ns1__GetAccessPointState *ns1__GetAccessPointState, _ns1__GetAccessPointStateResponse &ns1__GetAccessPointStateResponse)
        { return this->GetAccessPointState(NULL, NULL, ns1__GetAccessPointState, ns1__GetAccessPointStateResponse); }
        virtual int GetAccessPointState(const char *soap_endpoint, const char *soap_action, _ns1__GetAccessPointState *ns1__GetAccessPointState, _ns1__GetAccessPointStateResponse &ns1__GetAccessPointStateResponse);
        /// Web service operation 'EnableAccessPoint' (returns SOAP_OK or error code)
        virtual int EnableAccessPoint(_ns1__EnableAccessPoint *ns1__EnableAccessPoint, _ns1__EnableAccessPointResponse &ns1__EnableAccessPointResponse)
        { return this->EnableAccessPoint(NULL, NULL, ns1__EnableAccessPoint, ns1__EnableAccessPointResponse); }
        virtual int EnableAccessPoint(const char *soap_endpoint, const char *soap_action, _ns1__EnableAccessPoint *ns1__EnableAccessPoint, _ns1__EnableAccessPointResponse &ns1__EnableAccessPointResponse);
        /// Web service operation 'DisableAccessPoint' (returns SOAP_OK or error code)
        virtual int DisableAccessPoint(_ns1__DisableAccessPoint *ns1__DisableAccessPoint, _ns1__DisableAccessPointResponse &ns1__DisableAccessPointResponse)
        { return this->DisableAccessPoint(NULL, NULL, ns1__DisableAccessPoint, ns1__DisableAccessPointResponse); }
        virtual int DisableAccessPoint(const char *soap_endpoint, const char *soap_action, _ns1__DisableAccessPoint *ns1__DisableAccessPoint, _ns1__DisableAccessPointResponse &ns1__DisableAccessPointResponse);
        /// Web service operation 'ExternalAuthorization' (returns SOAP_OK or error code)
        virtual int ExternalAuthorization(_ns1__ExternalAuthorization *ns1__ExternalAuthorization, _ns1__ExternalAuthorizationResponse &ns1__ExternalAuthorizationResponse)
        { return this->ExternalAuthorization(NULL, NULL, ns1__ExternalAuthorization, ns1__ExternalAuthorizationResponse); }
        virtual int ExternalAuthorization(const char *soap_endpoint, const char *soap_action, _ns1__ExternalAuthorization *ns1__ExternalAuthorization, _ns1__ExternalAuthorizationResponse &ns1__ExternalAuthorizationResponse);
    };
#endif
