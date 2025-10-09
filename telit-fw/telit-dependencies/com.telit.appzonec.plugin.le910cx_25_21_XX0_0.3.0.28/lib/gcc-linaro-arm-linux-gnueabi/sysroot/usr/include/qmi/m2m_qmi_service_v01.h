#ifndef M2M_QMI_SERVICE_01_H
#define M2M_QMI_SERVICE_01_H
/**
  @file m2m_qmi_service_v01.h

  @brief This is the public header file which defines the m2m_qmi service Data structures.

  This header file defines the types and structures that were defined in
  m2m_qmi. It contains the constant values defined, enums, structures,
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
   It was generated on: Thu Apr 15 2021 (Spin 0)
   From IDL File: m2m_qmi_service_v01.idl */

/** @defgroup m2m_qmi_qmi_consts Constant values defined in the IDL */
/** @defgroup m2m_qmi_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup m2m_qmi_qmi_enums Enumerated types used in QMI messages */
/** @defgroup m2m_qmi_qmi_messages Structures sent as QMI messages */
/** @defgroup m2m_qmi_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup m2m_qmi_qmi_accessor Accessor for QMI service object */
/** @defgroup m2m_qmi_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"
#include "common_v01.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup m2m_qmi_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define M2M_QMI_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define M2M_QMI_V01_IDL_MINOR_VERS 0x01
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define M2M_QMI_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define M2M_QMI_V01_MAX_MESSAGE_ID 0x0036
/**
    @}
  */


/** @addtogroup m2m_qmi_qmi_consts 
    @{ 
  */

/**  Maximum data size. ~60k */
#define MAX_NV_BUFFER_SIZE_V01 62000

/**   Maximum length of path  */
#define PATH_SIZE_V01 250

/**  I2C max buffer size  */
#define I2C_MAX_BUF_SIZE_V01 254

/**  PDP MAX  */
#define MAX_PROFILES_V01 24

/**  Maximum SW version info size  */
#define MAX_SW_VER_INFO_SIZE_V01 128

/**  Maximum Abortable AT command info size  */
#define MAX_AT_ABORT_CMD_LIST_SIZE_V01 256

/**  Maximum LWM2M AT command parameter size  */
#define MAX_LWM2M_CMD_PARMM_SIZE_SIZE_V01 512

