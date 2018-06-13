/* soapAdvancedSecurityServiceBindingService.h
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

#ifndef soapAdvancedSecurityServiceBindingService_H
#define soapAdvancedSecurityServiceBindingService_H
#include "soapH.h"

    class SOAP_CMAC AdvancedSecurityServiceBindingService : public soap {
      public:
        /// Variables globally declared in onvif.h, if any
        /// Construct a service with new managing context
        AdvancedSecurityServiceBindingService();
        /// Copy constructor
        AdvancedSecurityServiceBindingService(const AdvancedSecurityServiceBindingService&);
        /// Construct service given a managing context
        AdvancedSecurityServiceBindingService(const struct soap&);
        /// Constructor taking input+output mode flags for the new managing context
        AdvancedSecurityServiceBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        AdvancedSecurityServiceBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~AdvancedSecurityServiceBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void AdvancedSecurityServiceBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual AdvancedSecurityServiceBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        AdvancedSecurityServiceBindingService& operator=(const AdvancedSecurityServiceBindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
    #ifndef WITH_NOIO
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve this request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a request (returns SOAP_OK or error code)
        virtual int dispatch();
        ///
        /// Service operations are listed below (you should define these)
        /// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
        ///
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_ns5__GetServiceCapabilities *ns5__GetServiceCapabilities, _ns5__GetServiceCapabilitiesResponse &ns5__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateRSAKeyPair' (returns SOAP_OK or error code)
        virtual int CreateRSAKeyPair(_ns5__CreateRSAKeyPair *ns5__CreateRSAKeyPair, _ns5__CreateRSAKeyPairResponse &ns5__CreateRSAKeyPairResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UploadKeyPairInPKCS8' (returns SOAP_OK or error code)
        virtual int UploadKeyPairInPKCS8(_ns5__UploadKeyPairInPKCS8 *ns5__UploadKeyPairInPKCS8, _ns5__UploadKeyPairInPKCS8Response &ns5__UploadKeyPairInPKCS8Response) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UploadCertificateWithPrivateKeyInPKCS12' (returns SOAP_OK or error code)
        virtual int UploadCertificateWithPrivateKeyInPKCS12(_ns5__UploadCertificateWithPrivateKeyInPKCS12 *ns5__UploadCertificateWithPrivateKeyInPKCS12, _ns5__UploadCertificateWithPrivateKeyInPKCS12Response &ns5__UploadCertificateWithPrivateKeyInPKCS12Response) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetKeyStatus' (returns SOAP_OK or error code)
        virtual int GetKeyStatus(_ns5__GetKeyStatus *ns5__GetKeyStatus, _ns5__GetKeyStatusResponse &ns5__GetKeyStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetPrivateKeyStatus' (returns SOAP_OK or error code)
        virtual int GetPrivateKeyStatus(_ns5__GetPrivateKeyStatus *ns5__GetPrivateKeyStatus, _ns5__GetPrivateKeyStatusResponse &ns5__GetPrivateKeyStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllKeys' (returns SOAP_OK or error code)
        virtual int GetAllKeys(_ns5__GetAllKeys *ns5__GetAllKeys, _ns5__GetAllKeysResponse &ns5__GetAllKeysResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteKey' (returns SOAP_OK or error code)
        virtual int DeleteKey(_ns5__DeleteKey *ns5__DeleteKey, _ns5__DeleteKeyResponse &ns5__DeleteKeyResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreatePKCS10CSR' (returns SOAP_OK or error code)
        virtual int CreatePKCS10CSR(_ns5__CreatePKCS10CSR *ns5__CreatePKCS10CSR, _ns5__CreatePKCS10CSRResponse &ns5__CreatePKCS10CSRResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateSelfSignedCertificate' (returns SOAP_OK or error code)
        virtual int CreateSelfSignedCertificate(_ns5__CreateSelfSignedCertificate *ns5__CreateSelfSignedCertificate, _ns5__CreateSelfSignedCertificateResponse &ns5__CreateSelfSignedCertificateResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UploadCertificate' (returns SOAP_OK or error code)
        virtual int UploadCertificate(_ns5__UploadCertificate *ns5__UploadCertificate, _ns5__UploadCertificateResponse &ns5__UploadCertificateResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetCertificate' (returns SOAP_OK or error code)
        virtual int GetCertificate(_ns5__GetCertificate *ns5__GetCertificate, _ns5__GetCertificateResponse &ns5__GetCertificateResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllCertificates' (returns SOAP_OK or error code)
        virtual int GetAllCertificates(_ns5__GetAllCertificates *ns5__GetAllCertificates, _ns5__GetAllCertificatesResponse &ns5__GetAllCertificatesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteCertificate' (returns SOAP_OK or error code)
        virtual int DeleteCertificate(_ns5__DeleteCertificate *ns5__DeleteCertificate, _ns5__DeleteCertificateResponse &ns5__DeleteCertificateResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateCertificationPath' (returns SOAP_OK or error code)
        virtual int CreateCertificationPath(_ns5__CreateCertificationPath *ns5__CreateCertificationPath, _ns5__CreateCertificationPathResponse &ns5__CreateCertificationPathResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetCertificationPath' (returns SOAP_OK or error code)
        virtual int GetCertificationPath(_ns5__GetCertificationPath *ns5__GetCertificationPath, _ns5__GetCertificationPathResponse &ns5__GetCertificationPathResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllCertificationPaths' (returns SOAP_OK or error code)
        virtual int GetAllCertificationPaths(_ns5__GetAllCertificationPaths *ns5__GetAllCertificationPaths, _ns5__GetAllCertificationPathsResponse &ns5__GetAllCertificationPathsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteCertificationPath' (returns SOAP_OK or error code)
        virtual int DeleteCertificationPath(_ns5__DeleteCertificationPath *ns5__DeleteCertificationPath, _ns5__DeleteCertificationPathResponse &ns5__DeleteCertificationPathResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UploadPassphrase' (returns SOAP_OK or error code)
        virtual int UploadPassphrase(_ns5__UploadPassphrase *ns5__UploadPassphrase, _ns5__UploadPassphraseResponse &ns5__UploadPassphraseResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllPassphrases' (returns SOAP_OK or error code)
        virtual int GetAllPassphrases(_ns5__GetAllPassphrases *ns5__GetAllPassphrases, _ns5__GetAllPassphrasesResponse &ns5__GetAllPassphrasesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeletePassphrase' (returns SOAP_OK or error code)
        virtual int DeletePassphrase(_ns5__DeletePassphrase *ns5__DeletePassphrase, _ns5__DeletePassphraseResponse &ns5__DeletePassphraseResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'UploadCRL' (returns SOAP_OK or error code)
        virtual int UploadCRL(_ns5__UploadCRL *ns5__UploadCRL, _ns5__UploadCRLResponse &ns5__UploadCRLResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetCRL' (returns SOAP_OK or error code)
        virtual int GetCRL(_ns5__GetCRL *ns5__GetCRL, _ns5__GetCRLResponse &ns5__GetCRLResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllCRLs' (returns SOAP_OK or error code)
        virtual int GetAllCRLs(_ns5__GetAllCRLs *ns5__GetAllCRLs, _ns5__GetAllCRLsResponse &ns5__GetAllCRLsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteCRL' (returns SOAP_OK or error code)
        virtual int DeleteCRL(_ns5__DeleteCRL *ns5__DeleteCRL, _ns5__DeleteCRLResponse &ns5__DeleteCRLResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int CreateCertPathValidationPolicy(_ns5__CreateCertPathValidationPolicy *ns5__CreateCertPathValidationPolicy, _ns5__CreateCertPathValidationPolicyResponse &ns5__CreateCertPathValidationPolicyResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int GetCertPathValidationPolicy(_ns5__GetCertPathValidationPolicy *ns5__GetCertPathValidationPolicy, _ns5__GetCertPathValidationPolicyResponse &ns5__GetCertPathValidationPolicyResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllCertPathValidationPolicies' (returns SOAP_OK or error code)
        virtual int GetAllCertPathValidationPolicies(_ns5__GetAllCertPathValidationPolicies *ns5__GetAllCertPathValidationPolicies, _ns5__GetAllCertPathValidationPoliciesResponse &ns5__GetAllCertPathValidationPoliciesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteCertPathValidationPolicy' (returns SOAP_OK or error code)
        virtual int DeleteCertPathValidationPolicy(_ns5__DeleteCertPathValidationPolicy *ns5__DeleteCertPathValidationPolicy, _ns5__DeleteCertPathValidationPolicyResponse &ns5__DeleteCertPathValidationPolicyResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'AddServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int AddServerCertificateAssignment(_ns5__AddServerCertificateAssignment *ns5__AddServerCertificateAssignment, _ns5__AddServerCertificateAssignmentResponse &ns5__AddServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'RemoveServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int RemoveServerCertificateAssignment(_ns5__RemoveServerCertificateAssignment *ns5__RemoveServerCertificateAssignment, _ns5__RemoveServerCertificateAssignmentResponse &ns5__RemoveServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ReplaceServerCertificateAssignment' (returns SOAP_OK or error code)
        virtual int ReplaceServerCertificateAssignment(_ns5__ReplaceServerCertificateAssignment *ns5__ReplaceServerCertificateAssignment, _ns5__ReplaceServerCertificateAssignmentResponse &ns5__ReplaceServerCertificateAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAssignedServerCertificates' (returns SOAP_OK or error code)
        virtual int GetAssignedServerCertificates(_ns5__GetAssignedServerCertificates *ns5__GetAssignedServerCertificates, _ns5__GetAssignedServerCertificatesResponse &ns5__GetAssignedServerCertificatesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetClientAuthenticationRequired' (returns SOAP_OK or error code)
        virtual int SetClientAuthenticationRequired(_ns5__SetClientAuthenticationRequired *ns5__SetClientAuthenticationRequired, _ns5__SetClientAuthenticationRequiredResponse &ns5__SetClientAuthenticationRequiredResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetClientAuthenticationRequired' (returns SOAP_OK or error code)
        virtual int GetClientAuthenticationRequired(_ns5__GetClientAuthenticationRequired *ns5__GetClientAuthenticationRequired, _ns5__GetClientAuthenticationRequiredResponse &ns5__GetClientAuthenticationRequiredResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'AddCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int AddCertPathValidationPolicyAssignment(_ns5__AddCertPathValidationPolicyAssignment *ns5__AddCertPathValidationPolicyAssignment, _ns5__AddCertPathValidationPolicyAssignmentResponse &ns5__AddCertPathValidationPolicyAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'RemoveCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int RemoveCertPathValidationPolicyAssignment(_ns5__RemoveCertPathValidationPolicyAssignment *ns5__RemoveCertPathValidationPolicyAssignment, _ns5__RemoveCertPathValidationPolicyAssignmentResponse &ns5__RemoveCertPathValidationPolicyAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ReplaceCertPathValidationPolicyAssignment' (returns SOAP_OK or error code)
        virtual int ReplaceCertPathValidationPolicyAssignment(_ns5__ReplaceCertPathValidationPolicyAssignment *ns5__ReplaceCertPathValidationPolicyAssignment, _ns5__ReplaceCertPathValidationPolicyAssignmentResponse &ns5__ReplaceCertPathValidationPolicyAssignmentResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAssignedCertPathValidationPolicies' (returns SOAP_OK or error code)
        virtual int GetAssignedCertPathValidationPolicies(_ns5__GetAssignedCertPathValidationPolicies *ns5__GetAssignedCertPathValidationPolicies, _ns5__GetAssignedCertPathValidationPoliciesResponse &ns5__GetAssignedCertPathValidationPoliciesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'AddDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int AddDot1XConfiguration(_ns5__AddDot1XConfiguration *ns5__AddDot1XConfiguration, _ns5__AddDot1XConfigurationResponse &ns5__AddDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAllDot1XConfigurations' (returns SOAP_OK or error code)
        virtual int GetAllDot1XConfigurations(_ns5__GetAllDot1XConfigurations *ns5__GetAllDot1XConfigurations, _ns5__GetAllDot1XConfigurationsResponse &ns5__GetAllDot1XConfigurationsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int GetDot1XConfiguration(_ns5__GetDot1XConfiguration *ns5__GetDot1XConfiguration, _ns5__GetDot1XConfigurationResponse &ns5__GetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int DeleteDot1XConfiguration(_ns5__DeleteDot1XConfiguration *ns5__DeleteDot1XConfiguration, _ns5__DeleteDot1XConfigurationResponse &ns5__DeleteDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int SetNetworkInterfaceDot1XConfiguration(_ns5__SetNetworkInterfaceDot1XConfiguration *ns5__SetNetworkInterfaceDot1XConfiguration, _ns5__SetNetworkInterfaceDot1XConfigurationResponse &ns5__SetNetworkInterfaceDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int GetNetworkInterfaceDot1XConfiguration(_ns5__GetNetworkInterfaceDot1XConfiguration *ns5__GetNetworkInterfaceDot1XConfiguration, _ns5__GetNetworkInterfaceDot1XConfigurationResponse &ns5__GetNetworkInterfaceDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteNetworkInterfaceDot1XConfiguration' (returns SOAP_OK or error code)
        virtual int DeleteNetworkInterfaceDot1XConfiguration(_ns5__DeleteNetworkInterfaceDot1XConfiguration *ns5__DeleteNetworkInterfaceDot1XConfiguration, _ns5__DeleteNetworkInterfaceDot1XConfigurationResponse &ns5__DeleteNetworkInterfaceDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
    };
#endif
