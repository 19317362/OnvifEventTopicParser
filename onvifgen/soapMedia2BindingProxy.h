/* soapMedia2BindingProxy.h
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

#ifndef soapMedia2BindingProxy_H
#define soapMedia2BindingProxy_H
#include "soapH.h"

    class SOAP_CMAC Media2BindingProxy : public soap {
      public:
        /// Endpoint URL of service 'Media2BindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        Media2BindingProxy();
        /// Copy constructor
        Media2BindingProxy(const Media2BindingProxy& rhs);
        /// Construct proxy given a managing context
        Media2BindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        Media2BindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        Media2BindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        Media2BindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        Media2BindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~Media2BindingProxy();
        /// Initializer used by constructors
        virtual void Media2BindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual Media2BindingProxy *copy();
        /// Copy assignment
        Media2BindingProxy& operator=(const Media2BindingProxy&);
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
        virtual int GetServiceCapabilities(_ns8__GetServiceCapabilities *ns8__GetServiceCapabilities, _ns8__GetServiceCapabilitiesResponse &ns8__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns8__GetServiceCapabilities, ns8__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns8__GetServiceCapabilities *ns8__GetServiceCapabilities, _ns8__GetServiceCapabilitiesResponse &ns8__GetServiceCapabilitiesResponse);
        /// Web service operation 'CreateProfile' (returns SOAP_OK or error code)
        virtual int CreateProfile(_ns8__CreateProfile *ns8__CreateProfile, _ns8__CreateProfileResponse &ns8__CreateProfileResponse)
        { return this->CreateProfile(NULL, NULL, ns8__CreateProfile, ns8__CreateProfileResponse); }
        virtual int CreateProfile(const char *soap_endpoint, const char *soap_action, _ns8__CreateProfile *ns8__CreateProfile, _ns8__CreateProfileResponse &ns8__CreateProfileResponse);
        /// Web service operation 'GetProfiles' (returns SOAP_OK or error code)
        virtual int GetProfiles(_ns8__GetProfiles *ns8__GetProfiles, _ns8__GetProfilesResponse &ns8__GetProfilesResponse)
        { return this->GetProfiles(NULL, NULL, ns8__GetProfiles, ns8__GetProfilesResponse); }
        virtual int GetProfiles(const char *soap_endpoint, const char *soap_action, _ns8__GetProfiles *ns8__GetProfiles, _ns8__GetProfilesResponse &ns8__GetProfilesResponse);
        /// Web service operation 'AddConfiguration' (returns SOAP_OK or error code)
        virtual int AddConfiguration(_ns8__AddConfiguration *ns8__AddConfiguration, _ns8__AddConfigurationResponse &ns8__AddConfigurationResponse)
        { return this->AddConfiguration(NULL, NULL, ns8__AddConfiguration, ns8__AddConfigurationResponse); }
        virtual int AddConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__AddConfiguration *ns8__AddConfiguration, _ns8__AddConfigurationResponse &ns8__AddConfigurationResponse);
        /// Web service operation 'RemoveConfiguration' (returns SOAP_OK or error code)
        virtual int RemoveConfiguration(_ns8__RemoveConfiguration *ns8__RemoveConfiguration, _ns8__RemoveConfigurationResponse &ns8__RemoveConfigurationResponse)
        { return this->RemoveConfiguration(NULL, NULL, ns8__RemoveConfiguration, ns8__RemoveConfigurationResponse); }
        virtual int RemoveConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__RemoveConfiguration *ns8__RemoveConfiguration, _ns8__RemoveConfigurationResponse &ns8__RemoveConfigurationResponse);
        /// Web service operation 'DeleteProfile' (returns SOAP_OK or error code)
        virtual int DeleteProfile(_ns8__DeleteProfile *ns8__DeleteProfile, _ns8__DeleteProfileResponse &ns8__DeleteProfileResponse)
        { return this->DeleteProfile(NULL, NULL, ns8__DeleteProfile, ns8__DeleteProfileResponse); }
        virtual int DeleteProfile(const char *soap_endpoint, const char *soap_action, _ns8__DeleteProfile *ns8__DeleteProfile, _ns8__DeleteProfileResponse &ns8__DeleteProfileResponse);
        /// Web service operation 'GetVideoSourceConfigurations' (returns SOAP_OK or error code)
        virtual int GetVideoSourceConfigurations(ns8__GetConfiguration *ns8__GetVideoSourceConfigurations, _ns8__GetVideoSourceConfigurationsResponse &ns8__GetVideoSourceConfigurationsResponse)
        { return this->GetVideoSourceConfigurations(NULL, NULL, ns8__GetVideoSourceConfigurations, ns8__GetVideoSourceConfigurationsResponse); }
        virtual int GetVideoSourceConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetVideoSourceConfigurations, _ns8__GetVideoSourceConfigurationsResponse &ns8__GetVideoSourceConfigurationsResponse);
        /// Web service operation 'GetVideoEncoderConfigurations' (returns SOAP_OK or error code)
        virtual int GetVideoEncoderConfigurations(ns8__GetConfiguration *ns8__GetVideoEncoderConfigurations, _ns8__GetVideoEncoderConfigurationsResponse &ns8__GetVideoEncoderConfigurationsResponse)
        { return this->GetVideoEncoderConfigurations(NULL, NULL, ns8__GetVideoEncoderConfigurations, ns8__GetVideoEncoderConfigurationsResponse); }
        virtual int GetVideoEncoderConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetVideoEncoderConfigurations, _ns8__GetVideoEncoderConfigurationsResponse &ns8__GetVideoEncoderConfigurationsResponse);
        /// Web service operation 'GetAudioSourceConfigurations' (returns SOAP_OK or error code)
        virtual int GetAudioSourceConfigurations(ns8__GetConfiguration *ns8__GetAudioSourceConfigurations, _ns8__GetAudioSourceConfigurationsResponse &ns8__GetAudioSourceConfigurationsResponse)
        { return this->GetAudioSourceConfigurations(NULL, NULL, ns8__GetAudioSourceConfigurations, ns8__GetAudioSourceConfigurationsResponse); }
        virtual int GetAudioSourceConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioSourceConfigurations, _ns8__GetAudioSourceConfigurationsResponse &ns8__GetAudioSourceConfigurationsResponse);
        /// Web service operation 'GetAudioEncoderConfigurations' (returns SOAP_OK or error code)
        virtual int GetAudioEncoderConfigurations(ns8__GetConfiguration *ns8__GetAudioEncoderConfigurations, _ns8__GetAudioEncoderConfigurationsResponse &ns8__GetAudioEncoderConfigurationsResponse)
        { return this->GetAudioEncoderConfigurations(NULL, NULL, ns8__GetAudioEncoderConfigurations, ns8__GetAudioEncoderConfigurationsResponse); }
        virtual int GetAudioEncoderConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioEncoderConfigurations, _ns8__GetAudioEncoderConfigurationsResponse &ns8__GetAudioEncoderConfigurationsResponse);
        /// Web service operation 'GetAnalyticsConfigurations' (returns SOAP_OK or error code)
        virtual int GetAnalyticsConfigurations(ns8__GetConfiguration *ns8__GetAnalyticsConfigurations, _ns8__GetAnalyticsConfigurationsResponse &ns8__GetAnalyticsConfigurationsResponse)
        { return this->GetAnalyticsConfigurations(NULL, NULL, ns8__GetAnalyticsConfigurations, ns8__GetAnalyticsConfigurationsResponse); }
        virtual int GetAnalyticsConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAnalyticsConfigurations, _ns8__GetAnalyticsConfigurationsResponse &ns8__GetAnalyticsConfigurationsResponse);
        /// Web service operation 'GetMetadataConfigurations' (returns SOAP_OK or error code)
        virtual int GetMetadataConfigurations(ns8__GetConfiguration *ns8__GetMetadataConfigurations, _ns8__GetMetadataConfigurationsResponse &ns8__GetMetadataConfigurationsResponse)
        { return this->GetMetadataConfigurations(NULL, NULL, ns8__GetMetadataConfigurations, ns8__GetMetadataConfigurationsResponse); }
        virtual int GetMetadataConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetMetadataConfigurations, _ns8__GetMetadataConfigurationsResponse &ns8__GetMetadataConfigurationsResponse);
        /// Web service operation 'GetAudioOutputConfigurations' (returns SOAP_OK or error code)
        virtual int GetAudioOutputConfigurations(ns8__GetConfiguration *ns8__GetAudioOutputConfigurations, _ns8__GetAudioOutputConfigurationsResponse &ns8__GetAudioOutputConfigurationsResponse)
        { return this->GetAudioOutputConfigurations(NULL, NULL, ns8__GetAudioOutputConfigurations, ns8__GetAudioOutputConfigurationsResponse); }
        virtual int GetAudioOutputConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioOutputConfigurations, _ns8__GetAudioOutputConfigurationsResponse &ns8__GetAudioOutputConfigurationsResponse);
        /// Web service operation 'GetAudioDecoderConfigurations' (returns SOAP_OK or error code)
        virtual int GetAudioDecoderConfigurations(ns8__GetConfiguration *ns8__GetAudioDecoderConfigurations, _ns8__GetAudioDecoderConfigurationsResponse &ns8__GetAudioDecoderConfigurationsResponse)
        { return this->GetAudioDecoderConfigurations(NULL, NULL, ns8__GetAudioDecoderConfigurations, ns8__GetAudioDecoderConfigurationsResponse); }
        virtual int GetAudioDecoderConfigurations(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioDecoderConfigurations, _ns8__GetAudioDecoderConfigurationsResponse &ns8__GetAudioDecoderConfigurationsResponse);
        /// Web service operation 'SetVideoSourceConfiguration' (returns SOAP_OK or error code)
        virtual int SetVideoSourceConfiguration(_ns8__SetVideoSourceConfiguration *ns8__SetVideoSourceConfiguration, ns8__SetConfigurationResponse &ns8__SetVideoSourceConfigurationResponse)
        { return this->SetVideoSourceConfiguration(NULL, NULL, ns8__SetVideoSourceConfiguration, ns8__SetVideoSourceConfigurationResponse); }
        virtual int SetVideoSourceConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetVideoSourceConfiguration *ns8__SetVideoSourceConfiguration, ns8__SetConfigurationResponse &ns8__SetVideoSourceConfigurationResponse);
        /// Web service operation 'SetVideoEncoderConfiguration' (returns SOAP_OK or error code)
        virtual int SetVideoEncoderConfiguration(_ns8__SetVideoEncoderConfiguration *ns8__SetVideoEncoderConfiguration, ns8__SetConfigurationResponse &ns8__SetVideoEncoderConfigurationResponse)
        { return this->SetVideoEncoderConfiguration(NULL, NULL, ns8__SetVideoEncoderConfiguration, ns8__SetVideoEncoderConfigurationResponse); }
        virtual int SetVideoEncoderConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetVideoEncoderConfiguration *ns8__SetVideoEncoderConfiguration, ns8__SetConfigurationResponse &ns8__SetVideoEncoderConfigurationResponse);
        /// Web service operation 'SetAudioSourceConfiguration' (returns SOAP_OK or error code)
        virtual int SetAudioSourceConfiguration(_ns8__SetAudioSourceConfiguration *ns8__SetAudioSourceConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioSourceConfigurationResponse)
        { return this->SetAudioSourceConfiguration(NULL, NULL, ns8__SetAudioSourceConfiguration, ns8__SetAudioSourceConfigurationResponse); }
        virtual int SetAudioSourceConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetAudioSourceConfiguration *ns8__SetAudioSourceConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioSourceConfigurationResponse);
        /// Web service operation 'SetAudioEncoderConfiguration' (returns SOAP_OK or error code)
        virtual int SetAudioEncoderConfiguration(_ns8__SetAudioEncoderConfiguration *ns8__SetAudioEncoderConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioEncoderConfigurationResponse)
        { return this->SetAudioEncoderConfiguration(NULL, NULL, ns8__SetAudioEncoderConfiguration, ns8__SetAudioEncoderConfigurationResponse); }
        virtual int SetAudioEncoderConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetAudioEncoderConfiguration *ns8__SetAudioEncoderConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioEncoderConfigurationResponse);
        /// Web service operation 'SetMetadataConfiguration' (returns SOAP_OK or error code)
        virtual int SetMetadataConfiguration(_ns8__SetMetadataConfiguration *ns8__SetMetadataConfiguration, ns8__SetConfigurationResponse &ns8__SetMetadataConfigurationResponse)
        { return this->SetMetadataConfiguration(NULL, NULL, ns8__SetMetadataConfiguration, ns8__SetMetadataConfigurationResponse); }
        virtual int SetMetadataConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetMetadataConfiguration *ns8__SetMetadataConfiguration, ns8__SetConfigurationResponse &ns8__SetMetadataConfigurationResponse);
        /// Web service operation 'SetAudioOutputConfiguration' (returns SOAP_OK or error code)
        virtual int SetAudioOutputConfiguration(_ns8__SetAudioOutputConfiguration *ns8__SetAudioOutputConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioOutputConfigurationResponse)
        { return this->SetAudioOutputConfiguration(NULL, NULL, ns8__SetAudioOutputConfiguration, ns8__SetAudioOutputConfigurationResponse); }
        virtual int SetAudioOutputConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetAudioOutputConfiguration *ns8__SetAudioOutputConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioOutputConfigurationResponse);
        /// Web service operation 'SetAudioDecoderConfiguration' (returns SOAP_OK or error code)
        virtual int SetAudioDecoderConfiguration(_ns8__SetAudioDecoderConfiguration *ns8__SetAudioDecoderConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioDecoderConfigurationResponse)
        { return this->SetAudioDecoderConfiguration(NULL, NULL, ns8__SetAudioDecoderConfiguration, ns8__SetAudioDecoderConfigurationResponse); }
        virtual int SetAudioDecoderConfiguration(const char *soap_endpoint, const char *soap_action, _ns8__SetAudioDecoderConfiguration *ns8__SetAudioDecoderConfiguration, ns8__SetConfigurationResponse &ns8__SetAudioDecoderConfigurationResponse);
        /// Web service operation 'GetVideoSourceConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetVideoSourceConfigurationOptions(ns8__GetConfiguration *ns8__GetVideoSourceConfigurationOptions, _ns8__GetVideoSourceConfigurationOptionsResponse &ns8__GetVideoSourceConfigurationOptionsResponse)
        { return this->GetVideoSourceConfigurationOptions(NULL, NULL, ns8__GetVideoSourceConfigurationOptions, ns8__GetVideoSourceConfigurationOptionsResponse); }
        virtual int GetVideoSourceConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetVideoSourceConfigurationOptions, _ns8__GetVideoSourceConfigurationOptionsResponse &ns8__GetVideoSourceConfigurationOptionsResponse);
        /// Web service operation 'GetVideoEncoderConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetVideoEncoderConfigurationOptions(ns8__GetConfiguration *ns8__GetVideoEncoderConfigurationOptions, _ns8__GetVideoEncoderConfigurationOptionsResponse &ns8__GetVideoEncoderConfigurationOptionsResponse)
        { return this->GetVideoEncoderConfigurationOptions(NULL, NULL, ns8__GetVideoEncoderConfigurationOptions, ns8__GetVideoEncoderConfigurationOptionsResponse); }
        virtual int GetVideoEncoderConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetVideoEncoderConfigurationOptions, _ns8__GetVideoEncoderConfigurationOptionsResponse &ns8__GetVideoEncoderConfigurationOptionsResponse);
        /// Web service operation 'GetAudioSourceConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetAudioSourceConfigurationOptions(ns8__GetConfiguration *ns8__GetAudioSourceConfigurationOptions, _ns8__GetAudioSourceConfigurationOptionsResponse &ns8__GetAudioSourceConfigurationOptionsResponse)
        { return this->GetAudioSourceConfigurationOptions(NULL, NULL, ns8__GetAudioSourceConfigurationOptions, ns8__GetAudioSourceConfigurationOptionsResponse); }
        virtual int GetAudioSourceConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioSourceConfigurationOptions, _ns8__GetAudioSourceConfigurationOptionsResponse &ns8__GetAudioSourceConfigurationOptionsResponse);
        /// Web service operation 'GetAudioEncoderConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetAudioEncoderConfigurationOptions(ns8__GetConfiguration *ns8__GetAudioEncoderConfigurationOptions, _ns8__GetAudioEncoderConfigurationOptionsResponse &ns8__GetAudioEncoderConfigurationOptionsResponse)
        { return this->GetAudioEncoderConfigurationOptions(NULL, NULL, ns8__GetAudioEncoderConfigurationOptions, ns8__GetAudioEncoderConfigurationOptionsResponse); }
        virtual int GetAudioEncoderConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioEncoderConfigurationOptions, _ns8__GetAudioEncoderConfigurationOptionsResponse &ns8__GetAudioEncoderConfigurationOptionsResponse);
        /// Web service operation 'GetMetadataConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetMetadataConfigurationOptions(ns8__GetConfiguration *ns8__GetMetadataConfigurationOptions, _ns8__GetMetadataConfigurationOptionsResponse &ns8__GetMetadataConfigurationOptionsResponse)
        { return this->GetMetadataConfigurationOptions(NULL, NULL, ns8__GetMetadataConfigurationOptions, ns8__GetMetadataConfigurationOptionsResponse); }
        virtual int GetMetadataConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetMetadataConfigurationOptions, _ns8__GetMetadataConfigurationOptionsResponse &ns8__GetMetadataConfigurationOptionsResponse);
        /// Web service operation 'GetAudioOutputConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetAudioOutputConfigurationOptions(ns8__GetConfiguration *ns8__GetAudioOutputConfigurationOptions, _ns8__GetAudioOutputConfigurationOptionsResponse &ns8__GetAudioOutputConfigurationOptionsResponse)
        { return this->GetAudioOutputConfigurationOptions(NULL, NULL, ns8__GetAudioOutputConfigurationOptions, ns8__GetAudioOutputConfigurationOptionsResponse); }
        virtual int GetAudioOutputConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioOutputConfigurationOptions, _ns8__GetAudioOutputConfigurationOptionsResponse &ns8__GetAudioOutputConfigurationOptionsResponse);
        /// Web service operation 'GetAudioDecoderConfigurationOptions' (returns SOAP_OK or error code)
        virtual int GetAudioDecoderConfigurationOptions(ns8__GetConfiguration *ns8__GetAudioDecoderConfigurationOptions, _ns8__GetAudioDecoderConfigurationOptionsResponse &ns8__GetAudioDecoderConfigurationOptionsResponse)
        { return this->GetAudioDecoderConfigurationOptions(NULL, NULL, ns8__GetAudioDecoderConfigurationOptions, ns8__GetAudioDecoderConfigurationOptionsResponse); }
        virtual int GetAudioDecoderConfigurationOptions(const char *soap_endpoint, const char *soap_action, ns8__GetConfiguration *ns8__GetAudioDecoderConfigurationOptions, _ns8__GetAudioDecoderConfigurationOptionsResponse &ns8__GetAudioDecoderConfigurationOptionsResponse);
        /// Web service operation 'GetVideoEncoderInstances' (returns SOAP_OK or error code)
        virtual int GetVideoEncoderInstances(_ns8__GetVideoEncoderInstances *ns8__GetVideoEncoderInstances, _ns8__GetVideoEncoderInstancesResponse &ns8__GetVideoEncoderInstancesResponse)
        { return this->GetVideoEncoderInstances(NULL, NULL, ns8__GetVideoEncoderInstances, ns8__GetVideoEncoderInstancesResponse); }
        virtual int GetVideoEncoderInstances(const char *soap_endpoint, const char *soap_action, _ns8__GetVideoEncoderInstances *ns8__GetVideoEncoderInstances, _ns8__GetVideoEncoderInstancesResponse &ns8__GetVideoEncoderInstancesResponse);
        /// Web service operation 'GetStreamUri' (returns SOAP_OK or error code)
        virtual int GetStreamUri(_ns8__GetStreamUri *ns8__GetStreamUri, _ns8__GetStreamUriResponse &ns8__GetStreamUriResponse)
        { return this->GetStreamUri(NULL, NULL, ns8__GetStreamUri, ns8__GetStreamUriResponse); }
        virtual int GetStreamUri(const char *soap_endpoint, const char *soap_action, _ns8__GetStreamUri *ns8__GetStreamUri, _ns8__GetStreamUriResponse &ns8__GetStreamUriResponse);
        /// Web service operation 'StartMulticastStreaming' (returns SOAP_OK or error code)
        virtual int StartMulticastStreaming(ns8__StartStopMulticastStreaming *ns8__StartMulticastStreaming, ns8__SetConfigurationResponse &ns8__StartMulticastStreamingResponse)
        { return this->StartMulticastStreaming(NULL, NULL, ns8__StartMulticastStreaming, ns8__StartMulticastStreamingResponse); }
        virtual int StartMulticastStreaming(const char *soap_endpoint, const char *soap_action, ns8__StartStopMulticastStreaming *ns8__StartMulticastStreaming, ns8__SetConfigurationResponse &ns8__StartMulticastStreamingResponse);
        /// Web service operation 'StopMulticastStreaming' (returns SOAP_OK or error code)
        virtual int StopMulticastStreaming(ns8__StartStopMulticastStreaming *ns8__StopMulticastStreaming, ns8__SetConfigurationResponse &ns8__StopMulticastStreamingResponse)
        { return this->StopMulticastStreaming(NULL, NULL, ns8__StopMulticastStreaming, ns8__StopMulticastStreamingResponse); }
        virtual int StopMulticastStreaming(const char *soap_endpoint, const char *soap_action, ns8__StartStopMulticastStreaming *ns8__StopMulticastStreaming, ns8__SetConfigurationResponse &ns8__StopMulticastStreamingResponse);
        /// Web service operation 'SetSynchronizationPoint' (returns SOAP_OK or error code)
        virtual int SetSynchronizationPoint(_ns8__SetSynchronizationPoint *ns8__SetSynchronizationPoint, _ns8__SetSynchronizationPointResponse &ns8__SetSynchronizationPointResponse)
        { return this->SetSynchronizationPoint(NULL, NULL, ns8__SetSynchronizationPoint, ns8__SetSynchronizationPointResponse); }
        virtual int SetSynchronizationPoint(const char *soap_endpoint, const char *soap_action, _ns8__SetSynchronizationPoint *ns8__SetSynchronizationPoint, _ns8__SetSynchronizationPointResponse &ns8__SetSynchronizationPointResponse);
        /// Web service operation 'GetSnapshotUri' (returns SOAP_OK or error code)
        virtual int GetSnapshotUri(_ns8__GetSnapshotUri *ns8__GetSnapshotUri, _ns8__GetSnapshotUriResponse &ns8__GetSnapshotUriResponse)
        { return this->GetSnapshotUri(NULL, NULL, ns8__GetSnapshotUri, ns8__GetSnapshotUriResponse); }
        virtual int GetSnapshotUri(const char *soap_endpoint, const char *soap_action, _ns8__GetSnapshotUri *ns8__GetSnapshotUri, _ns8__GetSnapshotUriResponse &ns8__GetSnapshotUriResponse);
        /// Web service operation 'GetVideoSourceModes' (returns SOAP_OK or error code)
        virtual int GetVideoSourceModes(_ns8__GetVideoSourceModes *ns8__GetVideoSourceModes, _ns8__GetVideoSourceModesResponse &ns8__GetVideoSourceModesResponse)
        { return this->GetVideoSourceModes(NULL, NULL, ns8__GetVideoSourceModes, ns8__GetVideoSourceModesResponse); }
        virtual int GetVideoSourceModes(const char *soap_endpoint, const char *soap_action, _ns8__GetVideoSourceModes *ns8__GetVideoSourceModes, _ns8__GetVideoSourceModesResponse &ns8__GetVideoSourceModesResponse);
        /// Web service operation 'SetVideoSourceMode' (returns SOAP_OK or error code)
        virtual int SetVideoSourceMode(_ns8__SetVideoSourceMode *ns8__SetVideoSourceMode, _ns8__SetVideoSourceModeResponse &ns8__SetVideoSourceModeResponse)
        { return this->SetVideoSourceMode(NULL, NULL, ns8__SetVideoSourceMode, ns8__SetVideoSourceModeResponse); }
        virtual int SetVideoSourceMode(const char *soap_endpoint, const char *soap_action, _ns8__SetVideoSourceMode *ns8__SetVideoSourceMode, _ns8__SetVideoSourceModeResponse &ns8__SetVideoSourceModeResponse);
        /// Web service operation 'GetOSDs' (returns SOAP_OK or error code)
        virtual int GetOSDs(_ns8__GetOSDs *ns8__GetOSDs, _ns8__GetOSDsResponse &ns8__GetOSDsResponse)
        { return this->GetOSDs(NULL, NULL, ns8__GetOSDs, ns8__GetOSDsResponse); }
        virtual int GetOSDs(const char *soap_endpoint, const char *soap_action, _ns8__GetOSDs *ns8__GetOSDs, _ns8__GetOSDsResponse &ns8__GetOSDsResponse);
        /// Web service operation 'GetOSDOptions' (returns SOAP_OK or error code)
        virtual int GetOSDOptions(_ns8__GetOSDOptions *ns8__GetOSDOptions, _ns8__GetOSDOptionsResponse &ns8__GetOSDOptionsResponse)
        { return this->GetOSDOptions(NULL, NULL, ns8__GetOSDOptions, ns8__GetOSDOptionsResponse); }
        virtual int GetOSDOptions(const char *soap_endpoint, const char *soap_action, _ns8__GetOSDOptions *ns8__GetOSDOptions, _ns8__GetOSDOptionsResponse &ns8__GetOSDOptionsResponse);
        /// Web service operation 'SetOSD' (returns SOAP_OK or error code)
        virtual int SetOSD(_ns8__SetOSD *ns8__SetOSD, ns8__SetConfigurationResponse &ns8__SetOSDResponse)
        { return this->SetOSD(NULL, NULL, ns8__SetOSD, ns8__SetOSDResponse); }
        virtual int SetOSD(const char *soap_endpoint, const char *soap_action, _ns8__SetOSD *ns8__SetOSD, ns8__SetConfigurationResponse &ns8__SetOSDResponse);
        /// Web service operation 'CreateOSD' (returns SOAP_OK or error code)
        virtual int CreateOSD(_ns8__CreateOSD *ns8__CreateOSD, _ns8__CreateOSDResponse &ns8__CreateOSDResponse)
        { return this->CreateOSD(NULL, NULL, ns8__CreateOSD, ns8__CreateOSDResponse); }
        virtual int CreateOSD(const char *soap_endpoint, const char *soap_action, _ns8__CreateOSD *ns8__CreateOSD, _ns8__CreateOSDResponse &ns8__CreateOSDResponse);
        /// Web service operation 'DeleteOSD' (returns SOAP_OK or error code)
        virtual int DeleteOSD(_ns8__DeleteOSD *ns8__DeleteOSD, ns8__SetConfigurationResponse &ns8__DeleteOSDResponse)
        { return this->DeleteOSD(NULL, NULL, ns8__DeleteOSD, ns8__DeleteOSDResponse); }
        virtual int DeleteOSD(const char *soap_endpoint, const char *soap_action, _ns8__DeleteOSD *ns8__DeleteOSD, ns8__SetConfigurationResponse &ns8__DeleteOSDResponse);
        /// Web service operation 'GetMasks' (returns SOAP_OK or error code)
        virtual int GetMasks(_ns8__GetMasks *ns8__GetMasks, _ns8__GetMasksResponse &ns8__GetMasksResponse)
        { return this->GetMasks(NULL, NULL, ns8__GetMasks, ns8__GetMasksResponse); }
        virtual int GetMasks(const char *soap_endpoint, const char *soap_action, _ns8__GetMasks *ns8__GetMasks, _ns8__GetMasksResponse &ns8__GetMasksResponse);
        /// Web service operation 'GetMaskOptions' (returns SOAP_OK or error code)
        virtual int GetMaskOptions(_ns8__GetMaskOptions *ns8__GetMaskOptions, _ns8__GetMaskOptionsResponse &ns8__GetMaskOptionsResponse)
        { return this->GetMaskOptions(NULL, NULL, ns8__GetMaskOptions, ns8__GetMaskOptionsResponse); }
        virtual int GetMaskOptions(const char *soap_endpoint, const char *soap_action, _ns8__GetMaskOptions *ns8__GetMaskOptions, _ns8__GetMaskOptionsResponse &ns8__GetMaskOptionsResponse);
        /// Web service operation 'SetMask' (returns SOAP_OK or error code)
        virtual int SetMask(_ns8__SetMask *ns8__SetMask, ns8__SetConfigurationResponse &ns8__SetMaskResponse)
        { return this->SetMask(NULL, NULL, ns8__SetMask, ns8__SetMaskResponse); }
        virtual int SetMask(const char *soap_endpoint, const char *soap_action, _ns8__SetMask *ns8__SetMask, ns8__SetConfigurationResponse &ns8__SetMaskResponse);
        /// Web service operation 'CreateMask' (returns SOAP_OK or error code)
        virtual int CreateMask(_ns8__CreateMask *ns8__CreateMask, _ns8__CreateMaskResponse &ns8__CreateMaskResponse)
        { return this->CreateMask(NULL, NULL, ns8__CreateMask, ns8__CreateMaskResponse); }
        virtual int CreateMask(const char *soap_endpoint, const char *soap_action, _ns8__CreateMask *ns8__CreateMask, _ns8__CreateMaskResponse &ns8__CreateMaskResponse);
        /// Web service operation 'DeleteMask' (returns SOAP_OK or error code)
        virtual int DeleteMask(_ns8__DeleteMask *ns8__DeleteMask, ns8__SetConfigurationResponse &ns8__DeleteMaskResponse)
        { return this->DeleteMask(NULL, NULL, ns8__DeleteMask, ns8__DeleteMaskResponse); }
        virtual int DeleteMask(const char *soap_endpoint, const char *soap_action, _ns8__DeleteMask *ns8__DeleteMask, ns8__SetConfigurationResponse &ns8__DeleteMaskResponse);
    };
#endif
