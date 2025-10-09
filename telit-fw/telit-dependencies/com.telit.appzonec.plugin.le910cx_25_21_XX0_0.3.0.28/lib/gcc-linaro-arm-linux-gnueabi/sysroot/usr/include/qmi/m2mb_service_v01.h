#ifndef M2MB_SERVICE_01_H
#define M2MB_SERVICE_01_H
/**
  @file m2mb_service_v01.h

  @brief This is the public header file which defines the m2mb service Data structures.

  This header file defines the types and structures that were defined in
  m2mb. It contains the constant values defined, enums, structures,
  messages, and service message IDs (in that order) Structures that were
  defined in the IDL as messages contain mandatory elements, optional
  elements, a combination of mandatory and optional elements (mandatory
  always come before optionals in the structure), or nothing (null message)

  An optional element in a message is preceded by a uint8_t value that must be
  set to true if the element is going to be included. When decoding a received
  message, the uint8_t values will be set to true or false by the decode
  routine, and should be checked before accessing the values that they
  correspond to.

  Variable sized arrays are defined as static sized arrays with an unsigned
  integer (32 bit) preceding it that must be set to the number of elements
  in the array that are valid. For Example:

  uint32_t test_opaque_len;
  uint8_t test_opaque[16];

  If only 4 elements are added to test_opaque[] then test_opaque_len must be
  set to 4 before sending the message.  When decoding, the _len value is set 
  by the decode routine and should be checked so that the correct number of
  elements in the array will be accessed.

*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
  

  
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====* 
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.14.5 
   It was generated on: Thu Apr  1 2021 (Spin 0)
   From IDL File: m2mb_service_v01.idl */

/** @defgroup m2mb_qmi_consts Constant values defined in the IDL */
/** @defgroup m2mb_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup m2mb_qmi_enums Enumerated types used in QMI messages */
/** @defgroup m2mb_qmi_messages Structures sent as QMI messages */
/** @defgroup m2mb_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup m2mb_qmi_accessor Accessor for QMI service object */
/** @defgroup m2mb_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup m2mb_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define M2MB_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define M2MB_V01_IDL_MINOR_VERS 0x00
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define M2MB_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define M2MB_V01_MAX_MESSAGE_ID 0x0002
/**
    @}
  */


/** @addtogroup m2mb_qmi_consts 
    @{ 
  */
#define QMI_M2MB_PDP_MAX_APN_LEN_V01 101
#define QMI_M2MB_PDP_MAX_USERNAME_LEN_V01 128
#define QMI_M2MB_PDP_MAX_PASSWROD_LEN_V01 128
/**
    @}
  */

/** @addtogroup m2mb_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t result;
  /**<  0=Success, 1=Failure */

  uint16_t error;
  /**<   OEM defined error values */
}qmi_response_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2MB 
 cid */
  uint8_t cid;

  /* Mandatory */
  /*  pdp type 1 - IPv4, 2 - IPv6, 3 - IPv4 and IPv6 dual */
  uint8_t pdp_type;

  /* Mandatory */
  /*  apn */
  char apn[QMI_M2MB_PDP_MAX_APN_LEN_V01];

  /* Optional */
  /*  user name */
  uint8_t username_valid;  /**< Must be set to true if username is being passed */
  char username[QMI_M2MB_PDP_MAX_USERNAME_LEN_V01];

  /* Optional */
  /*  password */
  uint8_t password_valid;  /**< Must be set to true if password is being passed */
  char password[QMI_M2MB_PDP_MAX_PASSWROD_LEN_V01];

  /* Optional */
  /*  CLAT enabled */
  uint8_t clat_enabled_valid;  /**< Must be set to true if clat_enabled is being passed */
  uint8_t clat_enabled;
}m2mb_pdp_act_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}m2mb_pdp_act_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2MB
 cid */
  uint8_t cid;
}m2mb_pdp_deact_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}m2mb_pdp_deact_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}m2mb_atp_prof_reset_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2mb_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}m2mb_atp_prof_reset_resp_msg_v01;  /* Message */
/**
    @}
  */

/* Conditional compilation tags for message removal */ 
//#define REMOVE_QMI_M2MB_V01 

/*Service Message Definition*/
/** @addtogroup m2mb_qmi_msg_ids
    @{
  */
#define QMI_M2MB_PDP_ACT_REQ_V01 0x0000
#define QMI_M2MB_PDP_ACT_RESP_V01 0x0000
#define QMI_M2MB_PDP_DEACT_REQ_V01 0x0001
#define QMI_M2MB_PDP_DEACT_RESP_V01 0x0001
#define QMI_M2MB_ATP_PROF_RESET_REQ_V01 0x0002
#define QMI_M2MB_ATP_PROF_RESET_RESP_V01 0x0002
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor 
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro m2mb_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type m2mb_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );
 
/** This macro should be used to get the service object */ 
#define m2mb_get_service_object_v01( ) \
          m2mb_get_service_object_internal_v01( \
            M2MB_V01_IDL_MAJOR_VERS, M2MB_V01_IDL_MINOR_VERS, \
            M2MB_V01_IDL_TOOL_VERS )
/** 
    @} 
  */


#ifdef __cplusplus
}
#endif
#endif

