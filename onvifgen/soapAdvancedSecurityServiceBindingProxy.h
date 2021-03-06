/* soapAdvancedSecurityServiceBindingProxy.h
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

#ifndef soapAdvancedSecurityServiceBindingProxy_H
#define soapAdvancedSecurityServiceBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC AdvancedSecurityServiceBindingProxy : public soap {
      public:
        /// Endpoint URL of service 'AdvancedSecurityServiceBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in onvif.h, if any
        /// Construct a proxy with new managing context
        AdvancedSecurityServiceBindingProxy();
        /// Copy constructor
        AdvancedSecurityServiceBindingProxy(const AdvancedSecurityServiceBindingProxy& rhs);
        /// Construct proxy given a managing context
        AdvancedSecurityServiceBindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        AdvancedSecurityServiceBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        AdvancedSecurityServiceBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        AdvancedSecurityServiceBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        AdvancedSecurityServiceBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~AdvancedSecurityServiceBindingProxy();
        /// Initializer used by constructors
        virtual void AdvancedSecurityServiceBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual AdvancedSecurityServiceBindingProxy *copy();
        /// Copy assignment
        AdvancedSecurityServiceBindingProxy& operator=(const AdvancedSecurityServiceBindingProxy&);
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
        virtual int GetServiceCapabilities(_ns5__GetServiceCapabilities *ns5__GetServiceCapabilities, _ns5__GetServiceCapabilitiesResponse &ns5__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, ns5__GetServiceCapabilities, ns5__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _ns5__GetServiceCapabilities *ns5__GetServiceCapabilities, _ns5__GetServiceCapabilitiesResponse &ns5__GetServiceCapabilitiesResponse);
        /// Web service operation 'CreateRSAKeyPair' (returns SOAP_OK or error code)
        virtual int CreateRSAKeyPair(_ns5__CreateRSAKeyPair *ns5__CreateRSAKeyPair, _ns5__CreateRSAKeyPairResponse &ns5__CreateRSAKeyPairResponse)
        { return this->CreateRSAKeyPair(NULL, NULL, ns5__CreateRSAKeyPair, ns5__CreateRSAKeyPairResponse); }
        virtual int CreateRSAKeyPair(const char *soap_endpoint, const char *soap_action, _ns5__CreateRSAKeyPair *ns5__CreateRSAKeyPair, _ns5__CreateRSAKeyPairResponse &ns5__CreateRSAKeyPairResponse);
        /// Web service operation 'UploadKeyPairInPKCS8' (returns SOAP_OK or error code)
        virtual int UploadKeyPairInPKCS8(_ns5__UploadKeyPairInPKCS8 *ns5__UploadKeyPairInPKCS8, _ns5__UploadKeyPairInPKCS8Response &ns5__UploadKeyPairInPKCS8Response)
        { return this->UploadKeyPairInPKCS8(NULL, NULL, ns5__UploadKeyPairInPKCS8, ns5__UploadKeyPairInPKCS8Response); }
        virtual int UploadKeyPairInPKCS8(const char *soap_endpoint, const char *soap_action, _ns5__UploadKeyPairInPKCS8 *ns5__UploadKeyPairInPKCS8, _ns5__UploadKeyPairInPKCS8Response &ns5__UploadKeyPairInPKCS8Response);
        /// Web service operation 'UploadCertificateWithPrivateKeyInPKCS12' (returns SOAP_OK or error code)
        virtual int UploadCertificateWithPrivateKeyInPKCS12(_ns5__UploadCertificateWithPrivateKeyInPKCS12 *ns5__UploadCertificateWithPrivateKeyInPKCS12, _ns5__UploadCertificateWithPrivateKeyInPKCS12Response &ns5__UploadCertificateWithPrivateKeyInPKCS12Response)
        { return this->UploadCertificateWithPrivateKeyInPKCS12(NULL, NULL, ns5__UploadCertificateWithPrivateKeyInPKCS12, ns5__UploadCertificateWithPrivateKeyInPKCS12Response); }
        virtual int UploadCertificateWithPrivateKeyInPKCS12(const char *soap_endpoint, const char *soap_action, _ns5__UploadCertificateWithPrivateKeyInPKCS12 *ns5__UploadCertificateWithPrivateKeyInPKCS12, _ns5__UploadCertificateWithPrivateKeyInPKCS12Response &ns5__UploadCertificateWithPrivateKeyInPKCS12Response);
        /// Web service operation 'GetKeyStatus' (returns SOAP_OK or error code)
        virtual int GetKeyStatus(_ns5__GetKeyStatus *ns5__GetKeyStatus, _ns5__GetKeyStatusResponse &ns5__GetKeyStatusResponse)
        { return this->GetKeyStatus(NULL, NULL, ns5__GetKeyStatus, ns5__GetKeyStatusResponse); }
        virtual int GetKeyStatus(const char *soap_endpoint, const char *soap_action, _ns5__GetKeyStatus *ns5__GetKeyStatus, _ns5__GetKeyStatusResponse &ns5__GetKeyStatusResponse);
        /// Web service operation 'GetPrivateKeyStatus' (returns SOAP_OK or error code)
        virtual int GetPrivateKeyStatus(_ns5__GetPrivateKeyStatus *ns5__GetPrivateKeyStatus, _ns5__GetPrivateKeyStatusResponse &ns5__GetPrivateKeyStatusResponse)
        { return this->GetPrivateKeyStatus(NULL, NULL, ns5__GetPrivateKeyStatus, ns5__GetPrivateKeyStatusResponse); }
        virtual int GetPrivateKeyStatus(const char *soap_endpoint, const char *soap_action, _ns5__GetPrivateKeyStatus *ns5__GetPrivateKeyStatus, _ns5__GetPrivateKeyStatusResponse &ns5__GetPrivateKeyStatusResponse);
        /// Web service operation 'GetAllKeys' (returns SOAP_OK or error code)
        virtual int GetAllKeys(_ns5__GetAllKeys *ns5__GetAllKeys, _ns5__GetAllKeysResponse &ns5__GetAllKeysResponse)
        { return this->GetAllKeys(NULL, NULL, ns5__GetAllKeys, ns5__GetAllKeysResponse); }
        virtual int GetAllKeys(const char *soap_endpoint, const char *soap_action, _ns5__GetAllKeys *ns5__GetAllKeys, _ns5__GetAllKeysResponse &ns5__GetAllKeysResponse);
        /// Web service operation 'DeleteKey' (returns SOAP_OK or error code)
        virtual int DeleteKey(_ns5__DeleteKey *ns5__DeleteKey, _ns5__DeleteKeyResponse &ns5__DeleteKeyResponse)
        { return this->DeleteKey(NULL, NULL, ns5__DeleteKey, ns5__DeleteKeyResponse); }
        virtual int DeleteKey(const char *soap_endpoint, const char *soap_action, _ns5__DeleteKey *ns5__DeleteKey, _ns5__DeleteKeyResponse &ns5__DeleteKeyResponse);
        /// Web service operation 'CreatePKCS10CSR' (returns SOAP_OK or error code)
        virtual int CreatePKCS10CSR(_ns5__CreatePKCS10CSR *ns5__CreatePKCS10CSR, _ns5__CreatePKCS10CSRResponse &ns5__CreatePKCS10CSRResponse)
        { return this->CreatePKCS10CSR(NULL, NULL, ns5__CreatePKCS10CSR, ns5__CreatePKCS10CSRResponse); }
        virtual int CreatePKCS10CSR(const char *soap_endpoint, const char *soap_action, _ns5__CreatePKCS10CSR *ns5__CreatePKCS10CSR, _ns5__CreatePKCS10CSRResponse &ns5__CreatePKCS10CSRResponse);
        /// Web service operation 'CreateSelfSignedCertificate' (returns SOAP_OK or error code)
        virtual int CreateSelfSignedCertificate(_ns5__CreateSelfSignedCertificate *ns5__CreateSelfSignedCertificate, _ns5__CreateSelfSignedCertificateResponse &ns5__CreateSelfSignedCertificateResponse)
        { return this->CreateSelfSignedCertificate(NULL, NULL, ns5__CreateSelfSignedCertificate, ns5__CreateSelfSignedCertificateResponse); }
        virtual int CreateSelfSignedCertificate(const char *soap_endpoint, const char *soap_action, _ns5__CreateSelfSignedCertificate *ns5__CreateSelfSignedCertificate, _ns5__CreateSelfSignedCertificateResponse &ns5__CreateSelfSignedCertificateResponse);
        /// Web service operation 'UploadCertificate' (returns SOAP_OK or error code)
        virtual int UploadCertificate(_ns5__UploadCertificate *ns5__UploadCertificate, _ns5__UploadCertificateResponse &ns5__UploadCertificateResponse)
        { return this->UploadCertificate(NULL, NULL, ns5__UploadCertificate, ns5__UploadCertificateResponse); }
        virtual int UploadCertificate(const char *soap_endpoint, const char *soap_action, _ns5__UploadCertificate *ns5__UploadCertificate, _ns5__UploadCertificateResponse &ns5__UploadCertificateResponse);
        /// Web service operation 'GetCertificate' (returns SOAP_OK or error code)
        virtual int GetCertificate(_ns5__GetCertificate *ns5__GetCertificate, _ns5__GetCertificateResponse &ns5__GetCertificateResponse)
        { return this->GetCertificate(NULL, NULL, ns5__GetCertificate, ns5__GetCertificateResponse); }
        virtual int GetCertificate(const char *soap_endpoint, const char *soap_action, _ns5__GetCertificate *ns5__GetCertificate, _ns5__GetCertificateResponse &ns5__GetCertificateResponse);
        /// Web service operation 'GetAllCertificates' (returns SOAP_OK or error code)
        virtual int GetAllCertificates(_ns5__GetAllCertificates *ns5__GetAllCertificates, _ns5__GetAllCertificatesResponse &ns5__GetAllCertificatesResponse)
        { return this->GetAllCertificates(NULL, NULL, ns5__GetAllCertificates, ns5__GetAllCertificatesResponse); }
        virtual int GetAllCertificates(const char *soap_endpoint, const char *soap_action, _ns5__GetAllCertificates *ns5__GetAllCertificates, _ns5__GetAllCertificatesResponse &ns5__GetAllCertificatesResponse);
        /// Web service operation 'DeleteCertificate' (returns SOAP_OK or error code)
        virtual int DeleteCertificate(_ns5__DeleteCertificate *ns5__DeleteCertificate, _ns5__DeleteCertificateResponse &ns5__DeleteCertificateResponse)
        { return this->DeleteCertificate(NULL, NULL, ns5__DeleteCertificate, ns5__DeleteCertificateResponse); }
        virtual int DeleteCertificate(const char *soap_endpoint, const char *soap_action, _ns5__DeleteCertificate *ns5__DeleteCertificate, _ns5__DeleteCertificateResponse &ns5__DeleteCertificateResponse);
        /// Web service operation 'CreateCertificationPath' (returns SOAP_OK or error code)
        virtual int CreateCertificationPath(_ns5__CreateCertificationPath *ns5__CreateCertificationPath, _ns5__CreateCertificationPathResponse &ns5__CreateCertificationPathResponse)
        { return this->CreateCertificationPath(NULL, NULL, ns5__CreateCertificationPath, ns5__CreateCertificationPathResponse); }
        virtual int CreateCertificationPath(const char *soap_endpoint, const char *soap_action, _ns5__CreateCertificationPath *ns5__CreateCertificationPath, _ns5__CreateCertificationPathResponse &ns5__CreateCertificationPathResponse);
        /// Web service operation 'GetCertificationPath' (returns SOAP_OK or error code)
        virtual int GetCertificationPath(_ns5__GetCertificationPath *ns5__GetCertificationPath, _ns5__GetCertificationPathResponse &ns5__GetCertificationPathResponse)
        { return this->GetCertificationPath(NULL, NULL, ns5__GetCertificationPath, ns5__GetCertificationPathResponse); }
        virtual int GetCertificationPath(const char *soap_endpoint, const char *soap_action, _ns5__GetCertificationPath *ns5__GetCertificationPath, _ns5__GetCertificationPathResponse &ns5__GetCertificationPathResponse);
        /// Web service operation 'GetAllCertificationPaths' (returns SOAP_OK or error code)
        virtual int GetAllCertificationPaths(_ns5__GetAllCertificationPaths *ns5__GetAllCertificationPaths, _ns5__GetAllCertificationPathsResponse &ns5__GetAllCertificationPathsResponse)
        { return this->GetAllCertificationPaths(NULL, NULL, ns5__GetAllCertificationPaths, ns5__GetAllCertificationPathsResponse); }
        virtual int GetAllCertificationPaths(const char *soap_endpoint, const char *soap_action, _ns5__GetAllCertificationPaths *ns5__GetAllCertificationPaths, _ns5__GetAllCertificationPathsResponse &ns5__GetAllCertificationPathsResponse);
        /// Web service operation 'DeleteCertificationPath' (returns SOAP_OK or error code)
        virtual int DeleteCertificationPath(_ns5__DeleteCertificationPath *ns5__DeleteCertificationPath, _ns5__DeleteCertificationPathResponse &ns5__DeleteCertificationPathResponse)
        { return this->DeleteCertificationPath(NULL, NULL, ns5__DeleteCertificationPath, ns5__DeleteCertificationPathResponse); }
        virtual int DeleteCertificationPath(const char *soap_endpoint, const char *soap_action, _ns5__DeleteCertificationPath *ns5__DeleteCertificationPath, _ns5__DeleteCertificationPathResponse &ns5__DeleteCertificationPathResponse);
        /// Web service operation 'UploadPassphrase' (returns SOAP_OK or error code)
        virtual int UploadPassphrase(_ns5__UploadPassphrase *ns5__UploadPassphrase, _ns5__UploadPassphraseResponse &ns5__UploadPassphraseResponse)
        { return this->UploadPassphrase(NULL, NULL, ns5__UploadPassphrase, ns5__UploadPassphraseResponse); }
        virtual int UploadPassphrase(const char *soap_endpoint, const char *soap_action, _ns5__UploadPassphrase *ns5__UploadPassphrase, _ns5__UploadPassphraseResponse &ns5__UploadPassphraseResponse);
        /// Web service operation 'GetAllPassphrases' (returns SOAP_OK or error code)
        virtual int GetAllPassphrases(_ns5__GetAllPassphrases *ns5__GetAllPassphrases, _ns5__GetAllPassphrasesResponse &ns5__GetAllPassphrasesResponse)
        { return this->GetAllPassphrases(NULL, NULL, ns5__GetAllPassphrases, ns5__GetAllPassphrasesResponse); }
        virtual int GetAllPassphrases(const char *soap_endpoint, const char *soap_action, _ns5__GetAllPassphrases *ns5__GetAllPassphrases, _ns5__GetAllPassphrasesResponse &ns5__GetAllPassphrasesResponse);
        /// Web service operation 'DeletePassphrase' (returns SOAP_OK or error code)
        virtual int DeletePassphrase(_ns5__DeletePassphrase *ns5__DeletePassphrase, _ns5__DeletePassphraseResponse &ns5__DeletePassphraseResponse)
        { return this->DeletePassphrase(NULL, NULL, ns5__DeletePassphrase, ns5__DeletePassphraseResponse); }
        virtual int DeletePassphrase(const char *soap_endpoint, const char *soap_action, _ns5__DeletePassphrase *ns5__DeletePassphrase, _ns5__DeletePassphraseResponse &ns5__DeletePassphraseResponse);
        /// Web service operation 'UploadCRL' (returns SOAP_OK or error code)
        virtual int UploadCRL(_ns5__UploadCRL *ns5__UploadCRL, _ns5__UploadCRLResponse &ns5__UploadCRLResponse)
        { return this->UploadCRL(NULL, NULL, ns5__UploadCRL, ns5__UploadCRLResponse); }
        virtual int UploadCRL(const char *soap_endpoint, const char *soap_action, _ns5__UploadCRL *ns5__UploadCRL, _ns5__UploadCRLResponse &ns5__UploadCRLResponse);
        /// Web service operation 'GetCRL' (returns SOAP_OK or error code)
        virtual int GetCRL(_ns5__GetCRL *ns5__GetCRL, _ns5__GetCRLResponse &ns5__GetCRLResponse)
        { return this->GetCRL(NULL, NULL, ns5__GetCRL, ns5__GetCRLResponse); }
        virtual int GetCRL(const char *soap_endpoint, const char *soap_action, _ns5__GetCRL *ns5__GetCRL, _ns5__GetCRLResponse &ns5__GetCRLResponse);
        /// Web service operation 'GetAllCRLs' (returns SOAP_OK or error code)
        virtual int GetAllCRLs(_ns5__GetAllCRLs *ns5__GetAllCRLs, _ns5__GetAllCRLsResponse &ns5__GetAllCRLsResponse)
        { return this->GetAllCRLs(NULL, NULL, ns5__GetAllCRLs, ns5__GetAllCRLsResponse); }
        virtual int GetAllCRLs(const char *soap_endpoint, const char *soap_action, _ns5__GetAllCRLs *ns5__GetAllCRLs, _ns5__GetAllCRLsResponse &ns5__GetAllCRLsResponse);
        /// Web service operation 'DeleteCRL' (returns SOAP_OK or error code)
        virtual int DeleteCRL(_ns5__DeleteCRL *ns5__DeleteCRL, _ns5__DeleteCRLResponse &ns5__DeleteCRLResponse)
        { return this->DeleteCRL(NULL, NULL, ns5__DeleteCRL, ns5__DeleteCRLResponse); }
        virtual int DeleteCRL(const char *soap_endpoint, const char *soap_action, _ns5__DeleteCRL *ns5__DeleteCRL, _ns5__DeleteCRLResponse &ns5__DeleteCRLResponse);
        /// Web service operation 'CreateCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int CreateCertPathValidationPolicy(_ns5__CreateCertPathValidationPolicy *ns5__CreateCertPathValidationPolicy, _ns5__CreateCertPathValidationPolicyResponse &ns5__CreateCertPathValidationPolicyResponse)
        { return this->CreateCertPathValidationPolicy(NULL, NULL, ns5__CreateCertPathValidationPolicy, ns5__CreateCertPathValidationPolicyResponse); }
        virtual int CreateCertPathValidationPolicy(const char *soap_endpoint, const char *soap_action, _ns5__CreateCertPathValidationPolicy *ns5__CreateCertPathValidationPolicy, _ns5__CreateCertPathValidationPolicyResponse &ns5__CreateCertPathValidationPolicyResponse);
        /// Web service operation 'GetCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int GetCertPathValidationPolicy(_ns5__GetCertPathValidationPolicy *ns5__GetCertPathValidationPolicy, _ns5__GetCertPathValidationPolicyResponse &ns5__GetCertPathValidationPolicyResponse)
        { return this->GetCertPathValidationPolicy(NULL, NULL, ns5__GetCertPathValidationPolicy, ns5__GetCertPathValidationPolicyResponse); }
        virtual int GetCertPathValidationPolicy(const char *soap_endpoint, const char *soap_action, _ns5__GetCertPathValidationPolicy *ns5__GetCertPathValidationPolicy, _ns5__GetCertPathValidationPolicyResponse &ns5__GetCertPathValidationPolicyResponse);
        /// Web service operation 'GetAllCertPathValidationPolicies' (returns SOAP_OK or error code)
        virtual int GetAllCertPathValidationPolicies(_ns5__GetAllCertPathValidationPolicies *ns5__GetAllCertPathValidationPolicies, _ns5__GetAllCertPathValidationPoliciesResponse &ns5__GetAllCertPathValidationPoliciesResponse)
        { return this->GetAllCertPathValidationPolicies(NULL, NULL, ns5__GetAllCertPathValidationPolicies, ns5__GetAllCertPathValidationPoliciesResponse); }
        virtual int GetAllCertPathValidationPolicies(const char *soap_endpoint, const char *soap_action, _ns5__GetAllCertPathValidationPolicies *ns5__GetAllCertPathValidationPolicies, _ns5__GetAllCertPathValidationPoliciesResponse &ns5__GetAllCertPathValidationPoliciesResponse);
        /// Web service operation 'DeleteCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int DeleteCertPathValidationPolicy(_ns5__DeleteCertPathValidationPolicy *ns5__DeleteCertPathValidationPolicy, _ns5__DeleteCertPathValidationPolicyResponse &ns5__DeleteCertPathValidationPolicyResponse)
        { return this->DeleteCertPathValidationPolicy(NULL, NULL, ns5__DeleteCertPathValidationPolicy, ns5__DeleteCertPathValidationPolicyResponse); }
        virtual int DeleteCertPathValidationPolicy(const char *soap_endpoint, const char *soap_action, _ns5__DeleteCertPathValidationPolicy *ns5__DeleteCertPathValidationPolicy, _ns5__DeleteCertPathValidationPolicyResponse &ns5__DeleteCertPathValidationPolicyResponse);
        /// Web service operation 'AddServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int AddServerCertificateAssignment(_ns5__AddServerCertificateAssignment *ns5__AddServerCertificateAssignment, _ns5__AddServerCertificateAssignmentResponse &ns5__AddServerCertificateAssignmentResponse)
        { return this->AddServerCertificateAssignment(NULL, NULL, ns5__AddServerCertificateAssignment, ns5__AddServerCertificateAssignmentResponse); }
        virtual int AddServerCertificateAssignment(const char *soap_endpoint, const char *soap_action, _ns5__AddServerCertificateAssignment *ns5__AddServerCertificateAssignment, _ns5__AddServerCertificateAssignmentResponse &ns5__AddServerCertificateAssignmentResponse);
        /// Web service operation 'RemoveServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int RemoveServerCertificateAssignment(_ns5__RemoveServerCertificateAssignment *ns5__RemoveServerCertificateAssignment, _ns5__RemoveServerCertificateAssignmentResponse &ns5__RemoveServerCertificateAssignmentResponse)
        { return this->RemoveServerCertificateAssignment(NULL, NULL, ns5__RemoveServerCertificateAssignment, ns5__RemoveServerCertificateAssignmentResponse); }
        virtual int RemoveServerCertificateAssignment(const char *soap_endpoint, const char *soap_action, _ns5__RemoveServerCertificateAssignment *ns5__RemoveServerCertificateAssignment, _ns5__RemoveServerCertificateAssignmentResponse &ns5__RemoveServerCertificateAssignmentResponse);
        /// Web service operation 'ReplaceServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int ReplaceServerCertificateAssignment(_ns5__ReplaceServerCertificateAssignment *ns5__ReplaceServerCertificateAssignment, _ns5__ReplaceServerCertificateAssignmentResponse &ns5__ReplaceServerCertificateAssignmentResponse)
        { return this->ReplaceServerCertificateAssignment(NULL, NULL, ns5__ReplaceServerCertificateAssignment, ns5__ReplaceServerCertificateAssignmentResponse); }
        virtual int ReplaceServerCertificateAssignment(const char *soap_endpoint, const char *soap_action, _ns5__ReplaceServerCertificateAssignment *ns5__ReplaceServerCertificateAssignment, _ns5__ReplaceServerCertificateAssignmentResponse &ns5__ReplaceServerCertificateAssignmentResponse);
        /// Web service operation 'GetAssignedServerCertificates' (returns SOAP_OK or error code)
        virtual int GetAssignedServerCertificates(_ns5__GetAssignedServerCertificates *ns5__GetAssignedServerCertificates, _ns5__GetAssignedServerCertificatesResponse &ns5__GetAssignedServerCertificatesResponse)
        { return this->GetAssignedServerCertificates(NULL, NULL, ns5__GetAssignedServerCertificates, ns5__GetAssignedServerCertificatesResponse); }
        virtual int GetAssignedServerCertificates(const char *soap_endpoint, const char *soap_action, _ns5__GetAssignedServerCertificates *ns5__GetAssignedServerCertificates, _ns5__GetAssignedServerCertificatesResponse &ns5__GetAssignedServerCertificatesResponse);
        /// Web service operation 'SetClientAuthenticationRequired' (returns SOAP_OK or error code)
        virtual int SetClientAuthenticationRequired(_ns5__SetClientAuthenticationRequired *ns5__SetClientAuthenticationRequired, _ns5__SetClientAuthenticationRequiredResponse &ns5__SetClientAuthenticationRequiredResponse)
        { return this->SetClientAuthenticationRequired(NULL, NULL, ns5__SetClientAuthenticationRequired, ns5__SetClientAuthenticationRequiredResponse); }
        virtual int SetClientAuthenticationRequired(const char *soap_endpoint, const char *soap_action, _ns5__SetClientAuthenticationRequired *ns5__SetClientAuthenticationRequired, _ns5__SetClientAuthenticationRequiredResponse &ns5__SetClientAuthenticationRequiredResponse);
        /// Web service operation 'GetClientAuthenticationRequired' (returns SOAP_OK or error code)
        virtual int GetClientAuthenticationRequired(_ns5__GetClientAuthenticationRequired *ns5__GetClientAuthenticationRequired, _ns5__GetClientAuthenticationRequiredResponse &ns5__GetClientAuthenticationRequiredResponse)
        { return this->GetClientAuthenticationRequired(NULL, NULL, ns5__GetClientAuthenticationRequired, ns5__GetClientAuthenticationRequiredResponse); }
        virtual int GetClientAuthenticationRequired(const char *soap_endpoint, const char *soap_action, _ns5__GetClientAuthenticationRequired *ns5__GetClientAuthenticationRequired, _ns5__GetClientAuthenticationRequiredResponse &ns5__GetClientAuthenticationRequiredResponse);
        /// Web service operation 'AddCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int AddCertPathValidationPolicyAssignment(_ns5__AddCertPathValidationPolicyAssignment *ns5__AddCertPathValidationPolicyAssignment, _ns5__AddCertPathValidationPolicyAssignmentResponse &ns5__AddCertPathValidationPolicyAssignmentResponse)
        { return this->AddCertPathValidationPolicyAssignment(NULL, NULL, ns5__AddCertPathValidationPolicyAssignment, ns5__AddCertPathValidationPolicyAssignmentResponse); }
        virtual int AddCertPathValidationPolicyAssignment(const char *soap_endpoint, const char *soap_action, _ns5__AddCertPathValidationPolicyAssignment *ns5__AddCertPathValidationPolicyAssignment, _ns5__AddCertPathValidationPolicyAssignmentResponse &ns5__AddCertPathValidationPolicyAssignmentResponse);
        /// Web service operation 'RemoveCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int RemoveCertPathValidationPolicyAssignment(_ns5__RemoveCertPathValidationPolicyAssignment *ns5__RemoveCertPathValidationPolicyAssignment, _ns5__RemoveCertPathValidationPolicyAssignmentResponse &ns5__RemoveCertPathValidationPolicyAssignmentResponse)
        { return this->RemoveCertPathValidationPolicyAssignment(NULL, NULL, ns5__RemoveCertPathValidationPolicyAssignment, ns5__RemoveCertPathValidationPolicyAssignmentResponse); }
        virtual int RemoveCertPathValidationPolicyAssignment(const char *soap_endpoint, const char *soap_action, _ns5__RemoveCertPathValidationPolicyAssignment *ns5__RemoveCertPathValidationPolicyAssignment, _ns5__RemoveCertPathValidationPolicyAssignmentResponse &ns5__RemoveCertPathValidationPolicyAssignmentResponse);
        /// Web service operation 'ReplaceCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int ReplaceCertPathValidationPolicyAssignment(_ns5__ReplaceCertPathValidationPolicyAssignment *ns5__ReplaceCertPathValidationPolicyAssignment, _ns5__ReplaceCertPathValidationPolicyAssignmentResponse &ns5__ReplaceCertPathValidationPolicyAssignmentResponse)
        { return this->ReplaceCertPathValidationPolicyAssignment(NULL, NULL, ns5__ReplaceCertPathValidationPolicyAssignment, ns5__ReplaceCertPathValidationPolicyAssignmentResponse); }
        virtual int ReplaceCertPathValidationPolicyAssignment(const char *soap_endpoint, const char *soap_action, _ns5__ReplaceCertPathValidationPolicyAssignment *ns5__ReplaceCertPathValidationPolicyAssignment, _ns5__ReplaceCertPathValidationPolicyAssignmentResponse &ns5__ReplaceCertPathValidationPolicyAssignmentResponse);
        /// Web service operation 'GetAssignedCertPathValidationPolicies' (returns SOAP_OK or error code)
        virtual int GetAssignedCertPathValidationPolicies(_ns5__GetAssignedCertPathValidationPolicies *ns5__GetAssignedCertPathValidationPolicies, _ns5__GetAssignedCertPathValidationPoliciesResponse &ns5__GetAssignedCertPathValidationPoliciesResponse)
        { return this->GetAssignedCertPathValidationPolicies(NULL, NULL, ns5__GetAssignedCertPathValidationPolicies, ns5__GetAssignedCertPathValidationPoliciesResponse); }
        virtual int GetAssignedCertPathValidationPolicies(const char *soap_endpoint, const char *soap_action, _ns5__GetAssignedCertPathValidationPolicies *ns5__GetAssignedCertPathValidationPolicies, _ns5__GetAssignedCertPathValidationPoliciesResponse &ns5__GetAssignedCertPathValidationPoliciesResponse);
        /// Web service operation 'AddDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int AddDot1XConfiguration(_ns5__AddDot1XConfiguration *ns5__AddDot1XConfiguration, _ns5__AddDot1XConfigurationResponse &ns5__AddDot1XConfigurationResponse)
        { return this->AddDot1XConfiguration(NULL, NULL, ns5__AddDot1XConfiguration, ns5__AddDot1XConfigurationResponse); }
        virtual int AddDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__AddDot1XConfiguration *ns5__AddDot1XConfiguration, _ns5__AddDot1XConfigurationResponse &ns5__AddDot1XConfigurationResponse);
        /// Web service operation 'GetAllDot1XConfigurations' (returns SOAP_OK or error code)
        virtual int GetAllDot1XConfigurations(_ns5__GetAllDot1XConfigurations *ns5__GetAllDot1XConfigurations, _ns5__GetAllDot1XConfigurationsResponse &ns5__GetAllDot1XConfigurationsResponse)
        { return this->GetAllDot1XConfigurations(NULL, NULL, ns5__GetAllDot1XConfigurations, ns5__GetAllDot1XConfigurationsResponse); }
        virtual int GetAllDot1XConfigurations(const char *soap_endpoint, const char *soap_action, _ns5__GetAllDot1XConfigurations *ns5__GetAllDot1XConfigurations, _ns5__GetAllDot1XConfigurationsResponse &ns5__GetAllDot1XConfigurationsResponse);
        /// Web service operation 'GetDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int GetDot1XConfiguration(_ns5__GetDot1XConfiguration *ns5__GetDot1XConfiguration, _ns5__GetDot1XConfigurationResponse &ns5__GetDot1XConfigurationResponse)
        { return this->GetDot1XConfiguration(NULL, NULL, ns5__GetDot1XConfiguration, ns5__GetDot1XConfigurationResponse); }
        virtual int GetDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__GetDot1XConfiguration *ns5__GetDot1XConfiguration, _ns5__GetDot1XConfigurationResponse &ns5__GetDot1XConfigurationResponse);
        /// Web service operation 'DeleteDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int DeleteDot1XConfiguration(_ns5__DeleteDot1XConfiguration *ns5__DeleteDot1XConfiguration, _ns5__DeleteDot1XConfigurationResponse &ns5__DeleteDot1XConfigurationResponse)
        { return this->DeleteDot1XConfiguration(NULL, NULL, ns5__DeleteDot1XConfiguration, ns5__DeleteDot1XConfigurationResponse); }
        virtual int DeleteDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__DeleteDot1XConfiguration *ns5__DeleteDot1XConfiguration, _ns5__DeleteDot1XConfigurationResponse &ns5__DeleteDot1XConfigurationResponse);
        /// Web service operation 'SetNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int SetNetworkInterfaceDot1XConfiguration(_ns5__SetNetworkInterfaceDot1XConfiguration *ns5__SetNetworkInterfaceDot1XConfiguration, _ns5__SetNetworkInterfaceDot1XConfigurationResponse &ns5__SetNetworkInterfaceDot1XConfigurationResponse)
        { return this->SetNetworkInterfaceDot1XConfiguration(NULL, NULL, ns5__SetNetworkInterfaceDot1XConfiguration, ns5__SetNetworkInterfaceDot1XConfigurationResponse); }
        virtual int SetNetworkInterfaceDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__SetNetworkInterfaceDot1XConfiguration *ns5__SetNetworkInterfaceDot1XConfiguration, _ns5__SetNetworkInterfaceDot1XConfigurationResponse &ns5__SetNetworkInterfaceDot1XConfigurationResponse);
        /// Web service operation 'GetNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int GetNetworkInterfaceDot1XConfiguration(_ns5__GetNetworkInterfaceDot1XConfiguration *ns5__GetNetworkInterfaceDot1XConfiguration, _ns5__GetNetworkInterfaceDot1XConfigurationResponse &ns5__GetNetworkInterfaceDot1XConfigurationResponse)
        { return this->GetNetworkInterfaceDot1XConfiguration(NULL, NULL, ns5__GetNetworkInterfaceDot1XConfiguration, ns5__GetNetworkInterfaceDot1XConfigurationResponse); }
        virtual int GetNetworkInterfaceDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__GetNetworkInterfaceDot1XConfiguration *ns5__GetNetworkInterfaceDot1XConfiguration, _ns5__GetNetworkInterfaceDot1XConfigurationResponse &ns5__GetNetworkInterfaceDot1XConfigurationResponse);
        /// Web service operation 'DeleteNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int DeleteNetworkInterfaceDot1XConfiguration(_ns5__DeleteNetworkInterfaceDot1XConfiguration *ns5__DeleteNetworkInterfaceDot1XConfiguration, _ns5__DeleteNetworkInterfaceDot1XConfigurationResponse &ns5__DeleteNetworkInterfaceDot1XConfigurationResponse)
        { return this->DeleteNetworkInterfaceDot1XConfiguration(NULL, NULL, ns5__DeleteNetworkInterfaceDot1XConfiguration, ns5__DeleteNetworkInterfaceDot1XConfigurationResponse); }
        virtual int DeleteNetworkInterfaceDot1XConfiguration(const char *soap_endpoint, const char *soap_action, _ns5__DeleteNetworkInterfaceDot1XConfiguration *ns5__DeleteNetworkInterfaceDot1XConfiguration, _ns5__DeleteNetworkInterfaceDot1XConfigurationResponse &ns5__DeleteNetworkInterfaceDot1XConfigurationResponse);
    };
#endif
