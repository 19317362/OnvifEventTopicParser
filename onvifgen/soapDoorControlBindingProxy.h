/* soapDoorControlBindingProxy.h
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

#ifndef soapDoorControlBindingProxy_H
#define soapDoorControlBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC DoorControlBindingProxy : public soap {
      public:
        /// Endpoint URL of service 'DoorControlBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        DoorControlBindingProxy();
        /// Copy constructor
        DoorControlBindingProxy(const DoorControlBindingProxy& rhs);
        /// Construct proxy given a managing context
        DoorControlBindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        DoorControlBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        DoorControlBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        DoorControlBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        DoorControlBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~DoorControlBindingProxy();
        /// Initializer used by constructors
        virtual void DoorControlBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual DoorControlBindingProxy *copy();
        /// Copy assignment
        DoorControlBindingProxy& operator=(const DoorControlBindingProxy&);
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
        virtual int GetServiceCapabilities(_ns7__GetServiceCapabilities *ns7__GetServiceCapabilities, _ns7__GetServiceCapabilitiesResponse &ns7__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns7__GetServiceCapabilities, ns7__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns7__GetServiceCapabilities *ns7__GetServiceCapabilities, _ns7__GetServiceCapabilitiesResponse &ns7__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetDoorInfoList' (returns SOAP_OK or error code)
        virtual int GetDoorInfoList(_ns7__GetDoorInfoList *ns7__GetDoorInfoList, _ns7__GetDoorInfoListResponse &ns7__GetDoorInfoListResponse)
        { return this->GetDoorInfoList(NULL, NULL, ns7__GetDoorInfoList, ns7__GetDoorInfoListResponse); }
        virtual int GetDoorInfoList(const char *soap_endpoint, const char *soap_action, _ns7__GetDoorInfoList *ns7__GetDoorInfoList, _ns7__GetDoorInfoListResponse &ns7__GetDoorInfoListResponse);
        /// Web service operation 'GetDoorInfo' (returns SOAP_OK or error code)
        virtual int GetDoorInfo(_ns7__GetDoorInfo *ns7__GetDoorInfo, _ns7__GetDoorInfoResponse &ns7__GetDoorInfoResponse)
        { return this->GetDoorInfo(NULL, NULL, ns7__GetDoorInfo, ns7__GetDoorInfoResponse); }
        virtual int GetDoorInfo(const char *soap_endpoint, const char *soap_action, _ns7__GetDoorInfo *ns7__GetDoorInfo, _ns7__GetDoorInfoResponse &ns7__GetDoorInfoResponse);
        /// Web service operation 'GetDoorState' (returns SOAP_OK or error code)
        virtual int GetDoorState(_ns7__GetDoorState *ns7__GetDoorState, _ns7__GetDoorStateResponse &ns7__GetDoorStateResponse)
        { return this->GetDoorState(NULL, NULL, ns7__GetDoorState, ns7__GetDoorStateResponse); }
        virtual int GetDoorState(const char *soap_endpoint, const char *soap_action, _ns7__GetDoorState *ns7__GetDoorState, _ns7__GetDoorStateResponse &ns7__GetDoorStateResponse);
        /// Web service operation 'AccessDoor' (returns SOAP_OK or error code)
        virtual int AccessDoor(_ns7__AccessDoor *ns7__AccessDoor, _ns7__AccessDoorResponse &ns7__AccessDoorResponse)
        { return this->AccessDoor(NULL, NULL, ns7__AccessDoor, ns7__AccessDoorResponse); }
        virtual int AccessDoor(const char *soap_endpoint, const char *soap_action, _ns7__AccessDoor *ns7__AccessDoor, _ns7__AccessDoorResponse &ns7__AccessDoorResponse);
        /// Web service operation 'LockDoor' (returns SOAP_OK or error code)
        virtual int LockDoor(_ns7__LockDoor *ns7__LockDoor, _ns7__LockDoorResponse &ns7__LockDoorResponse)
        { return this->LockDoor(NULL, NULL, ns7__LockDoor, ns7__LockDoorResponse); }
        virtual int LockDoor(const char *soap_endpoint, const char *soap_action, _ns7__LockDoor *ns7__LockDoor, _ns7__LockDoorResponse &ns7__LockDoorResponse);
        /// Web service operation 'UnlockDoor' (returns SOAP_OK or error code)
        virtual int UnlockDoor(_ns7__UnlockDoor *ns7__UnlockDoor, _ns7__UnlockDoorResponse &ns7__UnlockDoorResponse)
        { return this->UnlockDoor(NULL, NULL, ns7__UnlockDoor, ns7__UnlockDoorResponse); }
        virtual int UnlockDoor(const char *soap_endpoint, const char *soap_action, _ns7__UnlockDoor *ns7__UnlockDoor, _ns7__UnlockDoorResponse &ns7__UnlockDoorResponse);
        /// Web service operation 'BlockDoor' (returns SOAP_OK or error code)
        virtual int BlockDoor(_ns7__BlockDoor *ns7__BlockDoor, _ns7__BlockDoorResponse &ns7__BlockDoorResponse)
        { return this->BlockDoor(NULL, NULL, ns7__BlockDoor, ns7__BlockDoorResponse); }
        virtual int BlockDoor(const char *soap_endpoint, const char *soap_action, _ns7__BlockDoor *ns7__BlockDoor, _ns7__BlockDoorResponse &ns7__BlockDoorResponse);
        /// Web service operation 'LockDownDoor' (returns SOAP_OK or error code)
        virtual int LockDownDoor(_ns7__LockDownDoor *ns7__LockDownDoor, _ns7__LockDownDoorResponse &ns7__LockDownDoorResponse)
        { return this->LockDownDoor(NULL, NULL, ns7__LockDownDoor, ns7__LockDownDoorResponse); }
        virtual int LockDownDoor(const char *soap_endpoint, const char *soap_action, _ns7__LockDownDoor *ns7__LockDownDoor, _ns7__LockDownDoorResponse &ns7__LockDownDoorResponse);
        /// Web service operation 'LockDownReleaseDoor' (returns SOAP_OK or error code)
        virtual int LockDownReleaseDoor(_ns7__LockDownReleaseDoor *ns7__LockDownReleaseDoor, _ns7__LockDownReleaseDoorResponse &ns7__LockDownReleaseDoorResponse)
        { return this->LockDownReleaseDoor(NULL, NULL, ns7__LockDownReleaseDoor, ns7__LockDownReleaseDoorResponse); }
        virtual int LockDownReleaseDoor(const char *soap_endpoint, const char *soap_action, _ns7__LockDownReleaseDoor *ns7__LockDownReleaseDoor, _ns7__LockDownReleaseDoorResponse &ns7__LockDownReleaseDoorResponse);
        /// Web service operation 'LockOpenDoor' (returns SOAP_OK or error code)
        virtual int LockOpenDoor(_ns7__LockOpenDoor *ns7__LockOpenDoor, _ns7__LockOpenDoorResponse &ns7__LockOpenDoorResponse)
        { return this->LockOpenDoor(NULL, NULL, ns7__LockOpenDoor, ns7__LockOpenDoorResponse); }
        virtual int LockOpenDoor(const char *soap_endpoint, const char *soap_action, _ns7__LockOpenDoor *ns7__LockOpenDoor, _ns7__LockOpenDoorResponse &ns7__LockOpenDoorResponse);
        /// Web service operation 'LockOpenReleaseDoor' (returns SOAP_OK or error code)
        virtual int LockOpenReleaseDoor(_ns7__LockOpenReleaseDoor *ns7__LockOpenReleaseDoor, _ns7__LockOpenReleaseDoorResponse &ns7__LockOpenReleaseDoorResponse)
        { return this->LockOpenReleaseDoor(NULL, NULL, ns7__LockOpenReleaseDoor, ns7__LockOpenReleaseDoorResponse); }
        virtual int LockOpenReleaseDoor(const char *soap_endpoint, const char *soap_action, _ns7__LockOpenReleaseDoor *ns7__LockOpenReleaseDoor, _ns7__LockOpenReleaseDoorResponse &ns7__LockOpenReleaseDoorResponse);
        /// Web service operation 'DoubleLockDoor' (returns SOAP_OK or error code)
        virtual int DoubleLockDoor(_ns7__DoubleLockDoor *ns7__DoubleLockDoor, _ns7__DoubleLockDoorResponse &ns7__DoubleLockDoorResponse)
        { return this->DoubleLockDoor(NULL, NULL, ns7__DoubleLockDoor, ns7__DoubleLockDoorResponse); }
        virtual int DoubleLockDoor(const char *soap_endpoint, const char *soap_action, _ns7__DoubleLockDoor *ns7__DoubleLockDoor, _ns7__DoubleLockDoorResponse &ns7__DoubleLockDoorResponse);
    };
#endif
