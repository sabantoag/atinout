#ifndef AUDIO_SERVICE_01_H
#define AUDIO_SERVICE_01_H
/**
  @file audio_service_v01.h

  @brief This is the public header file which defines the audio service Data structures.

  This header file defines the types and structures that were defined in
  audio. It contains the constant values defined, enums, structures,
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
   It was generated on: Tue Mar 30 2021 (Spin 0)
   From IDL File: audio_service_v01.idl */

/** @defgroup audio_qmi_consts Constant values defined in the IDL */
/** @defgroup audio_qmi_msg_ids Constant values for QMI message IDs */
/** @defgroup audio_qmi_enums Enumerated types used in QMI messages */
/** @defgroup audio_qmi_messages Structures sent as QMI messages */
/** @defgroup audio_qmi_aggregates Aggregate types used in QMI messages */
/** @defgroup audio_qmi_accessor Accessor for QMI service object */
/** @defgroup audio_qmi_version Constant values for versioning information */

#include <stdint.h>
#include "qmi_idl_lib.h"


#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup audio_qmi_version
    @{
  */
/** Major Version Number of the IDL used to generate this file */
#define AUDIO_V01_IDL_MAJOR_VERS 0x01
/** Revision Number of the IDL used to generate this file */
#define AUDIO_V01_IDL_MINOR_VERS 0x00
/** Major Version Number of the qmi_idl_compiler used to generate this file */
#define AUDIO_V01_IDL_TOOL_VERS 0x06
/** Maximum Defined Message ID */
#define AUDIO_V01_MAX_MESSAGE_ID 0x0037
/**
    @}
  */


/** @addtogroup audio_qmi_consts 
    @{ 
  */

/**  Maximum data size.  */
#define AUDIO_MAX_DATA_SIZE_V01 65500

/**   Maximum length of a client or service name  */
#define AUDIO_MAX_NAME_SIZE_V01 256

/**   Maximum length of audio aplay file name  */
#define AUDIO_MAX_FILE_NAME_SIZE_V01 33

/**   Maximum length of audio  alist string  */
#define AUDIO_MAX_ALIST_STRING_SIZE_V01 1321

/**  Maximum amount of acdb files passed at once  */
#define AUDIO_MAX_ACDB_FILES_V01 20

/**  Maximum acdb filename length  */
#define AUDIO_MAX_ACDB_FILE_NAME_LENGTH_V01 256
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t result;
  /**<  0=Success, 1=Failure */

  uint16_t error;
  /**<   OEM defined error values */
}audio_qmi_response_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  AUDIO_QMI_ATOP_ERRORS_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_ERR_MSG_NOT_SUPPORTED_IN_NON_ATOP_MODE_V01 = 0x8000, /**<  Message is not allowed when not running in ATOP mode  */
  QMI_ERR_PLAYBACK_OPEN_FILE_NOT_EXISTING_V01 = 0x8001, /**<  File does not exist  */
  QMI_ERR_PLAYBACK_OPEN_FILE_WRONG_FORMAT_V01 = 0x8002, /**<  Format of the file is not recognized  */
  QMI_ERR_PLAYBACK_OPEN_FILE_CAN_NOT_OPEN_V01 = 0x8003, /**<  Can not open the file  */
  AUDIO_QMI_ATOP_ERRORS_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}audio_qmi_atop_errors_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_MUTE_DIR_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_MUTE_DIR_TX_ONLY_V01 = 0, /**<   Tx only.  */
  QMI_AUDIO_MUTE_DIR_RX_ONLY_V01 = 1, /**<   Rx only.   */
  QMI_AUDIO_MUTE_DIR_TX_AND_RX_V01 = 2, /**< Tx and Rx.  */
  QMI_AUDIO_MUTE_DIR_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_mute_dir_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_MUTE_EN_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_MUTE_DISABLE_V01 = 0, 
  QMI_AUDIO_MUTE_ENABLE_V01 = 1, 
  QMI_AUDIO_MUTE_EN_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_mute_en_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  M2M_DECODE_ERR_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  OPEN_ERR_V01 = -3, 
  FMT_NOT_SUPPORTED_V01 = -2, 
  ERROR_V01 = -1, 
  SUCCESS_V01 = 0, 
  CHANGE_PATH_V01 = 1, 
  FMT_IS_OK_V01 = 2, 
  FILE_EXIST_V01 = 3, 
  M2M_DECODE_ERR_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}m2m_decode_err_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_mute_dir_v01 direction;
  /**<     Direction in which the stream is flowing
         - 0 -- Tx only
         - 1 -- Rx only
         - 2 -- Tx and Rx  */

  qmi_audio_mute_en_v01 mute_flag;
  /**<     Mute disable/enable
         - 0 -- Unmute
         - 1 -- Mute  */
}qmi_audio_set_mute_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_VOLUME_DIR_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_VOLUME_DIR_TX_ONLY_V01 = 0, /**<   Tx only.  */
  QMI_AUDIO_VOLUME_DIR_RX_ONLY_V01 = 1, /**<   Rx only.   */
  QMI_AUDIO_VOLUME_DIR_TX_AND_RX_V01 = 2, /**< Tx and Rx.  */
  QMI_AUDIO_VOLUME_DIR_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_volume_dir_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_DEVICE_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_INTERNAL_DEV_ID_V01 = 0, /**<   Analog.  */
  QMI_AUDIO_EXTERNAL_DEV_ID_V01 = 1, /**<   Digital.    */
  QMI_AUDIO_MAX_DEV_V01 = 2, /**< maximum device  */
  QMI_AUDIO_DEVICE_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_device_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_CLOCK_MODE_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_SLAVE_ID_V01 = 0, /**<   DVI Slave mode.  */
  QMI_AUDIO_MASTER_ID_V01 = 1, /**<   DVI Master mode.  */
  QMI_AUDIO_MASTER_CLK_ALWAYS_ON_ID_V01 = 2, /**<   DVI Master Clock always on mode.  */
  QMI_AUDIO_MAX_CLOCK_MODE_V01 = 3, /**<   Maximum interface mode  */
  QMI_AUDIO_CLOCK_MODE_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_clock_mode_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_device_id_v01 device;
  /**<     Device ID is flowing
         - 0 -- Internal Codec
         - 1 -- External Codec
         */

  qmi_audio_volume_dir_v01 direction;
  /**<     Direction in which the stream is flowing
         - 0 -- Tx only
         - 1 -- Rx only
         - 2 -- Tx and Rx  */

  uint32_t vol_index;
  /**<     Rx target volume index to be set to context.  */
}qmi_audio_set_volume_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_device_id_v01 device;
  /**<     Device ID is flowing
         - 0 -- Internal Codec
         - 1 -- External Codec
         */

  qmi_audio_volume_dir_v01 direction;
  /**<     Direction in which the stream is flowing
         - 0 -- Tx only

         - 1 -- Rx only
         - 2 -- Tx and Rx  */
}qmi_audio_get_volume_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_device_id_v01 device;
  /**<     Device ID is flowing:
         - 0 -- Internal Codec
         - 1 -- External Codec
         */

  uint32_t vol_index;
  /**<     Rx target volume index to be set to context.  */
}qmi_audio_set_ring_volume_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_BOOL_MODE_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_DISABLE_ID_V01 = 0, 
  QMI_AUDIO_ANABLE_ID_V01 = 1, 
  QMI_AUDIO_BOOL_MODE_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_bool_mode_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t mode[8];

  uint16_t vol[8];
}qmi_audio_tsvol_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  uint16_t srs_mode;

  char file_name[AUDIO_MAX_FILE_NAME_SIZE_V01];
}qmi_audio_srs_ext_type_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_device_id_v01 device_id;
  /**<   According to dsat_ha_dvi_val[0] */

  int32_t pcmtxg_val;

  int32_t pcmrxg_val;

  uint32_t clvl_val;

  uint32_t crsl_val;

  uint32_t cap_val;

  uint32_t srp_val;

  uint32_t adspc_val[2];

  uint32_t shssd_val[2];

  uint32_t shfsd_val[2];

  uint32_t hfmicg_val;

  uint32_t hfrecg_val;

  uint32_t spkmut_val;

  uint32_t calm_val;

  uint32_t tty_val;

  uint32_t ectd_val;

  uint32_t stm_val;

  uint32_t dtmf_detect_val;

  uint32_t dviclock_val;

  uint32_t csil_val;

  uint32_t pcmdelay_val[2];

  uint32_t dvi_clk_ext_val[2];

  qmi_audio_tsvol_type_v01 tsvol_val;

  qmi_audio_srs_ext_type_v01 srs_ext_val;

  qmi_audio_clock_mode_id_v01 clk_mode;
  /**<   According to dsat_ha_dvi_val[2] */
}qmi_audio_set_config_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_PATH_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_HW_PATH_ID_V01 = 0, /**<  AXE. Not Supported  */
  QMI_AUDIO_HANDSFREE_PATH_ID_V01 = 1, /**<  MIC1 SPK1 and SPK2 Analog  */
  QMI_AUDIO_HEADSET_PATH_ID_V01 = 2, /**<  MIC2 SPK1 and SPK2 Analog  */
  QMI_AUDIO_MAX_PATH_V01 = 3, /**<  Maximum Audio Path  */
  QMI_AUDIO_PATH_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_path_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_DSP_CONFIGURATION_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_AUTOMATIC_ADSPC_ID_V01 = 0, /**<  Automatic */
  QMI_AUDIO_HANDSFREE_ADSPC_ID_V01 = 1, /**<  Hands Free  */
  QMI_AUDIO_HEADSET_ADSPC_ID_V01 = 2, /**<  Headset  */
  QMI_AUDIO_HANDSET_ADSPC_ID_V01 = 3, /**<  Handset */
  QMI_AUDIO_SPEAKERPHONE_BT_ADSPC_ID_V01 = 4, /**<  Speaker phone Bluetooth */
  QMI_AUDIO_TTY_ADSPC_ID_V01 = 5, /**<  TTY  */
  QMI_AUDIO_USB_ADSPC_ID_V01 = 6, /**<  USB  */
  QMI_AUDIO_MAX_ADSPC_V01 = 7, /**<  Maximum DSP Profile  */
  QMI_AUDIO_DSP_CONFIGURATION_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_dsp_configuration_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_RINGER_PATH_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_CURRENT_RINGER_PATH_ID_V01 = 0, /**<  Current selected audio path #CAP  */
  QMI_AUDIO_HANDSFREE_RINGER_PATH_ID_V01 = 1, /**<  MIC1 SPK1 and SPK2 Analog  */
  QMI_AUDIO_HEADSET_RINGER_PATH_ID_V01 = 2, /**<  MIC2 SPK1 and SPK2 Analog  */
  QMI_AUDIO_BUZZER_RINGER_PATH_ID_V01 = 3, /**<  BUZZER option by GPIO   */
  QMI_AUDIO_MAX_RINGER_PATH_V01 = 4, /**<  Maximum Ringer Path  */
  QMI_AUDIO_RINGER_PATH_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_ringer_path_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_TTY_MODE_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_TTY_MODE_OFF_V01 = 0, /**<  TTY Off  */
  QMI_AUDIO_TTY_MODE_FULL_V01 = 1, /**<  TTY Full  */
  QMI_AUDIO_TTY_MODE_VCO_V01 = 2, /**<  TTY Voice Carryover  */
  QMI_AUDIO_TTY_MODE_HCO_V01 = 3, /**<  TTY Hearing Carryover  */
  QMI_AUDIO_MAX_TTY_MODE_V01 = 4, 
  QMI_AUDIO_TTY_MODE_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_tty_mode_type_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_path_id_v01 audio_path_id;

  qmi_audio_bool_mode_id_v01 side_tone_mode;

  uint32_t gain_level;
}qmi_audio_set_side_tone_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_audio_device_id_v01 device;
  /**<     Device ID is flowing:
         - 0 -- Internal Codec
         - 1 -- External Codec
         */

  uint32_t mic_gain_index;
  /**<     Mic Gain level .  */
}qmi_audio_set_mic_gain_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_VOICE_PATH_STATE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_VOICE_PATH_STATE_OPEN_V01 = 0, /**<  OPEN  */
  QMI_AUDIO_VOICE_PATH_STATE_CLOSED_V01 = 1, /**<  CLOSED  */
  QMI_AUDIO_VOICE_PATH_STATE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_voice_path_state_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_ECALL_STATE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_ECALL_NOT_ACTIVE_V01 = 0, /**<  NOT ACTIVE  */
  QMI_AUDIO_ECALL_ACTIVE_V01 = 1, /**<  ACTIVE      */
  QMI_AUDIO_ECALL_STATE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_ecall_state_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  PLAYBACK_STATUS_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_PLAYBACK_STATUS_DONE_V01 = 0, /**<  DONE: File playback is done  */
  QMI_AUDIO_PLAYBACK_STATUS_ABORTED_V01 = 1, /**<  ABORTED: User stopped the playback  */
  QMI_AUDIO_PLAYBACK_STATUS_PLAY_TICK_V01 = 2, /**<  PLAY_TICK: File playback is still busy  */
  QMI_AUDIO_PLAYBACK_STATUS_FAILED_V01 = 3, /**<  FAILED: playback stopped because of a play error  */
  PLAYBACK_STATUS_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}playback_status_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_INPUT_PORT_SELECTION_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_INPUT_PORT_NONE_V01 = 0, /**<  no input port selected       */
  QMI_AUDIO_INPUT_PORT_1_V01 = 1, /**<  left mic analog input        */
  QMI_AUDIO_INPUT_PORT_2_V01 = 2, /**<  right mic analog input       */
  QMI_AUDIO_INPUT_PORT_FILE_V01 = 3, /**<  file input for playback      */
  QMI_AUDIO_INPUT_PORT_PCM_V01 = 4, /**<  external PCM digital input   */
  QMI_AUDIO_INPUT_PORT_I2S_V01 = 5, /**<  external I2S digital input   */
  QMI_AUDIO_INPUT_PORT_SELECTION_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_input_port_selection_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_OUTPUT_PORT_SELECTION_ID_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_AUDIO_OUTPUT_PORT_NONE_V01 = 0, /**<  no output port selected           */
  QMI_AUDIO_OUTPUT_PORT_1_V01 = 1, /**<  left analog audio output only     */
  QMI_AUDIO_OUTPUT_PORT_2_V01 = 2, /**<  right analog audio output only    */
  QMI_AUDIO_OUTPUT_STEREO_V01 = 3, /**<  left + right analog audio output  */
  QMI_AUDIO_OUTPUT_PORT_FILE_V01 = 4, /**<  digital output to file            */
  QMI_AUDIO_OUTPUT_PORT_PCM_V01 = 5, /**<  external PCM digital output       */
  QMI_AUDIO_OUTPUT_PORT_I2S_V01 = 6, /**<  external I2S digital output       */
  QMI_AUDIO_OUTPUT_PORT_SELECTION_ID_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_output_port_selection_id_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_DIGPROTOCOL_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_PROTOCOL_PCM_V01 = 0, 
  QMI_MAX9867_PROTOCOL_I2S_V01 = 1, 
  QMI_MAX9867_DIGPROTOCOL_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_digprotocol_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_MIC_PREAMP_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_MIC_PREAMP_DISABLED_V01 = 0, 
  QMI_MAX9867_MIC_PREAMP_0_DB_V01 = 1, 
  QMI_MAX9867_MIC_PREAMP_20_DB_V01 = 2, 
  QMI_MAX9867_MIC_PREAMP_30_DB_V01 = 3, 
  QMI_MAX9867_MIC_PREAMP_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_mic_preamp_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_DAC_GAIN_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_DAC_GAIN_0_DB_V01 = 0, 
  QMI_MAX9867_DAC_GAIN_6_DB_V01 = 1, 
  QMI_MAX9867_DAC_GAIN_12_DB_V01 = 2, 
  QMI_MAX9867_DAC_GAIN_18_DB_V01 = 3, 
  QMI_MAX9867_DAC_GAIN_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_dac_gain_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_FILTERING_MODE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_FILTERINGMODE_VOICE_V01 = 0, 
  QMI_MAX9867_FILTERINGMODE_AUDIO_V01 = 1, 
  QMI_MAX9867_FILTERING_MODE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_filtering_mode_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_FILTER_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_FILTER_DISABLED_V01 = 0, 
  QMI_MAX9867_FILTER_ELLIPTICAL_FOR_16KHZ_GSM_V01 = 1, 
  QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_16KHZ_V01 = 2, 
  QMI_MAX9867_FILTER_ELLIPTICAL_FOR_8KHZ_GSM_V01 = 3, 
  QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_8KHZ_V01 = 4, 
  QMI_MAX9867_FILTER_200KHZ_BUTTERWORTH_FOR_48KHZ_V01 = 5, 
  QMI_MAX9867_FILTER_END_OF_RANGE_V01 = 6, 
  QMI_MAX9867_FILTER_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_filter_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_MAX9867_HP_MODE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_MAX9867_HP_MODE_DIFFERENTIAL_V01 = 0, 
  QMI_MAX9867_HP_MODE_CAPACITOR_LESS_V01 = 1, 
  QMI_MAX9867_HP_MODE_SINGLE_ENDED_CLICKLESS_V01 = 2, 
  QMI_MAX9867_HP_MODE_SINGLE_ENDED_FAST_V01 = 3, 
  QMI_MAX9867_HP_MODE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_max9867_hp_mode_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_max9867_digprotocol_v01 protocol;
  /**<    0 = pcm, 1 = I2S */

  uint8_t dual_mono_out;
  /**<    0 = stereo output, 1 = L+R mono outputs */

  uint8_t mute_incoming_ringtone;
  /**<    0 = no mute, 1 = mute */
}qmi_codec_global_configuration_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  qmi_max9867_mic_preamp_v01 mic_preamp;
  /**<   0 = disabled, 1 = 0 db, 2 = 20 db, 3 = 30 db */

  uint8_t mic_gain_dB;

  int8_t adc_level_dB;

  qmi_max9867_dac_gain_v01 dac_gain;
  /**<   0 = 0 db, 1 = 6 db, 2 = 12 db, 3 = 18 db */

  uint8_t dac_atten_dB;

  qmi_max9867_filtering_mode_v01 filtmode;
  /**<   0 = voice filtering mode, 1 = audio filtering mode */

  qmi_max9867_filter_v01 in_filter;
  /**<   0 = no filter,
                                                1 = QMI_MAX9867_FILTER_ELLIPTICAL_FOR_16KHZ_GSM,
                                                2 = QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_16KHZ,
                                                3 = QMI_MAX9867_FILTER_ELLIPTICAL_FOR_8KHZ_GSM,
                                                4 = QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_8KHZ,
                                                5 = QMI_MAX9867_FILTER_200KHZ_BUTTERWORTH_FOR_48KHZ,
                                                6 = QMI_MAX9867_FILTER_END_OF_RANGE */

  qmi_max9867_filter_v01 out_filter;
  /**<   0 = no filter,
                                                1 = QMI_MAX9867_FILTER_ELLIPTICAL_FOR_16KHZ_GSM,
                                                2 = QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_16KHZ,
                                                3 = QMI_MAX9867_FILTER_ELLIPTICAL_FOR_8KHZ_GSM,
                                                4 = QMI_MAX9867_FILTER_500HZ_BUTTERWORTH_FOR_8KHZ,
                                                5 = QMI_MAX9867_FILTER_200KHZ_BUTTERWORTH_FOR_48KHZ,
                                                6 = QMI_MAX9867_FILTER_END_OF_RANGE */

  qmi_max9867_hp_mode_v01 hpmode;
  /**<   0 = differential, 1 = capacitor-less, 2 = single-ended clickless, 3 = single-ended fast */
}qmi_codec_specific_configuration_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  uint32_t filename_len;
  /**<   Length of the file name */

  char filename[AUDIO_MAX_ACDB_FILE_NAME_LENGTH_V01];
  /**<   The actual file name */
}qmi_dsp_config_file_name_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_aggregates
    @{
  */
typedef struct {

  uint32_t no_files;
  /**<   The amount of filenames given */

  qmi_dsp_config_file_name_v01 filenames[AUDIO_MAX_ACDB_FILES_V01];
  /**<   List of file names */
}qmi_dsp_config_file_names_v01;  /* Type */
/**
    @}
  */

/** @addtogroup audio_qmi_enums
    @{
  */
typedef enum {
  QMI_AUDIO_CALL_STATUS_TYPE_MIN_ENUM_VAL_V01 = -2147483647, /**< To force a 32 bit signed enum.  Do not change or use*/
  QMI_CALL_EVENT_NONE_V01 = -1, 
  QMI_CALL_EVENT_ORIG_V01 = 0, /**<  Phone originated a call.    */
  QMI_CALL_EVENT_ANSWER_V01 = 1, /**<  Incoming call was answered.     */
  QMI_CALL_EVENT_END_REQ_V01 = 2, /**<  Started call-end process.  */
  QMI_CALL_EVENT_END_V01 = 3, /**<  Originated/incoming call was ended . */
  QMI_CALL_EVENT_SUPS_V01 = 4, /**<  Phone sent Flash/Flash-with-Info to the BS.  */
  QMI_CALL_EVENT_INCOM_V01 = 5, /**<  Phone received an incoming call.  */
  QMI_CALL_EVENT_CONNECT_V01 = 6, /**<  Originated/incoming call was connected.  */
  QMI_CALL_EVENT_MAX_V01 = 7, 
  QMI_AUDIO_CALL_STATUS_TYPE_MAX_ENUM_VAL_V01 = 2147483647 /**< To force a 32 bit signed enum.  Do not change or use*/
}qmi_audio_call_status_type_v01;
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_mute_v01 qmi_audio_set_mute_payload;
  /**<   Audio Mute request.  */
}audio_mute_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_mute_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  int8_t result;
  /**<   Audio mute indication.  */
}audio_mute_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_play_tone_type;
  /**<   Audio Tone Type request.  */

  /* Mandatory */
  uint8_t qmi_audio_play_tone_id;
  /**<   Audio Tone ID request.  */

  /* Optional */
  uint8_t qmi_audio_play_tone_duration_valid;  /**< Must be set to true if qmi_audio_play_tone_duration is being passed */
  int32_t qmi_audio_play_tone_duration;
  /**<   Audio Tone Duration request.  */
}audio_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  int8_t tone_play_ind;
  /**<   Tone play indication */
}audio_tone_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_volume_v01 qmi_audio_set_volume_payload;
  /**<   Audio Volume request.  */
}audio_volume_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_volume_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_device_id_v01 qmi_audio_set_device_id;
  /**<   Audio Device request. */

  /* Mandatory */
  qmi_audio_clock_mode_id_v01 qmi_audio_set_clk_mode_id;
  /**<   Audio Interface mode request.  */
}audio_device_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_device_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_config_v01 qmi_audio_set_config_param;
  /**<   Audio Confige request.  */
}audio_config_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_config_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_path_id_v01 qmi_audio_set_path_param;
  /**<   Audio Path request.  */
}audio_path_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_path_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_dsp_configuration_id_v01 qmi_audio_set_dsp_config_param;
  /**<   Audio DSP Configuration request.  */

  /* Mandatory */
  qmi_audio_bool_mode_id_v01 qmi_audio_set_ecns_mode_param;
  /**<   Audio ECNS request.   */
}audio_dsp_config_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dsp_config_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_ringer_path_id_v01 qmi_audio_set_ringer_path_param;
  /**<   Audio Ringer Path request.  */
}audio_ringer_path_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_ringer_path_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_side_tone_v01 qmi_audio_side_tone_param;
  /**<   Side Tone Path.  */
}audio_side_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_side_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_loopback_param;
  /**<   Loop Back states.  */
}audio_loopback_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_loopback_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_ring_volume_v01 qmi_audio_set_ring_volume_payload;
  /**<   Audio Ring Volume request.  */
}audio_ring_volume_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_ring_volume_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_set_mic_gain_v01 qmi_audio_set_mic_gain_payload;
  /**<   Audio Mic Gain request.  */
}audio_mic_gain_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_mic_gain_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t receiver_gain_index;
  /**<   Audio Receiver Gain request.  */
}audio_rec_gain_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_rec_gain_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t alert_sound_mode;
  /**<   Audio Receiver Gain request.  */
}audio_alert_sound_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_alert_sound_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_tty_mode_type_v01 tty_mode;
  /**<    TTY Mode type:\n
         - 0 -- Teletypewriter (TTY) is disabled.\n 
		 - 1 -- Full \n
		 - 2 -- Voice Carry Over (VCO)\n
         - 3 -- Hearing Carry Over (HCO) */
}audio_tty_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_tty_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t ectd_mode;
  /**<    Enhanced call tone disable:\n
         - 0 -- Not disable call tones.\n 
		 - 1 -- Call End Tone \n*/
}audio_ectd_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_ectd_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t stm_mode;
  /**<   STM - Signalling Tones Mode:\n
         - 0 -- signalling tones disabled.\n
         - 1 -- signalling tones enabled. \n
         - 2 -- all tones disabled. \n*/
}audio_signal_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_signal_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_stop_tone_type;
  /**<   Audio Tone Type request.  */

  /* Mandatory */
  uint8_t qmi_audio_stop_tone_id;
  /**<   Audio Tone ID request.  */
}audio_stop_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_stop_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  uint8_t audio_stop_tone_type;
  /**<   Stop tone indication */
}audio_stop_tone_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_dtmf_detect_type;
  /**<   Dtmf Detect Type request.  */
}audio_dtmf_detect_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dtmf_detect_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  char dtmf_detect_value;

  /* Mandatory */
  char dtmf_detect_band_type;
  /**<   Dtmf Detect indication */
}audio_dtmf_detect_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Optional */
  /*  Audio  */
  uint8_t qmi_audio_tone_type_valid;  /**< Must be set to true if qmi_audio_tone_type is being passed */
  uint8_t qmi_audio_tone_type;
  /**<   Audio Tone Type request.  */

  /* Optional */
  uint8_t qmi_audio_tone_id_valid;  /**< Must be set to true if qmi_audio_tone_id is being passed */
  uint8_t qmi_audio_tone_id;
  /**<   Audio Tone ID request.  */
}audio_tone_status_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t tone_status;
  /**<   AUDIO tone status ON/OFF/.. response. */
}audio_tone_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_tsvol_type_v01 tsvol_valus;
  /**<   Tone Classes Volume request.  */
}audio_tone_volume_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_tone_volume_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t dvi_clock_entry;
  /**<   Dvi Clock request.  */
}audio_dvi_clock_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dvi_clock_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t csil_mode;
  /**<   CSIL - Silent Mode:\n
         - 0 -- silent mode disabled.\n
         - 1 -- silent mode enabled. \n*/
}audio_silence_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_silence_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t delay;
  /**<   Delay on seconds request. */

  /* Mandatory */
  uint32_t action;
  /**<   Action:\n
         - 1 -- Delay after Voice call.\n
		 - 2 -- Delay after Tone.\n
         - 3 -- Delay after Voice & Tone. \n*/
}audio_delay_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_delay_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint32_t dvi_clock_entry;
  /**<   Dvi Clock request.  */

  /* Mandatory */
  uint8_t dvi_samplerate_entry;
  /**<   Dvi samplerate request.  */
}audio_dvi_clk_ext_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dvi_clk_ext_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_get_volume_v01 qmi_audio_get_volume_payload;
  /**<   Audio Get Volume request.  */
}audio_get_volume_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t volume_value;
}audio_get_volume_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_voice_path_state_v01 voice_path_state;
  /**<   voice_path_state can have the following values
         - OPEN : voice audio can be handled (heard)
         - CLOSED : no voice audio handled  */
}audio_set_voice_path_state_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_set_voice_path_state_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  char filename[200 + 1];
  /**<   name of the file to play-back  */
}audio_playback_open_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}audio_playback_open_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_playback_play_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}audio_playback_play_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_playback_pause_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_playback_pause_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_playback_resume_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}audio_playback_resume_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_playback_stop_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_playback_stop_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_playback_close_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type.*/
}audio_playback_close_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Interruption */
  playback_status_v01 status;
  /**<   Status of active playback
         - DONE: File playback is done
         - ABORTED: User stopped the playback
         - PLAY_TICK: File playback is still busy */
}audio_playback_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_ecall_state_v01 ecall_state;
  /**<   ecall_state can have the following values
         - NOT_ACTIVE : system is not in an active ecall mode
         - ACTIVE     : system is in an active ecall mode  */
}audio_ecall_state_set_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_ecall_state_set_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_input_port_selection_id_v01 input;
  /**<   input can have the following values
        - QMI_AUDIO_INPUT_PORT_NONE : no input port selected
        - QMI_AUDIO_INPUT_PORT_1    : left mic analog input
        - QMI_AUDIO_INPUT_PORT_2    : right mic analog input
        - QMI_AUDIO_INPUT_PORT_FILE : file input for playback
        - QMI_AUDIO_INPUT_PORT_PCM  : external PCM digital input
        - QMI_AUDIO_INPUT_PORT_I2S  : external I2S digital input */

  /* Mandatory */
  qmi_audio_output_port_selection_id_v01 output;
  /**<   output can have the following values
        - QMI_AUDIO_OUTPUT_PORT_NONE   : no output port selected 
        - QMI_AUDIO_OUTPUT_PORT_1      : left analog audio output only
        - QMI_AUDIO_OUTPUT_PORT_2      : right analog audio output only
        - QMI_AUDIO_OUTPUT_STEREO      : left + right analog audio output
        - QMI_AUDIO_OUTPUT_PORT_FILE   : digital output to file
        - QMI_AUDIO_OUTPUT_PORT_PCM    : external PCM digital output
        - QMI_AUDIO_OUTPUT_PORT_I2S    : external I2S digital output */
}audio_port_config_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_port_config_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_asize_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t used;
  /**<   used memory in audio folder.*/
}audio_asize_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  char file_name[AUDIO_MAX_FILE_NAME_SIZE_V01];
  /**<   File name request.  */
}audio_adelf_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t used;
  /**<   used memory in audio folder.*/
}audio_adelf_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_adela_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint32_t used;
  /**<   used memory in audio folder.*/
}audio_adela_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {
  /* This element is a placeholder to prevent the declaration of 
     an empty struct.  DO NOT USE THIS FIELD UNDER ANY CIRCUMSTANCE */
  char __placeholder;
}audio_alist_req_msg_v01;

  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  char list[AUDIO_MAX_ALIST_STRING_SIZE_V01];
  /**<   files names list in aplay folder.*/
}audio_alist_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_srs_ext_type_v01 srs_ext_valus;
}audio_srs_ext_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_srs_ext_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_codec_global_configuration_v01 global_settings;

  /* Mandatory */
  qmi_codec_specific_configuration_v01 specific_settings;
}audio_codec_config_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_codec_config_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t sms_tone_enable;
  /**<   Incomming SMS Tone can have the following values
        Enable:  Incoming SMS tone heard in active voice call.
        Disable: Incoming SMS tone ignored in active voice call. */
}audio_sms_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_sms_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_dsp_config_file_names_v01 config_files;
}audio_dsp_config_update_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dsp_config_update_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  char file_path[AUDIO_MAX_NAME_SIZE_V01];
  /**<   File name request.  */
}audio_decode_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The basic Audio message passing between the client and service. 
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  m2m_decode_err_v01 ret_status;
}audio_decode_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function play PCM/WAV audio file on the Linux FS to the speaker or uplink path.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_aplay_mode;
  /**<   APLAY mode request.  */

  /* Mandatory */
  uint8_t qmi_audio_aplay_dir;
  /**<   APLAY dir request.   */

  /* Mandatory */
  char qmi_audio_aplay_filename[32 + 1];
  /**<   APLAY filename request.  */
}audio_aplay_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function play PCM/WAV audio file on the Linux FS to the speaker or uplink path.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_aplay_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; This function play PCM/WAV audio file on the Linux FS to the speaker or uplink path.
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  uint8_t result;
  /**<   Audio aplay indication.  */
}audio_aplay_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function send volume type, frequency, and duration to play frequency tone.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_play_tone_volume_type;
  /**<   Audio Tone volume Type request.  */

  /* Mandatory */
  uint16_t qmi_audio_play_f1_hz;
  /**<   Audio High frequency request.  */

  /* Mandatory */
  uint16_t qmi_audio_play_f2_hz;
  /**<   Audio Low frequency request. */

  /* Optional */
  uint8_t qmi_audio_play_tone_duration_valid;  /**< Must be set to true if qmi_audio_play_tone_duration is being passed */
  int32_t qmi_audio_play_tone_duration;
  /**<   Audio Tone Duration(ms) request.  */
}audio_freq_tone_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function send volume type, frequency, and duration to play frequency tone.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_freq_tone_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; The function list all audio files stored on the on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_alist_req;
  /**<   APLAY list request.  */
}audio_alistcrc_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; The function list all audio files stored on the on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t qmi_audio_alist_resp_id;
}audio_alistcrc_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; The function list all audio files stored on the on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  char qmi_audio_alist_filename[32 + 1];

  /* Mandatory */
  uint32_t qmi_audio_alist_filesize;

  /* Mandatory */
  uint16_t qmi_audio_alist_crc;
  /**<   Audio aplay indication.  */
}audio_alistcrc_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to send an audio file to serial port and store it on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  char qmi_audio_asend_filename[32 + 1];

  /* Mandatory */
  uint32_t qmi_audio_asend_filesize;

  /* Mandatory */
  uint8_t qmi_audio_asend_mode;

  /* Mandatory */
  /*  data */
  char qmi_audio_asend_buffer[512];
}audio_asend_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to send an audio file to serial port and store it on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t qmi_audio_asend_resp_mode;

  /* Mandatory */
  uint32_t qmi_audio_asend_resp_filesize;
}audio_asend_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  char qmi_audio_arecvd_filename[32 + 1];

  /* Mandatory */
  uint32_t qmi_audio_arecv_filesize;

  /* Mandatory */
  uint8_t qmi_audio_arecv_mode;
}audio_arecv_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */

  /* Mandatory */
  uint8_t qmi_audio_arecv_resp_mode;

  /* Mandatory */
  uint32_t qmi_audio_arecv_resp_filesize;

  /* Mandatory */
  /*  data */
  char qmi_audio_arecv_buffer[512];
}audio_arecv_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_dviext_mode;
  /**<   Audio dviext mode request.  */

  /* Mandatory */
  uint8_t qmi_audio_dviext_samplerate;
  /**<   Audio dviext samplerate request.  */

  /* Mandatory */
  uint8_t qmi_audio_dviext_samplewidth;
  /**<   Audio dviext samplerate request. */

  /* Mandatory */
  uint8_t qmi_audio_dviext_audiomode;
  /**<   Audio dviext audiomode request. */

  /* Mandatory */
  uint8_t qmi_audio_dviext_edge;
  /**<   Audio dviext edge request. */
}audio_dviext_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_dviext_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  qmi_audio_call_status_type_v01 call_status;
  /**<    Call status :\n
         - 0 --  Phone originated a call\n 
		 - 1 --  Incoming call was answered\n
		 - 2 --  Started call-end process\n
		 - 3 --  Originated/incoming call was ended\n
		 - 4 --  Phone sent Flash/Flash-with-Info to the BS\n
		 - 5 --  Phone received an incoming call\n
         - 6 --  Originated/incoming call was connected*/
}audio_call_status_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_call_status_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_tone_mode;
  /**<   Audio tone mode request.  */

  /* Mandatory */
  uint32_t qmi_audio_setting;
  /**<   Audio setting value of tone request. */
}audio_oobtset_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_oobtset_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_arecd_mode;
  /**<   ARECD mode request.  */

  /* Mandatory */
  char qmi_audio_arecd_filename[32 + 1];
  /**<   ARECD filename request.  */
}audio_arecd_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_arecd_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Indication Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Interruption  */
  uint8_t result;
  /**<   Audio arecd indication.  */
}audio_arecd_ind_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_acdb_slot_check;
  /**<   ACDB file check request.  */
}audio_acdbext_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_acdbext_resp_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Request Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Audio  */
  uint8_t qmi_audio_ausbc_samplerate;
  /**<   AUSBC samplerate set request.  */
}audio_ausbc_req_msg_v01;  /* Message */
/**
    @}
  */