/**  Maximum CCLK buffer size  */
#define MAX_CCLK_SIZE_V01 32
#define QMI_M2M_SWRDY_MASK_NONE_V01 0x00
#define QMI_M2M_SWRDY_MASK_ATFWD1_V01 0x01
#define QMI_M2M_SWRDY_MASK_ATFWD2_V01 0x02
#define QMI_M2M_SWRDY_MASK_M2MATP_V01 0x04
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_CLK_SRC_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  DSAT_M2M_TIME_NITZ_ONLY_V01 = 0, 
  DSAT_M2M_TIME_GNSS_ONLY_V01 = 1, 
  DSAT_M2M_TIME_GNSS_PRIORITY_V01 = 2, 
  DSAT_M2M_TIME_NITZ_PRIORITY_V01 = 3, 
  DSAT_M2M_TIME_DISABLE_V01 = 4, 
  QMI_CLK_SRC_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_clk_src_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_ABORT_REQ_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_ABORT_REQ_ENABLE_V01 = 0, 
  QMI_ABORT_REQ_DISABLE_V01 = 1, 
  QMI_ABORT_REQ_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_abort_req_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_CURR_CLK_SRC_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_CLK_SRC_TIME_INVALID_V01 = 0, 
  QMI_CLK_SRC_NITZ_TIME_V01 = 1, 
  QMI_CLK_SRC_GNSS_TIME_V01 = 2, 
  QMI_CLK_SRC_MANUAL_TIME_V01 = 3, 
  QMI_CURR_CLK_SRC_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_curr_clk_src_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_ECALL_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  DSAT_M2M_ECALL_STARTED_V01 = 0, 
  DSAT_M2M_ECALL_MSD_SENDED_V01 = 1, 
  DSAT_M2M_ECALL_ALL_OK_V01 = 2, 
  DSAT_M2M_ECALL_END_NOT_ACK_V01 = 3, 
  DSAT_M2M_ECALL_LOST_OF_SYNC_V01 = 16, 
  QMI_ECALL_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_ecall_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_MASK_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_REG_IND_NULL_V01 = 0x00000000, 
  QMI_M2M_REG_IND_ECALL_V01 = 0x00000002, 
  QMI_M2M_REG_IND_CLKSRC_V01 = 0x00000004, 
  QMI_M2M_REG_IND_JAMINGGNSS_V01 = 0x00000008, 
  QMI_M2M_REG_IND_JAMINGENH2_V01 = 0x00000010, 
  QMI_M2M_REG_IND_AT_V01 = 0x00000020, 
  QMI_M2M_REG_IND_DG_FASTSHDN_V01 = 0x00000040, 
  QMI_M2M_REG_IND_M2MB_APP_MANAGE_V01 = 0x00000080, 
  QMI_M2M_REG_IND_LWM2M_CMD_ATFWD_V01 = 0x00000100, 
  QMI_M2M_REG_IND_UART_CTL_V01 = 0x00000200, 
  QMI_M2M_REG_IND_DISC_ALL_PDP_V01 = 0x00000400, 
  QMI_MASK_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_mask_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_JAMEDDETECT_MODE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_JAMED_DETECT_REPORT_DISABLE_V01 = 0, 
  QMI_JAMED_DETECT_REPORT_GPIO_ENABLE_V01 = 1, 
  QMI_JAMED_DETECT_REPORT_URC_ENABLE_V01 = 2, 
  QMI_JAMED_DETECT_REPORT_GPIO_URC_ENABLE_V01 = 3, 
  QMI_JAMED_DETECT_REPORT_URC_PERIODIC_ENABLE_V01 = 4, 
  QMI_JAMED_DETECT_REPORT_GPIO_URC_PERIODIC_ENABLE_V01 = 5, 
  QMI_JAMED_DETECT_REPORT_URC_DETAILED_ENABLE_V01 = 6, 
  QMI_JAMEDDETECT_MODE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_jameddetect_mode_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_JAMEDDETECT_STATE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_JAMED_DETECT_STATE_OPERATIVE_V01 = 0, 
  QMI_JAMED_DETECT_STATE_JAMED_V01 = 1, 
  QMI_JAMED_DETECT_STATE_JAMING_SUSPICION_V01 = 2, 
  QMI_JAMED_DETECT_STATE_UNKNOWN_V01 = 255, 
  QMI_JAMEDDETECT_STATE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_jameddetect_state_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_RING_INDICATORE_MODE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_RING_INDICATORE_DISABLE_V01 = 0, 
  QMI_RING_INDICATORE_VOICE_ENABLE_V01 = 1, 
  QMI_RING_INDICATORE_SMS_ENABLE_V01 = 2, 
  QMI_RING_INDICATORE_MODE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_ring_indicatore_mode_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_AT_PS_STATE_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_AT_PS_IDLE_V01 = 0, 
  QMI_M2M_AT_PS_RUNNING_V01 = 1, 
  QMI_M2M_AT_PS_CMD_MODE_V01 = 2, 
  QMI_M2M_AT_PS_ONLINE_MODE_V01 = 3, 
  QMI_M2M_AT_PS_PROMPT_OPEN_V01 = 4, 
  QMI_M2M_AT_PS_PROMPT_CLOSED_V01 = 5, 
  QMI_M2M_AT_PS_CMUX_ACTIVE_V01 = 6, 
  QMI_M2M_AT_PS_CMUX_CLOSED_V01 = 7, 
  QMI_AT_PS_STATE_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_at_ps_state_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_AT_PS_ACTION_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_AT_PS_GET_STATE_V01 = 0, 
  QMI_M2M_AT_PS_DISABLE_OK_V01 = 1, 
  QMI_AT_PS_ACTION_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_at_ps_action_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_DG_FASTSHDN_IND_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_DG_FASTSHDN_DEACTIVE_V01 = 0, 
  QMI_M2M_DG_FASTSHDN_ACTIVE_V01 = 1, 
  QMI_DG_FASTSHDN_IND_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_dg_fastshdn_ind_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t result;
  /**<  0=Success, 1=Failure */

  uint16_t error;
  /**<   OEM defined error values */
}qmi_m2m_response_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t retry_period;

  /*  0..255 In seconds */
  uint16_t retry_interval;
}qmi_smsretry_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_aggregates
    @{
  */
typedef struct {

  uint8_t tdsen_state;
}qmi_tdsen_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_aggregates
    @{
  */
typedef struct {

  qmi_jameddetect_mode_v01 detect_mode;

  qmi_jameddetect_state_v01 detect_status;
}qmi_jameddetect_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_CONTROL_M2MB_APP_ACTION_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  M2MB_MAIN_APP_EXIT_V01 = 0, 
  M2MB_LWM2M_AGENT_START_V01 = 1, 
  QMI_CONTROL_M2MB_APP_ACTION_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_control_m2mb_app_action_type_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_M2M_TEMPORARY_LWM2M_CMDTYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_TEMP_CMDTYP_SET_V01 = 0, 
  QMI_M2M_TEMP_CMDTYP_READ_V01 = 1, 
  QMI_M2M_TEMP_CMDTYP_TEST_V01 = 2, 
  QMI_M2M_TEMP_CMDTYP_EXEC_V01 = 3, 
  QMI_M2M_TEMP_CMDTYP_NOPARAMS_V01 = 4, 
  M2MB_NUM_ATP_CMDTYP_V01 = 5, 
  QMI_M2M_TEMPORARY_LWM2M_CMDTYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_m2m_temporary_lwm2m_cmdtype_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_enums
    @{
  */
typedef enum {
  QMI_M2M_FWAUTOSIM_MODE_ENUM_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_M2M_FWAUTOSIM_DISABLE_V01 = 0x00, /**<  FWAUTOSIM_DISABLE\n   */
  QMI_M2M_FWAUTOSIM_ENABLE_V01 = 0x01, /**<  FWAUTOSIM_ENABLE\n */
  QMI_M2M_FWAUTOSIM_ONESHOT_V01 = 0x02, /**<  FWAUTOSIM_ONESHOT\n */
  QMI_M2M_FWAUTOSIM_MODE_ENUM_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_m2m_fwautosim_mode_enum_v01;
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint32_t reg_mask;
}qmi_m2m_reg_ind_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t res;
}qmi_m2m_reg_ind_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_clk_src_type_v01 clk_src;
}qmi_m2m_clk_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t test;
}qmi_m2m_clk_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_clk_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_clk_src_type_v01 clk_src;
  /**<   Clock SRC request. */

  /* Mandatory */
  qmi_curr_clk_src_type_v01 current_clk_src;
  /**<  Current Clock SRC request. */
}qmi_m2m_get_clk_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  qmi_curr_clk_src_type_v01 current_clk_src_ind;
  /**<  Current Clock SRC indication. */
}qmi_m2m_clk_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_ecall_type_v01 ecall_data;
}qmi_m2m_ecall_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_abort_req_type_v01 abort_req;
}qmi_m2m_sms_retry_abort_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_sms_retry_abort_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_smsretry_type_v01 smsretry;
}qmi_m2m_set_smsretry_req_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_smsretry_req_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_smsretry_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_smsretry_type_v01 smsretry;
}qmi_m2m_get_smsretry_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint32_t chunk_size;

  /* Mandatory */
  char value[MAX_NV_BUFFER_SIZE_V01];

  /* Optional */
  uint8_t item_valid;  /**< Must be set to true if item is being passed */
  uint32_t item;
  /**<  NV item request.  */

  /* Optional */
  uint8_t file_name_valid;  /**< Must be set to true if file_name is being passed */
  char file_name[PATH_SIZE_V01];
  /**<  File name request. */
}qmi_m2m_write_nv_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  /*  Result Code  */
  uint32_t chunk_size;
}qmi_m2m_write_nv_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint32_t chunk_size;

  /* Optional */
  uint8_t item_valid;  /**< Must be set to true if item is being passed */
  uint32_t item;
  /**<   NV item request.   */

  /* Optional */
  uint8_t file_name_valid;  /**< Must be set to true if file_name is being passed */
  char file_name[PATH_SIZE_V01];
  /**<   File name request.  */
}qmi_m2m_read_nv_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  /*  Result Code  */
  uint32_t chunk_size;

  /* Mandatory */
  char value[MAX_NV_BUFFER_SIZE_V01];
  /**<   value of nv/efs.*/
}qmi_m2m_read_nv_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_tdsen_type_v01 tdsen;
}qmi_m2m_set_tdsen_req_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_tdsen_req_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_tdsen_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_tdsen_type_v01 tdsen;
}qmi_m2m_get_tdsen_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_jameddetect_mode_v01 detectmode;
}qmi_m2m_set_jamminggnss_detect_req_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_jamminggnss_detect_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_jamminggnss_detect_req_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_jameddetect_type_v01 detecttype;
}qmi_m2m_get_jamminggnss_detect_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  qmi_jameddetect_state_v01 detect_status;
  /**<  Current Jamming gnss detect indication. */
}qmi_m2m_jamminggnss_detect_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_jameddetect_mode_v01 detectmode;

  /* Optional */
  uint8_t sat2g_valid;  /**< Must be set to true if sat2g is being passed */
  uint8_t sat2g;

  /* Optional */
  uint8_t sat3g_valid;  /**< Must be set to true if sat3g is being passed */
  uint8_t sat3g;

  /* Optional */
  uint8_t carrnum_2g_valid;  /**< Must be set to true if carrnum_2g is being passed */
  uint8_t carrnum_2g;

  /* Optional */
  uint8_t p_rxlevt_2g_valid;  /**< Must be set to true if p_rxlevt_2g is being passed */
  uint8_t p_rxlevt_2g;

  /* Optional */
  uint8_t p_ecn0_t3g_valid;  /**< Must be set to true if p_ecn0_t3g is being passed */
  uint8_t p_ecn0_t3g;

  /* Optional */
  uint8_t p_rscp_t3g_valid;  /**< Must be set to true if p_rscp_t3g is being passed */
  uint8_t p_rscp_t3g;

  /* Optional */
  uint8_t carrnum_3g_valid;  /**< Must be set to true if carrnum_3g is being passed */
  uint8_t carrnum_3g;

  /* Optional */
  uint8_t p_rsrp_4g_valid;  /**< Must be set to true if p_rsrp_4g is being passed */
  uint8_t p_rsrp_4g;

  /* Optional */
  uint8_t p_rsrq_4g_valid;  /**< Must be set to true if p_rsrq_4g is being passed */
  uint8_t p_rsrq_4g;
}qmi_m2m_set_jammingenh2_detect_req_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_jammingenh2_detect_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_jammingenh2_detect_req_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_jameddetect_type_v01 detecttype;

  /* Optional */
  uint8_t sat2g_valid;  /**< Must be set to true if sat2g is being passed */
  uint8_t sat2g;

  /* Optional */
  uint8_t sat3g_valid;  /**< Must be set to true if sat3g is being passed */
  uint8_t sat3g;

  /* Optional */
  uint8_t carrnum_2g_valid;  /**< Must be set to true if carrnum_2g is being passed */
  uint8_t carrnum_2g;

  /* Optional */
  uint8_t p_rxlevt_2g_valid;  /**< Must be set to true if p_rxlevt_2g is being passed */
  uint8_t p_rxlevt_2g;

  /* Optional */
  uint8_t p_ecn0_t3g_valid;  /**< Must be set to true if p_ecn0_t3g is being passed */
  uint8_t p_ecn0_t3g;

  /* Optional */
  uint8_t p_rscp_t3g_valid;  /**< Must be set to true if p_rscp_t3g is being passed */
  uint8_t p_rscp_t3g;

  /* Optional */
  uint8_t carrnum_3g_valid;  /**< Must be set to true if carrnum_3g is being passed */
  uint8_t carrnum_3g;

  /* Optional */
  uint8_t p_rsrp_4g_valid;  /**< Must be set to true if p_rsrp_4g is being passed */
  uint8_t p_rsrp_4g;

  /* Optional */
  uint8_t p_rsrq_4g_valid;  /**< Must be set to true if p_rsrq_4g is being passed */
  uint8_t p_rsrq_4g;
}qmi_m2m_get_jammingenh2_detect_resp_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  qmi_jameddetect_state_v01 detect_status;
  /**<  Current Jamming enh2 detect indication indication. */
}qmi_m2m_jammingenh2_detect_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_ring_indicator_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  qmi_ring_indicatore_mode_v01 RI_mode;
  /**<   Ring Indicator mode*/
}qmi_m2m_get_ring_indicator_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  qmi_ring_indicatore_mode_v01 RI_mode;
  /**<   Ring Indicator mode*/
}qmi_m2m_set_ring_indicator_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_ring_indicator_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Optional */
  /*  M2M  */
  uint8_t item_valid;  /**< Must be set to true if item is being passed */
  uint32_t item;
  /**<  NV item request.  */

  /* Optional */
  uint8_t file_name_valid;  /**< Must be set to true if file_name is being passed */
  char file_name[PATH_SIZE_V01];
  /**<  File name request. */
}qmi_m2m_get_length_nv_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t length;
  /**<   lenght of nv item 	*/
}qmi_m2m_get_length_nv_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t pin;
  /**<   ADC pin index */

  /* Mandatory */
  uint8_t mode;
  /**<   ADC operation mode. only support read mode 2 */

  /* Mandatory */
  uint8_t dir;
  /**<   ADC pin direction. only support input direction 0 */
}qmi_m2m_get_adc_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t value;
  /**<   ADC value. unit is mV 	*/
}qmi_m2m_get_adc_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t pin;
  /**<   GPIO pin index */

  /* Mandatory */
  uint8_t mode;
  /**<   GPIO pin operation mode. */

  /* Mandatory */
  uint8_t dir;
  /**<   GPIO pin direction.  */

  /* Mandatory */
  uint8_t save;
  /**<   GPIO pin configuration save */
}qmi_m2m_set_gpio_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; The basic m2m_qmi message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t state;
  /**<   pin state if GPIO pin state requested 	*/
}qmi_m2m_set_gpio_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; This command used to get the rmnet status information. */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_wds_get_rmnet_status_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; This command used to get the rmnet status information. */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  /*  rmnet_status */
  int8_t rmnet_status;
  /**<   rmnet status information.. The value range is 0 or 1.
 */
}qmi_m2m_wds_get_rmnet_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  int32_t port;
  /**<   PORT ID */

  /* Mandatory */
  qmi_at_ps_action_type_v01 action;
  /**<   Action */
}qmi_m2m_at_ps_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  int32_t port;
  /**<   PORT ID */

  /* Mandatory */
  qmi_at_ps_state_type_v01 status;
  /**<   Status */

  /* Mandatory */
  uint8_t at_cmee_val;
  /**<   CMEE value */

  /* Mandatory */
  uint8_t at_s3_val;
  /**<   ATS3 value */

  /* Mandatory */
  uint8_t at_s4_val;
  /**<   ATS4 value */

  /* Mandatory */
  uint8_t at_s5_val;
  /**<   ATS5 value */

  /* Mandatory */
  uint8_t at_ifc_val[2];
  /**<   AT+IFC value */

  /* Mandatory */
  uint8_t at_cflo_val;
  /**<   AT#CFLO value */

  /* Mandatory */
  uint32_t at_ipr_val[2];
  /**<   AT+IPR value */

  /* Mandatory */
  uint8_t at_v_val;
  /**<   ATV value */
}qmi_m2m_at_ps_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message;  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  int32_t port;
  /**<   PORT ID */

  /* Mandatory */
  qmi_at_ps_state_type_v01 status;
  /**<   Status */

  /* Mandatory */
  int32_t cmd_res;
  /**<   AT command result if status is QMI_M2M_AT_PS_IDLE */
}qmi_m2m_at_ps_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  int32_t port;
  /**<   PORT ID */

  /* Mandatory */
  int32_t ate_val;
  /**<   Action */
}qmi_m2m_at_set_echo_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_at_set_echo_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint32_t op_mode;
  /**<   OP mode value */
}qmi_m2m_set_opm_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_opm_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint32_t swrdy_en;
  /**<   swrdy_en value */
}qmi_m2m_set_swrdy_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_swrdy_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t sda_pin;
  /**<   SDA pin */

  /* Mandatory */
  uint8_t scl_pin;
  /**<   SCL pin */

  /* Mandatory */
  uint16_t device_id;
  /**<   device id. 10 bit address. up to 1024 */

  /* Mandatory */
  uint8_t register_id;
  /**<   register id */

  /* Mandatory */
  uint8_t wr_len;
  /**<   write data len */

  /* Mandatory */
  uint8_t wr_data[I2C_MAX_BUF_SIZE_V01];
  /**<   write data buffer */
}qmi_m2m_i2c_wr_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t wr_len;
  /**<   written data len 	*/
}qmi_m2m_i2c_wr_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t sda_pin;
  /**<   SDA pin */

  /* Mandatory */
  uint8_t scl_pin;
  /**<   SCL pin */

  /* Mandatory */
  uint16_t device_id;
  /**<   device id. 10 bit address. up to 1024 */

  /* Mandatory */
  uint8_t register_id;
  /**<   register id */

  /* Mandatory */
  uint8_t rd_len;
  /**<   read len */
}qmi_m2m_i2c_rd_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t rd_len;
  /**<   read data len */

  /* Mandatory */
  uint8_t rd_data[I2C_MAX_BUF_SIZE_V01];
  /**<   read data buffer */
}qmi_m2m_i2c_rd_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_dg_fastshdn_ind_type_v01 action;
}qmi_m2m_dg_fastshdn_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t ico_id;
  /**<   ico id */
}qmi_m2m_ico_read_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t ico_len;
  /**<   read ico length */

  /* Mandatory */
  char ico_data[50 + 1];
  /**<   read data buffer */
}qmi_m2m_ico_read_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_aggregates
    @{
  */
typedef struct {

  uint8_t valid_flag;

  uint32_t tx;

  uint32_t rx;
}data_counts_t_v01;  /* Type */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t oper_mode;
  /**<   operation mode */
}qmi_m2m_get_gdatavol_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  data_counts_t_v01 datacounts[MAX_PROFILES_V01];
  /**<   read data buffer   */
}qmi_m2m_get_gdatavol_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_pdp_enabling_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  uint8_t suporrted_max_cid;

  /* Mandatory */
  uint8_t pdp_status[MAX_PROFILES_V01];
}qmi_m2m_get_pdp_enabling_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_pdp_default_cid_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  uint8_t default_cid;
}qmi_m2m_get_pdp_default_cid_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message;  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  qmi_control_m2mb_app_action_type_v01 action;
}qmi_m2m_control_m2mb_application_status_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_hw_rev_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  char hwrev[15];
}qmi_m2m_get_hw_rev_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t cable_indicaton;
}qmi_m2m_eth_cable_noti_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_eth_cable_noti_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_sw_ver_info_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  char sw_ver_info[MAX_SW_VER_INFO_SIZE_V01];
}qmi_m2m_sw_ver_info_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_at_abort_cmd_list_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  char at_abort_cmd_list[MAX_AT_ABORT_CMD_LIST_SIZE_V01];
}qmi_m2m_at_abort_cmd_list_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message;  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  char cmd_name[30 + 1];

  /* Mandatory */
  qmi_m2m_temporary_lwm2m_cmdtype_v01 cmdtype;

  /* Optional */
  uint8_t parameters_valid;  /**< Must be set to true if parameters is being passed */
  char parameters[MAX_LWM2M_CMD_PARMM_SIZE_SIZE_V01 + 1];
}qmi_m2m_temporary_lwm2m_cmd_fwd_to_m2mmain_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  char cmd_name[30 + 1];

  /* Mandatory */
  qmi_m2m_temporary_lwm2m_cmdtype_v01 cmdtype;

  /* Mandatory */
  uint8_t result;

  /* Mandatory */
  uint8_t error_code;

  /* Mandatory */
  char at_response[MAX_LWM2M_CMD_PARMM_SIZE_SIZE_V01 + 1];
}qmi_m2m_temporary_lwm2m_cmd_fwd_resp_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_temporary_lwm2m_cmd_fwd_resp_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_user_data_call_status_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  /*  user_data_call_status */
  int8_t user_data_call_status;
  /**<   user data call status information.. The value range is 0 or 1.
 */
}qmi_m2m_get_user_data_call_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M */
  int32_t port;
  /**<   CMUX PORT ID */

  /* Mandatory */
  int32_t app_cmux_mode;
  /**<   CMUX MODE 0 - disabled, 1 - enabled */
}qmi_m2m_set_app_cmux_mode_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_set_app_cmux_mode_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Optional */
  /*  M2M */
  uint8_t dsr_valid;  /**< Must be set to true if dsr is being passed */
  uint8_t dsr;
  /**<   DSR 0 - Off, 1 - On */

  /* Optional */
  uint8_t dcd_valid;  /**< Must be set to true if dcd is being passed */
  uint8_t dcd;
  /**<   DCD 0 - Off, 1 - On */

  /* Optional */
  uint8_t ri_valid;  /**< Must be set to true if ri is being passed */
  uint8_t ri;
  /**<   RI 0 - Off, 1 - On */
}qmi_m2m_set_uart_ctl_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_set_uart_ctl_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_uart_ctl_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  uint8_t dtr;
  /**<   DTR 0 - Off, 1 - On */
}qmi_m2m_get_uart_ctl_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message;  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  uint8_t dtr;
  /**<   DTR Status 0 - Off, 1 - On */
}qmi_m2m_uart_ctl_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M  */
  uint8_t sda_pin;
  /**<   SDA pin */

  /* Mandatory */
  uint8_t scl_pin;
  /**<   SCL pin */

  /* Mandatory */
  uint16_t device_id;
  /**<   device id. 10 bit address. up to 1024 */

  /* Mandatory */
  uint8_t register_id;
  /**<   register id */

  /* Mandatory */
  uint8_t wr_len;
  /**<   write data len */

  /* Mandatory */
  uint8_t wr_data[I2C_MAX_BUF_SIZE_V01];
  /**<   write data buffer */

  /* Mandatory */
  uint8_t rd_len;
  /**<   read len */
}qmi_m2m_i2c_cf_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t wr_len;
  /**<   written data len */

  /* Mandatory */
  uint8_t rd_len;
  /**<   read data len */

  /* Mandatory */
  uint8_t rd_data[I2C_MAX_BUF_SIZE_V01];
  /**<   read data buffer */
}qmi_m2m_i2c_cf_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; This command is the functionality for automatic carrier switch by SIM. */
typedef struct {

  /* Mandatory */
  /*  autosim_mode */
  qmi_m2m_fwautosim_mode_enum_v01 autosim_mode;
  /**<   number of autosim_mode which want to activate.(available range : 0 to 2)*/
}qmi_m2m_set_fwautosim_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; This command is the functionality for automatic carrier switch by SIM. */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_set_fwautosim_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message; This command is the functionality for automatic carrier switch by SIM. */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_fwautosim_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message; This command is the functionality for automatic carrier switch by SIM. */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  /*  autosim_mode */
  qmi_m2m_fwautosim_mode_enum_v01 autosim_mode;
  /**<   number of autosim_mode which want to activate.(available range : 0 to 2)*/
}qmi_m2m_get_fwautosim_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_disc_all_pdp_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_disc_all_pdp_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Indication Message;  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_disc_all_pdp_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M */
  int32_t ssl_id;
  /**<   ATSSL SSL ID */
}qmi_m2m_atssl_get_sec_cfg_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  int32_t tls_prot_ver;
  /**<   tls protocol version */

  /* Mandatory */
  int32_t tls_chiper_suite;
  /**<   tls chiper suite */

  /* Mandatory */
  int32_t tls_auth_mode;
  /**<   tls authentification mode */

  /* Mandatory */
  int32_t tls_cert_format;
  /**<   tls certification format */
}qmi_m2m_atssl_get_sec_cfg_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M */
  int32_t ssl_id;
  /**<   ATSSL SSL ID */

  /* Mandatory */
  int32_t ssl_cfg_enable;
  /**<   ATSSL SSL CFG ENABLE 0 - disabled, 1 - enable */
}qmi_m2m_atssl_set_sec_cfg_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_atssl_set_sec_cfg_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_set_apn_preservation_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  qmi_response_type_v01 resp;
  /**<   Standard response type. */
}qmi_m2m_set_apn_preservation_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M */
  uint8_t sec;

  /* Mandatory */
  uint8_t min;

  /* Mandatory */
  uint8_t hour;

  /* Mandatory */
  uint8_t day;

  /* Mandatory */
  uint8_t mon;

  /* Mandatory */
  uint8_t year;

  /* Mandatory */
  int16_t tz;

  /* Mandatory */
  uint8_t dlst;
}qmi_m2m_set_cclk_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_set_cclk_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}qmi_m2m_get_cclk_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/

  /* Mandatory */
  char cclk_time[MAX_CCLK_SIZE_V01 + 1];
}qmi_m2m_get_cclk_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Request Message;  */
typedef struct {

  /* Mandatory */
  /*  M2M */
  uint8_t oprt_mode;

  /* Mandatory */
  uint8_t index;

  /* Mandatory */
  uint8_t type;

  /* Mandatory */
  uint8_t sec;

  /* Mandatory */
  uint8_t min;

  /* Mandatory */
  uint8_t hour;

  /* Mandatory */
  uint8_t day;

  /* Mandatory */
  uint8_t mon;

  /* Mandatory */
  uint8_t year;

  /* Mandatory */
  int16_t tz;

  /* Mandatory */
  uint8_t dlst;
}qmi_m2m_set_alarm_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup m2m_qmi_qmi_messages
    @{
  */
/** Response Message;  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}qmi_m2m_set_alarm_resp_msg_v01;  /* Message */
/**
    @}
  */

/* Conditional compilation tags for message removal */ 
//#define REMOVE_QMI_M2M_V01 

/*Service Message Definition*/
/** @addtogroup m2m_qmi_qmi_msg_ids
    @{
  */
#define QMI_M2M_REG_INDICATION_REQ_V01 0x0000
#define QMI_M2M_REG_INDICATION_RESP_V01 0x0000
#define QMI_M2M_CLK_SRC_REQ_V01 0x0001
#define QMI_M2M_CLK_SRC_RESP_V01 0x0001
#define QMI_M2M_ECALL_INDICATION_REG_V01 0x0002
#define QMI_M2M_GET_CLK_SRC_REQ_V01 0x0003
#define QMI_M2M_GET_CLK_SRC_RESP_V01 0x0003
#define QMI_M2M_CLK_SRC_IND_V01 0x0003
#define QMI_M2M_SMS_RETRY_ABORT_REQ_V01 0x0004
#define QMI_M2M_SMS_RETRY_ABORT_RESP_V01 0x0004
#define QMI_M2M_SET_SMSRETRY_REQ_V01 0x0005
#define QMI_M2M_SET_SMSRETRY_RESP_V01 0x0005
#define QMI_M2M_GET_SMSRETRY_REQ_V01 0x0006
#define QMI_M2M_GET_SMSRETRY_RESP_V01 0x0006
#define QMI_M2M_READ_NV_REQ_V01 0x0007
#define QMI_M2M_READ_NV_RESP_V01 0x0007
#define QMI_M2M_WRITE_NV_REQ_V01 0x0008
#define QMI_M2M_WRITE_NV_RESP_V01 0x0008
#define QMI_M2M_SET_TDSEN_REQ_V01 0x0009
#define QMI_M2M_SET_TDSEN_RESP_V01 0x0009
#define QMI_M2M_GET_TDSEN_REQ_V01 0x000A
#define QMI_M2M_GET_TDSEN_RESP_V01 0x000A
#define QMI_M2M_SET_JAMMINGGNSS_DETECT_REQ_V01 0x000B
#define QMI_M2M_SET_JAMMINGGNSS_DETECT_RESP_V01 0x000B
#define QMI_M2M_GET_JAMMINGGNSS_DETECT_REQ_V01 0x000C
#define QMI_M2M_GET_JAMMINGGNSS_DETECT_RESP_V01 0x000C
#define QMI_M2M_JAMMINGGNSS_DETECT_IND_V01 0x000C
#define QMI_M2M_SET_JAMMINGENH2_DETECT_REQ_V01 0x000D
#define QMI_M2M_SET_JAMMINGENH2_DETECT_RESP_V01 0x000D
#define QMI_M2M_GET_JAMMINGENH2_DETECT_REQ_V01 0x000E
#define QMI_M2M_GET_JAMMINGENH2_DETECT_RESP_V01 0x000E
#define QMI_M2M_JAMMINGENH2_DETECT_IND_V01 0x000E
#define QMI_M2M_GET_RING_INDICATOR_REQ_V01 0x000F
#define QMI_M2M_GET_RING_INDICATOR_RESP_V01 0x000F
#define QMI_M2M_SET_RING_INDICATOR_REQ_V01 0x0010
#define QMI_M2M_SET_RING_INDICATOR_RESP_V01 0x0010
#define QMI_M2M_GET_LENGTH_NV_REQ_V01 0x0011
#define QMI_M2M_GET_LENGTH_NV_RESP_V01 0x0011
#define QMI_M2M_GET_ADC_REQ_V01 0x0012
#define QMI_M2M_GET_ADC_RESP_V01 0x0012
#define QMI_M2M_SET_GPIO_REQ_V01 0x0013
#define QMI_M2M_SET_GPIO_RESP_V01 0x0013
#define QMI_M2M_WDS_GET_RMNET_STATUS_REQ_V01 0x0014
#define QMI_M2M_WDS_GET_RMNET_STATUS_RESP_V01 0x0014
#define QMI_M2M_AT_PS_REQ_V01 0x0015
#define QMI_M2M_AT_PS_RESP_V01 0x0015
#define QMI_M2M_AT_PS_IND_V01 0x0015
#define QMI_M2M_AT_SET_ECHO_REQ_V01 0x0016
#define QMI_M2M_AT_SET_ECHO_RESP_V01 0x0016
#define QMI_M2M_SET_OPM_REQ_V01 0x0017
#define QMI_M2M_SET_OPM_RESP_V01 0x0017
#define QMI_M2M_SET_SWRDY_REQ_V01 0x0018
#define QMI_M2M_SET_SWRDY_RESP_V01 0x0018
#define QMI_M2M_I2C_WR_REQ_V01 0x0019
#define QMI_M2M_I2C_WR_RESP_V01 0x0019
#define QMI_M2M_I2C_RD_REQ_V01 0x001A
#define QMI_M2M_I2C_RD_RESP_V01 0x001A
#define QMI_M2M_DG_FASTSHDN_IND_V01 0x001B
#define QMI_M2M_ICO_READ_REQ_V01 0x001C
#define QMI_M2M_ICO_READ_RESP_V01 0x001C
#define QMI_M2M_GET_GDATAVOL_REQ_V01 0x001D
#define QMI_M2M_GET_GDATAVOL_RESP_V01 0x001D
#define QMI_M2M_GET_PDP_ENABLING_REQ_V01 0x001E
#define QMI_M2M_GET_PDP_ENABLING_RESP_V01 0x001E
#define QMI_M2M_GET_PDP_DEFAULT_CID_REQ_V01 0x001F
#define QMI_M2M_GET_PDP_DEFAULT_CID_RESP_V01 0x001F
#define QMI_M2M_CONTROL_M2MB_APPLICATION_STATUS_IND_V01 0x0020
#define QMI_M2M_GET_HW_REV_REQ_V01 0x0021
#define QMI_M2M_GET_HW_REV_RESP_V01 0x0021
#define QMI_M2M_ETH_CABLE_NOTI_REQ_V01 0x0022
#define QMI_M2M_ETH_CABLE_NOTI_RESP_V01 0x0022
#define QMI_M2M_SW_VER_INFO_REQ_V01 0x0023
#define QMI_M2M_SW_VER_INFO_RESP_V01 0x0023
#define QMI_M2M_AT_ABORT_CMD_LIST_REQ_V01 0x0024
#define QMI_M2M_AT_ABORT_CMD_LIST_RESP_V01 0x0024
#define QMI_M2M_TEMPORARY_LWM2M_CMD_FWD_TO_M2MMAIN_IND_V01 0x0025
#define QMI_M2M_TEMPORARY_LWM2M_CMD_FWD_RESP_REQ_V01 0x0026
#define QMI_M2M_TEMPORARY_LWM2M_CMD_FWD_RESP_RESP_V01 0x0026
#define QMI_M2M_GET_USER_DATA_CALL_STATUS_REQ_V01 0x0027
#define QMI_M2M_GET_USER_DATA_CALL_STATUS_RESP_V01 0x0027
#define QMI_M2M_SET_APP_CMUX_MODE_REQ_V01 0x0028
#define QMI_M2M_SET_APP_CMUX_MODE_RESP_V01 0x0028
#define QMI_M2M_SET_UART_CTL_REQ_V01 0x0029
#define QMI_M2M_SET_UART_CTL_RESP_V01 0x0029
#define QMI_M2M_GET_UART_CTL_REQ_V01 0x002A
#define QMI_M2M_GET_UART_CTL_RESP_V01 0x002A
#define QMI_M2M_UART_CTL_IND_V01 0x002B
#define QMI_M2M_I2C_CF_REQ_V01 0x002C
#define QMI_M2M_I2C_CF_RESP_V01 0x002C
#define QMI_M2M_SET_FWAUTOSIM_REQ_V01 0x002D
#define QMI_M2M_SET_FWAUTOSIM_RESP_V01 0x002D
#define QMI_M2M_GET_FWAUTOSIM_REQ_V01 0x002E
#define QMI_M2M_GET_FWAUTOSIM_RESP_V01 0x002E
#define QMI_M2M_DISC_ALL_PDP_REQ_V01 0x002F
#define QMI_M2M_DISC_ALL_PDP_RESP_V01 0x002F
#define QMI_M2M_DISC_ALL_PDP_IND_V01 0x0030
#define QMI_M2M_ATSSL_GET_SEC_CFG_REQ_V01 0x0031
#define QMI_M2M_ATSSL_GET_SEC_CFG_RESP_V01 0x0031
#define QMI_M2M_ATSSL_SET_SEC_CFG_REQ_V01 0x0032
#define QMI_M2M_ATSSL_SET_SEC_CFG_RESP_V01 0x0032
#define QMI_M2M_SET_APN_PRESERVATION_REQ_V01 0x0033
#define QMI_M2M_SET_APN_PRESERVATION_RESP_V01 0x0033
#define QMI_M2M_SET_CCLK_REQ_V01 0x0034
#define QMI_M2M_SET_CCLK_RESP_V01 0x0034
#define QMI_M2M_GET_CCLK_REQ_V01 0x0035
#define QMI_M2M_GET_CCLK_RESP_V01 0x0035
#define QMI_M2M_SET_ALARM_REQ_V01 0x0036
#define QMI_M2M_SET_ALARM_RESP_V01 0x0036
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor 
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro m2m_qmi_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type m2m_qmi_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );
 
/** This macro should be used to get the service object */ 
#define m2m_qmi_get_service_object_v01( ) \
          m2m_qmi_get_service_object_internal_v01( \
            M2M_QMI_V01_IDL_MAJOR_VERS, M2M_QMI_V01_IDL_MINOR_VERS, \
            M2M_QMI_V01_IDL_TOOL_VERS )
/** 
    @} 
  */


#ifdef __cplusplus
}
#endif
#endif

