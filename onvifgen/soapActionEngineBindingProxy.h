/* soapActionEngineBindingProxy.h
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

#ifndef soapActionEngineBindingProxy_H
#define soapActionEngineBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC ActionEngineBindingProxy : public soap {
      public:
        /// Endpoint URL of service 'ActionEngineBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        ActionEngineBindingProxy();
        /// Copy constructor
        ActionEngineBindingProxy(const ActionEngineBindingProxy& rhs);
        /// Construct proxy given a managing context
        ActionEngineBindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        ActionEngineBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        ActionEngineBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        ActionEngineBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        ActionEngineBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~ActionEngineBindingProxy();
        /// Initializer used by constructors
        virtual void ActionEngineBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual ActionEngineBindingProxy *copy();
        /// Copy assignment
        ActionEngineBindingProxy& operator=(const ActionEngineBindingProxy&);
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
        /// Web service operation 'GetSupportedActions' (returns SOAP_OK or error code)
        virtual int GetSupportedActions(_ns4__GetSupportedActions *ns4__GetSupportedActions, _ns4__GetSupportedActionsResponse &ns4__GetSupportedActionsResponse)
        { return this->GetSupportedActions(NULL, NULL, ns4__GetSupportedActions, ns4__GetSupportedActionsResponse); }
        virtual int GetSupportedActions(const char *soap_endpoint, const char *soap_action, _ns4__GetSupportedActions *ns4__GetSupportedActions, _ns4__GetSupportedActionsResponse &ns4__GetSupportedActionsResponse);
        /// Web service operation 'GetActions' (returns SOAP_OK or error code)
        virtual int GetActions(_ns4__GetActions *ns4__GetActions, _ns4__GetActionsResponse &ns4__GetActionsResponse)
        { return this->GetActions(NULL, NULL, ns4__GetActions, ns4__GetActionsResponse); }
        virtual int GetActions(const char *soap_endpoint, const char *soap_action, _ns4__GetActions *ns4__GetActions, _ns4__GetActionsResponse &ns4__GetActionsResponse);
        /// Web service operation 'CreateActions' (returns SOAP_OK or error code)
        virtual int CreateActions(_ns4__CreateActions *ns4__CreateActions, _ns4__CreateActionsResponse &ns4__CreateActionsResponse)
        { return this->CreateActions(NULL, NULL, ns4__CreateActions, ns4__CreateActionsResponse); }
        virtual int CreateActions(const char *soap_endpoint, const char *soap_action, _ns4__CreateActions *ns4__CreateActions, _ns4__CreateActionsResponse &ns4__CreateActionsResponse);
        /// Web service operation 'DeleteActions' (returns SOAP_OK or error code)
        virtual int DeleteActions(_ns4__DeleteActions *ns4__DeleteActions, _ns4__DeleteActionsResponse &ns4__DeleteActionsResponse)
        { return this->DeleteActions(NULL, NULL, ns4__DeleteActions, ns4__DeleteActionsResponse); }
        virtual int DeleteActions(const char *soap_endpoint, const char *soap_action, _ns4__DeleteActions *ns4__DeleteActions, _ns4__DeleteActionsResponse &ns4__DeleteActionsResponse);
        /// Web service operation 'ModifyActions' (returns SOAP_OK or error code)
        virtual int ModifyActions(_ns4__ModifyActions *ns4__ModifyActions, _ns4__ModifyActionsResponse &ns4__ModifyActionsResponse)
        { return this->ModifyActions(NULL, NULL, ns4__ModifyActions, ns4__ModifyActionsResponse); }
        virtual int ModifyActions(const char *soap_endpoint, const char *soap_action, _ns4__ModifyActions *ns4__ModifyActions, _ns4__ModifyActionsResponse &ns4__ModifyActionsResponse);
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_ns4__GetServiceCapabilities *ns4__GetServiceCapabilities, _ns4__GetServiceCapabilitiesResponse &ns4__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns4__GetServiceCapabilities, ns4__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns4__GetServiceCapabilities *ns4__GetServiceCapabilities, _ns4__GetServiceCapabilitiesResponse &ns4__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetActionTriggers' (returns SOAP_OK or error code)
        virtual int GetActionTriggers(_ns4__GetActionTriggers *ns4__GetActionTriggers, _ns4__GetActionTriggersResponse &ns4__GetActionTriggersResponse)
        { return this->GetActionTriggers(NULL, NULL, ns4__GetActionTriggers, ns4__GetActionTriggersResponse); }
        virtual int GetActionTriggers(const char *soap_endpoint, const char *soap_action, _ns4__GetActionTriggers *ns4__GetActionTriggers, _ns4__GetActionTriggersResponse &ns4__GetActionTriggersResponse);
        /// Web service operation 'CreateActionTriggers' (returns SOAP_OK or error code)
        virtual int CreateActionTriggers(_ns4__CreateActionTriggers *ns4__CreateActionTriggers, _ns4__CreateActionTriggersResponse &ns4__CreateActionTriggersResponse)
        { return this->CreateActionTriggers(NULL, NULL, ns4__CreateActionTriggers, ns4__CreateActionTriggersResponse); }
        virtual int CreateActionTriggers(const char *soap_endpoint, const char *soap_action, _ns4__CreateActionTriggers *ns4__CreateActionTriggers, _ns4__CreateActionTriggersResponse &ns4__CreateActionTriggersResponse);
        /// Web service operation 'DeleteActionTriggers' (returns SOAP_OK or error code)
        virtual int DeleteActionTriggers(_ns4__DeleteActionTriggers *ns4__DeleteActionTriggers, _ns4__DeleteActionTriggersResponse &ns4__DeleteActionTriggersResponse)
        { return this->DeleteActionTriggers(NULL, NULL, ns4__DeleteActionTriggers, ns4__DeleteActionTriggersResponse); }
        virtual int DeleteActionTriggers(const char *soap_endpoint, const char *soap_action, _ns4__DeleteActionTriggers *ns4__DeleteActionTriggers, _ns4__DeleteActionTriggersResponse &ns4__DeleteActionTriggersResponse);
        /// Web service operation 'ModifyActionTriggers' (returns SOAP_OK or error code)
        virtual int ModifyActionTriggers(_ns4__ModifyActionTriggers *ns4__ModifyActionTriggers, _ns4__ModifyActionTriggersResponse &ns4__ModifyActionTriggersResponse)
        { return this->ModifyActionTriggers(NULL, NULL, ns4__ModifyActionTriggers, ns4__ModifyActionTriggersResponse); }
        virtual int ModifyActionTriggers(const char *soap_endpoint, const char *soap_action, _ns4__ModifyActionTriggers *ns4__ModifyActionTriggers, _ns4__ModifyActionTriggersResponse &ns4__ModifyActionTriggersResponse);
    };
#endif
