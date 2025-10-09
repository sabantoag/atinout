/*===============================================================================================*/
/*         >>> Copyright (C) Telit Communications All Rights Reserved. <<<          */
/*!
  @file
   m2m/m2m_mdm9607/private/m2mmain/rpc/inc/m2mb_rpc.h

  @brief
    M2MB RPC service

  @details


  @notes

  @author
    JH Choi

  @date
    24/01/2021
*/

#ifndef M2MB_RPC_H
#define M2MB_RPC_H

/* Include ======================================================================================*/

/* Global declarations ==========================================================================*/


/* Global typedefs ==============================================================================*/

typedef void* M2MB_RPC_HANDLE;


typedef enum
{
  M2MB_RPC_SUCCESS    = 0,
  M2MB_RPC_FAILURE    = 1
} M2MB_RPC_RET_E;


// tls_chiper_suite
enum 
{
  ATSSL_TLS_CHIPER_SUITES_DEFAULT         = 0,    
  ATSSL_TLS_RSA_WITH_3DES_EDE_CBC_SHA,
  ATSSL_TLS_RSA_WITH_AES_128_CBC_SHA,
  ATSSL_TLS_RSA_WITH_AES_128_CBC_SHA256,
  ATSSL_TLS_RSA_WITH_AES_256_CBC_SHA,
  ATSSL_TLS_RSA_WITH_AES_256_CBC_SHA256,
  ATSSL_TLS_DHE_RSA_WITH_AES_128_CBC_SHA,
  ATSSL_TLS_DHE_RSA_WITH_AES_256_CBC_SHA,
  ATSSL_TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA,
  ATSSL_TLS_DHE_RSA_WITH_AES_128_CBC_SHA256,
  ATSSL_TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
};

// tls_prot_ver
enum 
{
  ATSSL_PROT_TLS_V10 = 0,
  ATSSL_PROT_TLS_V11,  
  ATSSL_PROT_TLS_V12
};

// tls_auth_mode
enum
{
  ATSSL_AUTH_NONE = 0,
  ATSSL_AUTH_SERVER,
  ATSSL_AUTH_SERVER_CLIENT
};

// tls_cert_fmt
enum
{
  ATSSL_CERT_DER_FMT = 0,
  ATSSL_CERT_PEM_FMT    
};


typedef struct {
  int   tls_prot_ver;
  int   tls_chiper_suite;
  int   tls_auth_mode;
  int   tls_cert_fmt;
  char* root_ca_file;
  char* cert_file;
  char* key_file;
} M2MB_RPC_ATSSL_CFG_T;


typedef struct {
  int   act_deact; // 1 - active , 0 - deactive
  int   cid;
  int   pdp_type; // 1 - IPv4, 2 - IPv6 , 3 - IPv4v6
  char* apn;
  char* username;
  char* password;
  int   clat;
} M2MB_RPC_ATSGACT_CTX_T;


/* Global define ================================================================================*/

/* Global functions =============================================================================*/

M2MB_RPC_HANDLE m2mb_rpc_init(void);

M2MB_RPC_RET_E m2mb_rpc_deinit(M2MB_RPC_HANDLE rpc_hdl);

M2MB_RPC_RET_E m2mb_rpc_atsgact_set_pdp_ctx(M2MB_RPC_HANDLE rpc_hdl, M2MB_RPC_ATSGACT_CTX_T* pdp_ctx_msg);

M2MB_RPC_RET_E m2mb_rpc_atsgact_get_pdp_ctx(M2MB_RPC_HANDLE rpc_hdl, int pdp_ctx_id, int* pdp_ctx_stat);

M2MB_RPC_RET_E m2mb_rpc_atssl_get_ssl_cfg(M2MB_RPC_HANDLE rpc_hdl, int ssl_id, M2MB_RPC_ATSSL_CFG_T* atssl_cfg);

M2MB_RPC_RET_E m2mb_rpc_atssl_enable_ssl_cfg(M2MB_RPC_HANDLE rpc_hdl, int ssl_id, int enable_atssl_cfg);


#endif /* M2MB_RPC_H */

