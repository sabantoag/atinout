#ifndef UART_SERVICE_01_H
#define UART_SERVICE_01_H
/**
  @file uart_service_v01.h

  @brief This is the public header file which defines the uart service Data structures.

  This header file defines the types and structures that were defined in
  uart. It contains the constant values defined, enums, structures,
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
  Copyright (c) 2015-2017 by Telit Wireless Solutions.
All Rights Reserved.


  
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.14.9 
   It was generated on: Thu Jan  2 2020 (Spin 0)
   From IDL File: uart_service_v01.idl */

/** @defgroup uart_qmi_consts Constant values defined in the IDL */
/** @defgroup uart_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup uart_qmi_enums Enumerated types used in QMI messages */
/** @defgroup uart_qmi_messages Structures sent as QMI messages */
/** @defgroup uart_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup uart_qmi_accessor Accessor for QMI service object */
/** @defgroup uart_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"
#include "common_v01.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup uart_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define UART_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define UART_V01_IDL_MINOR_VERS 0x01
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define UART_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define UART_V01_MAX_MESSAGE_ID 0x0005
/**
    @}
  */


/** @addtogroup uart_qmi_consts
    @{
  */
#define QMI_UART_BAUD_RATE_MAX_V01 10
/**
    @}
  */

/** @addtogroup uart_qmi_enums
    @{
  */
typedef enum {
  UART_FCTL_MODE_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  UART_FCTL_NONE_V01 = 0x00, 
  UART_FCTL_XONXOFF_V01 = 0x01, 
  UART_FCTL_RTSCTS_V01 = 0x02, 
  UART_FCTL_MODE_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}uart_fctl_mode_enum_v01;
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Request Message; This function allow the user to on/off main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  UART  */
  uint8_t op_mode;
  /**<   This field is used to control main UART power on/off. 
     - 1 -- Request main UART power on \n
     - 0 -- Request main UART power off
  */

  /* Optional */
  uint8_t enable_rts_event_valid;  /**< Must be set to true if enable_rts_event is being passed */
  uint8_t enable_rts_event;
  /**<   This field is used to enable/disable the rts event of main UART. 
     - 1 -- Enable rts event \n
     - 0 -- Disable rts event
    */
}uart_pwr_on_off_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Response Message; This function allow the user to on/off main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.     */
}uart_pwr_on_off_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Request Message; This function allow the user to set baud rate on UART port. 
  */
typedef struct {

  /* Optional */
  /*  UART  */
  uint8_t main_uart_baudrate_valid;  /**< Must be set to true if main_uart_baudrate is being passed */
  char main_uart_baudrate[QMI_UART_BAUD_RATE_MAX_V01];
  /**<   This field is used to set baud rate of main UART.
		*/

  /* Optional */
  uint8_t aux_uart_baudrate_valid;  /**< Must be set to true if aux_uart_baudrate is being passed */
  char aux_uart_baudrate[QMI_UART_BAUD_RATE_MAX_V01];
  /**<   This field is used to set baud rate of aux UART.
		*/
}uart_baud_rate_set_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Response Message; This function allow the user to set baud rate on UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.     */
}uart_baud_rate_set_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Request Message; This function allow the user to set flow control on main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  UART  */
  uart_fctl_mode_enum_v01 fctl_mode;
  /**<   This field is used to set flow control of main UART.
		*/
}uart_fctl_set_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Response Message; This function allow the user to set flow control on main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.     */
}uart_fctl_set_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Request Message; This function allow the user to get the status of CTS pin on main UART port. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}uart_get_cts_pin_status_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Response Message; This function allow the user to get the status of CTS pin on main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.     */

  /* Mandatory */
  uint8_t status;
  /**<   Values: \n
        - 0 -- CTS pin is low state \n
        - 1 -- CTS pin is high state
   */
}uart_get_cts_pin_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Request Message; This function allow the user to get the status of RTS pin on main UART port. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}uart_get_rts_pin_status_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Response Message; This function allow the user to get the status of RTS pin on main UART port. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.     */

  /* Mandatory */
  uint8_t status;
  /**<   Values: \n
        - 0 -- RTS pin is low state \n
        - 1 -- RTS pin is high state
   */
}uart_get_rts_pin_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup uart_qmi_messages
    @{
  */
/** Indication Message; Indicates that the RTS pin staus if RTS pin status is changed.  */
typedef struct {

  /* Mandatory */
  /*  RTS Pin Status */
  uint8_t rts_status;
  /**<   Values: \n
        - 0 -- RTS pin is low state \n
        - 1 -- RTS pin is high state
   */
}uart_rts_pin_status_ind_msg_v01;  /* Message */
/**
    @}
  */

/* Conditional compilation tags for message removal */ 
//#define REMOVE_QMI_UART_BAUD_RATE_SET_V01 
//#define REMOVE_QMI_UART_FCTL_SET_V01 
//#define REMOVE_QMI_UART_GET_CTS_PIN_STATUS_V01 
//#define REMOVE_QMI_UART_GET_RTS_PIN_STATUS_V01 
//#define REMOVE_QMI_UART_PWR_ON_OFF_V01 
//#define REMOVE_QMI_UART_RTS_PIN_STATUS_IND_V01 

/*Service Message Definition*/
/** @addtogroup uart_qmi_msg_ids
    @{
  */
#define QMI_UART_PWR_ON_OFF_REQ_V01 0x0000
#define QMI_UART_PWR_ON_OFF_RESP_V01 0x0000
#define QMI_UART_BAUD_RATE_SET_REQ_V01 0x0001
#define QMI_UART_BAUD_RATE_SET_RESP_V01 0x0001
#define QMI_UART_FCTL_SET_REQ_V01 0x0002
#define QMI_UART_FCTL_SET_RESP_V01 0x0002
#define QMI_UART_GET_CTS_PIN_STATUS_REQ_V01 0x0003
#define QMI_UART_GET_CTS_PIN_STATUS_RESP_V01 0x0003
#define QMI_UART_GET_RTS_PIN_STATUS_REQ_V01 0x0004
#define QMI_UART_GET_RTS_PIN_STATUS_RESP_V01 0x0004
#define QMI_UART_RTS_PIN_STATUS_IND_V01 0x0005
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro uart_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type uart_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );

/** This macro should be used to get the service object */
#define uart_get_service_object_v01( ) \
          uart_get_service_object_internal_v01( \
            UART_V01_IDL_MAJOR_VERS, UART_V01_IDL_MINOR_VERS, \
            UART_V01_IDL_TOOL_VERS )
/**
    @}
  */


#ifdef __cplusplus
}
#endif
#endif

