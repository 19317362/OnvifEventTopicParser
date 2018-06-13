/* soapScheduleBindingProxy.h
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

#ifndef soapScheduleBindingProxy_H
#define soapScheduleBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC ScheduleBindingProxy : public soap {
      public:
        /// Endpoint URL of service 'ScheduleBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        ScheduleBindingProxy();
        /// Copy constructor
        ScheduleBindingProxy(const ScheduleBindingProxy& rhs);
        /// Construct proxy given a managing context
        ScheduleBindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        ScheduleBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        ScheduleBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        ScheduleBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        ScheduleBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~ScheduleBindingProxy();
        /// Initializer used by constructors
        virtual void ScheduleBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual ScheduleBindingProxy *copy();
        /// Copy assignment
        ScheduleBindingProxy& operator=(const ScheduleBindingProxy&);
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
        virtual int GetServiceCapabilities(_ns13__GetServiceCapabilities *ns13__GetServiceCapabilities, _ns13__GetServiceCapabilitiesResponse &ns13__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns13__GetServiceCapabilities, ns13__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns13__GetServiceCapabilities *ns13__GetServiceCapabilities, _ns13__GetServiceCapabilitiesResponse &ns13__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetScheduleState' (returns SOAP_OK or error code)
        virtual int GetScheduleState(_ns13__GetScheduleState *ns13__GetScheduleState, _ns13__GetScheduleStateResponse &ns13__GetScheduleStateResponse)
        { return this->GetScheduleState(NULL, NULL, ns13__GetScheduleState, ns13__GetScheduleStateResponse); }
        virtual int GetScheduleState(const char *soap_endpoint, const char *soap_action, _ns13__GetScheduleState *ns13__GetScheduleState, _ns13__GetScheduleStateResponse &ns13__GetScheduleStateResponse);
        /// Web service operation 'GetScheduleInfo' (returns SOAP_OK or error code)
        virtual int GetScheduleInfo(_ns13__GetScheduleInfo *ns13__GetScheduleInfo, _ns13__GetScheduleInfoResponse &ns13__GetScheduleInfoResponse)
        { return this->GetScheduleInfo(NULL, NULL, ns13__GetScheduleInfo, ns13__GetScheduleInfoResponse); }
        virtual int GetScheduleInfo(const char *soap_endpoint, const char *soap_action, _ns13__GetScheduleInfo *ns13__GetScheduleInfo, _ns13__GetScheduleInfoResponse &ns13__GetScheduleInfoResponse);
        /// Web service operation 'GetScheduleInfoList' (returns SOAP_OK or error code)
        virtual int GetScheduleInfoList(_ns13__GetScheduleInfoList *ns13__GetScheduleInfoList, _ns13__GetScheduleInfoListResponse &ns13__GetScheduleInfoListResponse)
        { return this->GetScheduleInfoList(NULL, NULL, ns13__GetScheduleInfoList, ns13__GetScheduleInfoListResponse); }
        virtual int GetScheduleInfoList(const char *soap_endpoint, const char *soap_action, _ns13__GetScheduleInfoList *ns13__GetScheduleInfoList, _ns13__GetScheduleInfoListResponse &ns13__GetScheduleInfoListResponse);
        /// Web service operation 'GetSchedules' (returns SOAP_OK or error code)
        virtual int GetSchedules(_ns13__GetSchedules *ns13__GetSchedules, _ns13__GetSchedulesResponse &ns13__GetSchedulesResponse)
        { return this->GetSchedules(NULL, NULL, ns13__GetSchedules, ns13__GetSchedulesResponse); }
        virtual int GetSchedules(const char *soap_endpoint, const char *soap_action, _ns13__GetSchedules *ns13__GetSchedules, _ns13__GetSchedulesResponse &ns13__GetSchedulesResponse);
        /// Web service operation 'GetScheduleList' (returns SOAP_OK or error code)
        virtual int GetScheduleList(_ns13__GetScheduleList *ns13__GetScheduleList, _ns13__GetScheduleListResponse &ns13__GetScheduleListResponse)
        { return this->GetScheduleList(NULL, NULL, ns13__GetScheduleList, ns13__GetScheduleListResponse); }
        virtual int GetScheduleList(const char *soap_endpoint, const char *soap_action, _ns13__GetScheduleList *ns13__GetScheduleList, _ns13__GetScheduleListResponse &ns13__GetScheduleListResponse);
        /// Web service operation 'CreateSchedule' (returns SOAP_OK or error code)
        virtual int CreateSchedule(_ns13__CreateSchedule *ns13__CreateSchedule, _ns13__CreateScheduleResponse &ns13__CreateScheduleResponse)
        { return this->CreateSchedule(NULL, NULL, ns13__CreateSchedule, ns13__CreateScheduleResponse); }
        virtual int CreateSchedule(const char *soap_endpoint, const char *soap_action, _ns13__CreateSchedule *ns13__CreateSchedule, _ns13__CreateScheduleResponse &ns13__CreateScheduleResponse);
        /// Web service operation 'ModifySchedule' (returns SOAP_OK or error code)
        virtual int ModifySchedule(_ns13__ModifySchedule *ns13__ModifySchedule, _ns13__ModifyScheduleResponse &ns13__ModifyScheduleResponse)
        { return this->ModifySchedule(NULL, NULL, ns13__ModifySchedule, ns13__ModifyScheduleResponse); }
        virtual int ModifySchedule(const char *soap_endpoint, const char *soap_action, _ns13__ModifySchedule *ns13__ModifySchedule, _ns13__ModifyScheduleResponse &ns13__ModifyScheduleResponse);
        /// Web service operation 'DeleteSchedule' (returns SOAP_OK or error code)
        virtual int DeleteSchedule(_ns13__DeleteSchedule *ns13__DeleteSchedule, _ns13__DeleteScheduleResponse &ns13__DeleteScheduleResponse)
        { return this->DeleteSchedule(NULL, NULL, ns13__DeleteSchedule, ns13__DeleteScheduleResponse); }
        virtual int DeleteSchedule(const char *soap_endpoint, const char *soap_action, _ns13__DeleteSchedule *ns13__DeleteSchedule, _ns13__DeleteScheduleResponse &ns13__DeleteScheduleResponse);
        /// Web service operation 'GetSpecialDayGroupInfo' (returns SOAP_OK or error code)
        virtual int GetSpecialDayGroupInfo(_ns13__GetSpecialDayGroupInfo *ns13__GetSpecialDayGroupInfo, _ns13__GetSpecialDayGroupInfoResponse &ns13__GetSpecialDayGroupInfoResponse)
        { return this->GetSpecialDayGroupInfo(NULL, NULL, ns13__GetSpecialDayGroupInfo, ns13__GetSpecialDayGroupInfoResponse); }
        virtual int GetSpecialDayGroupInfo(const char *soap_endpoint, const char *soap_action, _ns13__GetSpecialDayGroupInfo *ns13__GetSpecialDayGroupInfo, _ns13__GetSpecialDayGroupInfoResponse &ns13__GetSpecialDayGroupInfoResponse);
        /// Web service operation 'GetSpecialDayGroupInfoList' (returns SOAP_OK or error code)
        virtual int GetSpecialDayGroupInfoList(_ns13__GetSpecialDayGroupInfoList *ns13__GetSpecialDayGroupInfoList, _ns13__GetSpecialDayGroupInfoListResponse &ns13__GetSpecialDayGroupInfoListResponse)
        { return this->GetSpecialDayGroupInfoList(NULL, NULL, ns13__GetSpecialDayGroupInfoList, ns13__GetSpecialDayGroupInfoListResponse); }
        virtual int GetSpecialDayGroupInfoList(const char *soap_endpoint, const char *soap_action, _ns13__GetSpecialDayGroupInfoList *ns13__GetSpecialDayGroupInfoList, _ns13__GetSpecialDayGroupInfoListResponse &ns13__GetSpecialDayGroupInfoListResponse);
        /// Web service operation 'GetSpecialDayGroups' (returns SOAP_OK or error code)
        virtual int GetSpecialDayGroups(_ns13__GetSpecialDayGroups *ns13__GetSpecialDayGroups, _ns13__GetSpecialDayGroupsResponse &ns13__GetSpecialDayGroupsResponse)
        { return this->GetSpecialDayGroups(NULL, NULL, ns13__GetSpecialDayGroups, ns13__GetSpecialDayGroupsResponse); }
        virtual int GetSpecialDayGroups(const char *soap_endpoint, const char *soap_action, _ns13__GetSpecialDayGroups *ns13__GetSpecialDayGroups, _ns13__GetSpecialDayGroupsResponse &ns13__GetSpecialDayGroupsResponse);
        /// Web service operation 'GetSpecialDayGroupList' (returns SOAP_OK or error code)
        virtual int GetSpecialDayGroupList(_ns13__GetSpecialDayGroupList *ns13__GetSpecialDayGroupList, _ns13__GetSpecialDayGroupListResponse &ns13__GetSpecialDayGroupListResponse)
        { return this->GetSpecialDayGroupList(NULL, NULL, ns13__GetSpecialDayGroupList, ns13__GetSpecialDayGroupListResponse); }
        virtual int GetSpecialDayGroupList(const char *soap_endpoint, const char *soap_action, _ns13__GetSpecialDayGroupList *ns13__GetSpecialDayGroupList, _ns13__GetSpecialDayGroupListResponse &ns13__GetSpecialDayGroupListResponse);
        /// Web service operation 'CreateSpecialDayGroup' (returns SOAP_OK or error code)
        virtual int CreateSpecialDayGroup(_ns13__CreateSpecialDayGroup *ns13__CreateSpecialDayGroup, _ns13__CreateSpecialDayGroupResponse &ns13__CreateSpecialDayGroupResponse)
        { return this->CreateSpecialDayGroup(NULL, NULL, ns13__CreateSpecialDayGroup, ns13__CreateSpecialDayGroupResponse); }
        virtual int CreateSpecialDayGroup(const char *soap_endpoint, const char *soap_action, _ns13__CreateSpecialDayGroup *ns13__CreateSpecialDayGroup, _ns13__CreateSpecialDayGroupResponse &ns13__CreateSpecialDayGroupResponse);
        /// Web service operation 'ModifySpecialDayGroup' (returns SOAP_OK or error code)
        virtual int ModifySpecialDayGroup(_ns13__ModifySpecialDayGroup *ns13__ModifySpecialDayGroup, _ns13__ModifySpecialDayGroupResponse &ns13__ModifySpecialDayGroupResponse)
        { return this->ModifySpecialDayGroup(NULL, NULL, ns13__ModifySpecialDayGroup, ns13__ModifySpecialDayGroupResponse); }
        virtual int ModifySpecialDayGroup(const char *soap_endpoint, const char *soap_action, _ns13__ModifySpecialDayGroup *ns13__ModifySpecialDayGroup, _ns13__ModifySpecialDayGroupResponse &ns13__ModifySpecialDayGroupResponse);
        /// Web service operation 'DeleteSpecialDayGroup' (returns SOAP_OK or error code)
        virtual int DeleteSpecialDayGroup(_ns13__DeleteSpecialDayGroup *ns13__DeleteSpecialDayGroup, _ns13__DeleteSpecialDayGroupResponse &ns13__DeleteSpecialDayGroupResponse)
        { return this->DeleteSpecialDayGroup(NULL, NULL, ns13__DeleteSpecialDayGroup, ns13__DeleteSpecialDayGroupResponse); }
        virtual int DeleteSpecialDayGroup(const char *soap_endpoint, const char *soap_action, _ns13__DeleteSpecialDayGroup *ns13__DeleteSpecialDayGroup, _ns13__DeleteSpecialDayGroupResponse &ns13__DeleteSpecialDayGroupResponse);
    };
#endif
