/* soapwsddService.h
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

#ifndef soapwsddService_H
#define soapwsddService_H
#include "soapH.h"

    class SOAP_CMAC wsddService : public soap {
      public:
        /// Variables globally declared in onvif.h, if any
        /// Construct a service with new managing context
        wsddService();
        /// Copy constructor
        wsddService(const wsddService&);
        /// Construct service given a managing context
        wsddService(const struct soap&);
        /// Constructor taking input+output mode flags for the new managing context
        wsddService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        wsddService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~wsddService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void wsddService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual wsddService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        wsddService& operator=(const wsddService&);
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
        /// Web service one-way operation 'Hello' (return SOAP_OK (no response) or error code, or use send_Hello_empty_response())
        virtual int Hello(struct wsdd__HelloType *wsdd__Hello) SOAP_PURE_VIRTUAL;
        virtual int send_Hello_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
        /// Web service one-way operation 'Bye' (return SOAP_OK (no response) or error code, or use send_Bye_empty_response())
        virtual int Bye(struct wsdd__ByeType *wsdd__Bye) SOAP_PURE_VIRTUAL;
        virtual int send_Bye_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
        /// Web service one-way operation 'Probe' (return SOAP_OK (no response) or error code, or use send_Probe_empty_response())
        virtual int Probe(struct wsdd__ProbeType *wsdd__Probe) SOAP_PURE_VIRTUAL;
        virtual int send_Probe_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
        /// Web service one-way operation 'ProbeMatches' (return SOAP_OK (no response) or error code, or use send_ProbeMatches_empty_response())
        virtual int ProbeMatches(struct wsdd__ProbeMatchesType *wsdd__ProbeMatches) SOAP_PURE_VIRTUAL;
        virtual int send_ProbeMatches_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
        /// Web service one-way operation 'Resolve' (return SOAP_OK (no response) or error code, or use send_Resolve_empty_response())
        virtual int Resolve(struct wsdd__ResolveType *wsdd__Resolve) SOAP_PURE_VIRTUAL;
        virtual int send_Resolve_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
        /// Web service one-way operation 'ResolveMatches' (return SOAP_OK (no response) or error code, or use send_ResolveMatches_empty_response())
        virtual int ResolveMatches(struct wsdd__ResolveMatchesType *wsdd__ResolveMatches) SOAP_PURE_VIRTUAL;
        virtual int send_ResolveMatches_empty_response(int httpcode)
        { return soap_send_empty_response(this, httpcode); }
    };
#endif