/** @addtogroup audio_qmi_messages
    @{
  */
/** Response Message; This function allow user to receive an audio file stored on the Linux FS.
  */
typedef struct {

  /* Mandatory */
  /*  Result Code  */
  audio_qmi_response_type_v01 resp;
  /**<   Standard response type. */
}audio_ausbc_resp_msg_v01;  /* Message */
/**
    @}
  */

/* Conditional compilation tags for message removal */ 
//#define REMOVE_QMI_AUDIO_V01 
//#define REMOVE_QMI_AUDIO_ARECV_V01 

/*Service Message Definition*/
/** @addtogroup audio_qmi_msg_ids
    @{
  */
#define QMI_AUDIO_VOLUME_REQ_V01 0x0000
#define QMI_AUDIO_VOLUME_RESP_V01 0x0000
#define QMI_AUDIO_TONE_REQ_V01 0x0001
#define QMI_AUDIO_TONE_RESP_V01 0x0001
#define QMI_AUDIO_TONE_IND_V01 0x0001
#define QMI_AUDIO_DEVICE_REQ_V01 0x0002
#define QMI_AUDIO_DEVICE_RESP_V01 0x0002
#define QMI_AUDIO_MUTE_REQ_V01 0x0003
#define QMI_AUDIO_MUTE_RESP_V01 0x0003
#define QMI_AUDIO_MUTE_IND_V01 0x0003
#define QMI_AUDIO_CONFIG_REQ_V01 0x0004
#define QMI_AUDIO_CONFIG_RESP_V01 0x0004
#define QMI_AUDIO_PATH_REQ_V01 0x0005
#define QMI_AUDIO_PATH_RESP_V01 0x0005
#define QMI_AUDIO_DSP_CONFIG_REQ_V01 0x0006
#define QMI_AUDIO_DSP_CONFIG_RESP_V01 0x0006
#define QMI_AUDIO_RINGER_PATH_REQ_V01 0x0007
#define QMI_AUDIO_RINGER_PATH_RESP_V01 0x0007
#define QMI_AUDIO_SIDE_TONE_REQ_V01 0x0008
#define QMI_AUDIO_SIDE_TONE_RESP_V01 0x0008
#define QMI_AUDIO_LOOPBACK_REQ_V01 0x0009
#define QMI_AUDIO_LOOPBACK_RESP_V01 0x0009
#define QMI_AUDIO_RING_VOLUME_REQ_V01 0x000A
#define QMI_AUDIO_RING_VOLUME_RESP_V01 0x000A
#define QMI_AUDIO_MIC_GAIN_REQ_V01 0x000B
#define QMI_AUDIO_MIC_GAIN_RESP_V01 0x000B
#define QMI_AUDIO_RECEIVER_GAIN_REQ_V01 0x000C
#define QMI_AUDIO_RECEIVER_GAIN_RESP_V01 0x000C
#define QMI_AUDIO_ALERT_SOUND_REQ_V01 0x000D
#define QMI_AUDIO_ALERT_SOUND_RESP_V01 0x000D
#define QMI_AUDIO_TTY_REQ_V01 0x000E
#define QMI_AUDIO_TTY_RESP_V01 0x000E
#define QMI_AUDIO_ECTD_REQ_V01 0x000F
#define QMI_AUDIO_ECTD_RESP_V01 0x000F
#define QMI_AUDIO_SIGNALING_TONE_REQ_V01 0x0010
#define QMI_AUDIO_SIGNALING_TONE_RESP_V01 0x0010
#define QMI_AUDIO_STOP_TONE_REQ_V01 0x0011
#define QMI_AUDIO_STOP_TONE_RESP_V01 0x0011
#define QMI_AUDIO_STOP_TONE_IND_V01 0x0011
#define QMI_AUDIO_DTMF_DETECT_REQ_V01 0x0012
#define QMI_AUDIO_DTMF_DETECT_RESP_V01 0x0012
#define QMI_AUDIO_DTMF_DETECT_IND_V01 0x0012
#define QMI_AUDIO_TONE_STATUS_REQ_V01 0x0013
#define QMI_AUDIO_TONE_STATUS_RESP_V01 0x0013
#define QMI_AUDIO_TONE_VOLUME_REQ_V01 0x0014
#define QMI_AUDIO_TONE_VOLUME_RESP_V01 0x0014
#define QMI_AUDIO_DVI_CLOCK_REQ_V01 0x0015
#define QMI_AUDIO_DVI_CLOCK_RESP_V01 0x0015
#define QMI_AUDIO_SILENCE_REQ_V01 0x0016
#define QMI_AUDIO_SILENCE_RESP_V01 0x0016
#define QMI_AUDIO_DELAY_REQ_V01 0x0017
#define QMI_AUDIO_DELAY_RESP_V01 0x0017
#define QMI_AUDIO_DVI_CLK_EXT_REQ_V01 0x0018
#define QMI_AUDIO_DVI_CLK_EXT_RESP_V01 0x0018
#define QMI_AUDIO_GET_VOLUME_REQ_V01 0x0019
#define QMI_AUDIO_GET_VOLUME_RESP_V01 0x0019
#define QMI_AUDIO_SET_VOICE_PATH_STATE_REQ_V01 0x001A
#define QMI_AUDIO_SET_VOICE_PATH_STATE_RESP_V01 0x001A
#define QMI_AUDIO_PLAYBACK_OPEN_REQ_V01 0x001B
#define QMI_AUDIO_PLAYBACK_OPEN_RESP_V01 0x001B
#define QMI_AUDIO_PLAYBACK_PLAY_REQ_V01 0x001C
#define QMI_AUDIO_PLAYBACK_PLAY_RESP_V01 0x001C
#define QMI_AUDIO_PLAYBACK_PAUSE_REQ_V01 0x001D
#define QMI_AUDIO_PLAYBACK_PAUSE_RESP_V01 0x001D
#define QMI_AUDIO_PLAYBACK_RESUME_REQ_V01 0x001E
#define QMI_AUDIO_PLAYBACK_RESUME_RESP_V01 0x001E
#define QMI_AUDIO_PLAYBACK_STOP_REQ_V01 0x001F
#define QMI_AUDIO_PLAYBACK_STOP_RESP_V01 0x001F
#define QMI_AUDIO_PLAYBACK_CLOSE_REQ_V01 0x0020
#define QMI_AUDIO_PLAYBACK_CLOSE_RESP_V01 0x0020
#define QMI_AUDIO_PLAYBACK_IND_V01 0x0021
#define QMI_AUDIO_ECALL_STATE_SET_REQ_V01 0x0022
#define QMI_AUDIO_ECALL_SET_STATE_RESP_V01 0x0022
#define QMI_AUDIO_PORT_CONFIG_REQ_V01 0x0023
#define QMI_AUDIO_PORT_CONFIG_RESP_V01 0x0023
#define QMI_AUDIO_ASIZE_REQ_V01 0x0024
#define QMI_AUDIO_ASIZE_RESP_V01 0x0024
#define QMI_AUDIO_ADELF_REQ_V01 0x0025
#define QMI_AUDIO_ADELF_RESP_V01 0x0025
#define QMI_AUDIO_ADELA_REQ_V01 0x0026
#define QMI_AUDIO_ADELA_RESP_V01 0x0026
#define QMI_AUDIO_ALIST_REQ_V01 0x0027
#define QMI_AUDIO_ALIST_RESP_V01 0x0027
#define QMI_AUDIO_SRS_EXT_REQ_V01 0x0028
#define QMI_AUDIO_SRS_EXT_RESP_V01 0x0028
#define QMI_AUDIO_CODEC_CONFIG_REQ_V01 0x0029
#define QMI_AUDIO_CODEC_CONFIG_RESP_V01 0x0029
#define QMI_AUDIO_SMS_TONE_REQ_V01 0x002A
#define QMI_AUDIO_SMS_TONE_RESP_V01 0x002A
#define QMI_AUDIO_DSP_CONFIG_UPDATE_REQ_V01 0x002B
#define QMI_AUDIO_DSP_CONFIG_UPDATE_RESP_V01 0x002B
#define QMI_AUDIO_DECODE_REQ_V01 0x002C
#define QMI_AUDIO_DECODE_RESP_V01 0x002C
#define QMI_AUDIO_APLAY_REQ_V01 0x002D
#define QMI_AUDIO_APLAY_RESP_V01 0x002D
#define QMI_AUDIO_APLAY_IND_V01 0x002D
#define QMI_AUDIO_FREQ_TONE_REQ_V01 0x002E
#define QMI_AUDIO_FREQ_TONE_RESP_V01 0x002E
#define QMI_AUDIO_ALISTCRC_REQ_V01 0x002F
#define QMI_AUDIO_ALISTCRC_RESP_V01 0x002F
#define QMI_AUDIO_ALISTCRC_IND_V01 0x002F
#define QMI_AUDIO_ASEND_REQ_V01 0x0030
#define QMI_AUDIO_ASEND_RESP_V01 0x0030
#define QMI_AUDIO_ARECV_REQ_V01 0x0031
#define QMI_AUDIO_ARECV_RESP_V01 0x0031
#define QMI_AUDIO_DVIEXT_REQ_V01 0x0032
#define QMI_AUDIO_DVIEXT_RESP_V01 0x0032
#define QMI_AUDIO_CALL_STATUS_REQ_V01 0x0033
#define QMI_AUDIO_CALL_STATUS_RESP_V01 0x0033
#define QMI_AUDIO_OOBTSET_REQ_V01 0x0034
#define QMI_AUDIO_OOBTSET_RESP_V01 0x0034
#define QMI_AUDIO_ARECD_REQ_V01 0x0035
#define QMI_AUDIO_ARECD_RESP_V01 0x0035
#define QMI_AUDIO_ARECD_IND_V01 0x0035
#define QMI_AUDIO_ACDBEXT_REQ_V01 0x0036
#define QMI_AUDIO_ACDBEXT_RESP_V01 0x0036
#define QMI_AUDIO_AUSBC_REQ_V01 0x0037
#define QMI_AUDIO_AUSBC_RESP_V01 0x0037
/**
    @}
  */

/* Service Object Accessor */
/** @addtogroup wms_qmi_accessor 
    @{
  */
/** This function is used internally by the autogenerated code.  Clients should use the
   macro audio_get_service_object_v01( ) that takes in no arguments. */
qmi_idl_service_object_type audio_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version );
 
/** This macro should be used to get the service object */ 
#define audio_get_service_object_v01( ) \
          audio_get_service_object_internal_v01( \
            AUDIO_V01_IDL_MAJOR_VERS, AUDIO_V01_IDL_MINOR_VERS, \
            AUDIO_V01_IDL_TOOL_VERS )
/** 
    @} 
  */


#ifdef __cplusplus
}
#endif
#endif

