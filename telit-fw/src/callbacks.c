/*Copyright (C) 2020 Telit Communications S.p.A. Italy - All Rights Reserved.*/
/*    See LICENSE file in the project root for full license information.     */

/**
  @file
    callbacks.c

  @brief
    sample app callback functions
  @details
    this file contains the implementation of sms related callback functions
  @note
    Dependencies:
    m2mb_types.h

  @date
    11/02/2020
 */



/* Include files ================================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "m2mb_types.h"

#include "m2mb_os_types.h"
#include "m2mb_os_api.h"

#include "m2mb_fs_posix.h"
#include "m2mb_fs_stdio.h"

#include "m2mb_sms.h"
#include "m2mb_gpio.h"

#include "azx_log.h"
#include "azx_utils.h"
#include "azx_tasks.h"

#include "app_cfg.h"

#include "azx_pduEnc.h"
#include "azx_pduDec.h"
#include "azx_pduCommon.h"

#include "at_utils.h"

#include "callbacks.h"

/* Local defines ================================================================================*/


#define GPIO_PIN "3"
#define WAKE_WORD "TEST"
#define DELETE_SMS 1
#define SEND_ACK_NACK 1

extern INT16 instanceID;

/* Local typedefs ===============================================================================*/
/* Local statics ================================================================================*/

const CHAR *action[]={"M2MB_SMS_DISCARD","M2MB_SMS_STORE_AND_ACK","M2MB_FORWARD_ONLY","M2MB_FORWARD_AND_ACK"};
const CHAR *storage[]={"M2MB_SMS_STORAGE_NONE","M2MB_SMS_STORAGE_SM","M2MB_SMS_STORAGE_ME"};
const CHAR *tag[]={"M2MB_SMS_TAG_MT_READ","M2MB_SMS_TAG_MT_NOT_READ","M2MB_SMS_TAG_MO_SENT","M2MB_SMS_TAG_MO_NOT_SENT"};
const CHAR *failure[]={"M2MB_SMS_ACK_OK","M2MB_SMS_ACK_FAIL_NO_NETWORK_RESPONSE","M2MB_SMS_ACK_FAIL_NETWORK_RELEASED_LINK", "M2MB_SMS_ACK_FAIL_ACK_NOT_SENT"};

const CHAR *format[]={"M2MB_SMS_FORMAT_3GPP","M2MB_SMS_FORMAT_3GPP2"};

M2MB_SMS_STORAGE_E stType, memory;

UINT8 SMS_center [500];
UINT8 SMSC_retr [500];
UINT8 SMS_indexes [500];
UINT32 globalIndex;

UINT16 SMS_indexes_size;
UINT32 memoryFullFlag = 0;
UINT32 CheckSCACorrectnessFlag=0;
UINT32 i,j;
INT32 currentSMS = 0, maxSMS = 0, ack=0;
INT32 ToBeAcked;

M2MB_RESULT_E SMS_del;

static UINT32  curEvBits;

extern M2MB_OS_EV_HANDLE sms_evHandle;
extern M2MB_SMS_HANDLE h_sms_handle;

//extern M2MB_OS_SEM_HANDLE taskSemHandle;

extern INT8 smsParsingTaskID;

/* Local function prototypes ====================================================================*/
/* Static functions =============================================================================*/
static int toggle_gpio(void)
{
  INT32 ret;
  INT32 gpio_fd;

  /* Open file descriptor for GPIO*/
  gpio_fd = m2mb_gpio_open( "/dev/GPIO" GPIO_PIN, 0 );
  if( gpio_fd != -1 )
  {
    /* SET GPIO as output */
    ret = m2mb_gpio_ioctl( gpio_fd, M2MB_GPIO_IOCTL_SET_DIR, M2MB_GPIO_MODE_OUTPUT );
    if ( ret == -1 ) {
      AZX_LOG_CRITICAL("Failed to set GPIO as output errno: %d\r\n", ret);
      m2mb_gpio_close(gpio_fd);
      return ret;
    }

    m2mb_gpio_ioctl( gpio_fd, M2MB_GPIO_IOCTL_SET_PULL, M2MB_GPIO_PULL_UP );
    m2mb_gpio_ioctl( gpio_fd, M2MB_GPIO_IOCTL_SET_DRIVE, M2MB_GPIO_MEDIUM_DRIVE );
  }
  else
  {
    AZX_LOG_CRITICAL("Failed to open GPIO file descriptor!\r\n");
    return gpio_fd;
  }
  // Set GPIO low, wait 200ms, then set high
  AZX_LOG_DEBUG("Write gpio %d\r\n", M2MB_GPIO_LOW_VALUE);
  m2mb_gpio_write( gpio_fd, M2MB_GPIO_LOW_VALUE );
  azx_sleep_ms(200);
  AZX_LOG_DEBUG("Write gpio %d\r\n", M2MB_GPIO_HIGH_VALUE);
  m2mb_gpio_write( gpio_fd, M2MB_GPIO_HIGH_VALUE );
  // Close GPIO when done
  m2mb_gpio_close(gpio_fd);
  return 0;
}
/* Global functions =============================================================================*/

void Sms_Callback(M2MB_SMS_HANDLE h, M2MB_SMS_IND_E sms_event, UINT16 resp_size, void *resp_struct, void *myUserdata)
{
  (void)resp_size;
  (void)resp_struct;
  (void)myUserdata;

  M2MB_OS_RESULT_E res;

  switch(sms_event)
  {


  case M2MB_SMS_SEND_RESP:
  {
    AZX_LOG_INFO("M2MB_SMS_SEND_RESP Callback\r\n\n");

    M2MB_SMS_SEND_RESP_T *resp = (M2MB_SMS_SEND_RESP_T*)resp_struct;
    AZX_LOG_INFO("Send resp msg ID %d \r\n", resp->messageRef);
    res = m2mb_os_ev_set(sms_evHandle, EV_SMS_SEND, M2MB_OS_EV_SET);
    if(M2MB_OS_SUCCESS != res)
    {
      AZX_LOG_ERROR("Event bits setting failure: %d\r\n", res);
    }
    break;
  }

#if 0
  case M2MB_SMS_WRITE_RESP:
  {
    AZX_LOG_INFO("M2MB_SMS_WRITE_RESP Callback\r\n\n");

    M2MB_SMS_WRITE_RESP_T *resp = (M2MB_SMS_WRITE_RESP_T*)resp_struct;
    AZX_LOG_INFO("PDU index written is %ld \r\n", resp->index);
    globalIndex= resp->index;

    res = m2mb_os_ev_set(sms_evHandle, EV_SMS_WRITE, M2MB_OS_EV_SET);
    if(M2MB_OS_SUCCESS != res)
    {
      AZX_LOG_ERROR("Event bits setting failure: %d\r\n", res);
    }
    break;
  }

#endif

  case M2MB_SMS_READ_RESP:
  {
    pdu_struct packet;
    static char number[32];
    static char message[SMS_PDU_MAX_SIZE]; //more bytes needed due to HEX_raw outtput format
    INT32 len;

    AZX_LOG_INFO("M2MB_SMS_READ_RESP Callback\r\n\n");

    M2MB_SMS_READ_RESP_T *resp = (M2MB_SMS_READ_RESP_T*)resp_struct;
    AZX_LOG_DEBUG("PDU index read is %ld \r\n", resp->index);
    AZX_LOG_DEBUG("PDU size is %d \r\n", resp->pdu_size);
    AZX_LOG_INFO("SMS tag %s \r\n", tag[resp->tag]);
    AZX_LOG_INFO("SMS format %s \r\n", format[resp->format]);

    memset(message,0, sizeof(message));
    len = azx_pdu_decode(resp->pdu, resp->pdu_size, &packet, number, message);


    AZX_LOG_DEBUG("Code type: %d\r\n", packet.tp_dcs);
    AZX_LOG_DEBUG("Sender type: %u\r\n", packet.sender.type);
    AZX_LOG_DEBUG("Msg len: %u\r\n", packet.msg.len);
    AZX_LOG_DEBUG("Msg bytes: %u\r\n", packet.msg.bytes);
    AZX_LOG_DEBUG("Protocol ID: %d\r\n", packet.tp_pid);

    AZX_LOG_INFO("Msg date %u/%u/%u %u:%u:%u (timezone: %.0f)\r\n", packet.year, packet.month, packet.date, packet.hour, packet.min, packet.sec, packet.tz / 4.0);

    AZX_LOG_INFO("Received SMS, content (len: %d): <<%s>>\r\n", len, message);
    AZX_LOG_INFO("Sender: %s\r\n", number);

    /* Explicitly tag the message as READ */
    m2mb_sms_set_tag(h, resp->index, M2MB_SMS_TAG_MT_READ);

    //RoGa: send a message to sms parsing task
    azx_tasks_sendMessageToTask( smsParsingTaskID, (INT32)resp->index , (INT32)message, (INT32)number);

#if 0
    res = m2mb_os_ev_set(sms_evHandle, EV_SMS_READ, M2MB_OS_EV_SET);
    if(M2MB_OS_SUCCESS != res)
    {
      AZX_LOG_ERROR("Event bits setting failure: %d\r\n", res);
    }
#endif

    break;
  }


  case M2MB_SMS_INCOMING_IND:
  {
    M2MB_SMS_INCOMING_T *resp = (M2MB_SMS_INCOMING_T*)resp_struct;

    AZX_LOG_INFO("M2MB_SMS_INCOMING_IND Callback\r\n\n");

    globalIndex=resp->index;

    /*initiate a read of the message*/
    m2mb_sms_read(h, globalIndex);

    break;
  }

  case M2MB_SMS_DELETE_RESP:
  {

    M2MB_SMS_GENERIC_RESP_T *resp = (M2MB_SMS_GENERIC_RESP_T*)resp_struct;

    AZX_LOG_INFO("M2MB_SMS_DELETE_RESP Callback\r\n\n");

    AZX_LOG_INFO("Delete resp is %d \r\n", resp->response);
    SMS_del=resp->response;

    if(resp->response == M2MB_RESULT_SUCCESS)
    {
      memoryFullFlag = 0;
    }
    res = m2mb_os_ev_set(sms_evHandle, EV_SMS_DELETE, M2MB_OS_EV_SET);
    if(M2MB_OS_SUCCESS != res)
    {
      AZX_LOG_ERROR("Event bits setting failure: %d\r\n", res);
    }

    break;
  }

  case M2MB_SMS_MEMORY_FULL_IND:
  {
    AZX_LOG_INFO("M2MB_SMS_MEMORY_FULL_IND Callback\r\n\n");

    M2MB_SMS_MEMORY_FULL_T *resp = (M2MB_SMS_MEMORY_FULL_T*)resp_struct;
    AZX_LOG_INFO( "## MEMORY FULL: format %d, storage %d \r\n",resp->format, resp->storage);
    memoryFullFlag = 1;
    res = m2mb_os_ev_set(sms_evHandle, EV_SMS_MEM_FULL, M2MB_OS_EV_SET);

    if(M2MB_OS_SUCCESS != res)
    {
      AZX_LOG_ERROR("Event bits setting failure: %d\r\n", res);
    }
    break;
  }


  default:
  {
    AZX_LOG_INFO("SMS event %d\r\n", sms_event);
  }
  break;
  }
}





INT32 msgSMSparse(INT32 type, INT32 param1, INT32 param2)
{

M2MB_RESULT_E retVal;
M2MB_OS_RESULT_E osRes;
M2MB_OS_TASK_HANDLE taskHandle = m2mb_os_taskGetId();
MEM_W  name = 0;
CHAR atCom[100] ;
CHAR rsp[100];
CHAR *message;
CHAR *sender;
UINT32 smsIndex;
int gpio_retval = 0;
UINT8 *pdu_provv, *pdu;
INT32 pdulen;

    message = (CHAR*)param1;
    sender = (CHAR*)param2;
    smsIndex = (UINT32)type;


	m2mb_os_taskGetItem( taskHandle, M2MB_OS_TASK_SEL_CMD_NAME, &name, NULL );
	//AZX_LOG_INFO("\r\nInside \"%s\" user callback function. Received parameters from MAIN: %d %d %d\r\n", (char*) name, type, param1, param2);

	azx_sleep_ms(1000);
	memset(atCom,0,sizeof(atCom));
  /*
    Code additions
  */
  if(strncmp(message, WAKE_WORD, strlen(message)) == 0) {
    // Wake with GPIO
	 gpio_retval = toggle_gpio();
    //Send an SMS "ACK" or "NACK"
	if(SEND_ACK_NACK) {
		//strncpy(rsp, "ACK", sizeof(rsp) - 1);
      if (gpio_retval == 0) {
        strncpy(rsp, "ACK", sizeof(rsp) - 1);
      }
      else {
        strncpy(rsp, "NACK", sizeof(rsp) - 1);
      }
			pdu_provv = (UINT8*) m2mb_os_malloc(SMS_PDU_MAX_SIZE * sizeof (UINT8));
			pdu = (UINT8*) m2mb_os_malloc(SMS_PDU_MAX_SIZE * sizeof (UINT8));

			//sprintf(PhoneNumber, SENDER_NUMBER); //remember to store the phone number in international format

			memset(pdu_provv, 0x00, SMS_PDU_MAX_SIZE);
			//pdulen = azx_pdu_encode(PhoneNumber, (CHAR*) MESSAGE, pdu_provv, PDU_DCS_7);
			pdulen = azx_pdu_encode(sender, (CHAR*) rsp, pdu_provv, PDU_DCS_7);
			/* pdulen will be changed after the pdu is converted into a binary stream */
			pdulen = azx_pdu_convertZeroPaddedHexIntoByte(pdu_provv, pdu, pdulen);

			//AZX_LOG_INFO("\r\nSending message <%s>...\r\n", MESSAGE);
			retVal = m2mb_sms_send(h_sms_handle, pdulen, pdu);
			if (retVal == M2MB_RESULT_SUCCESS)
			{
				AZX_LOG_INFO(" m2mb_sms_send() - succeeded\r\n");
			}
			else
			{
				AZX_LOG_ERROR("m2mb_sms_send() - failure\r\n");
			}

			/*Wait for sms send event to occur (released in Sms_Callback function) */
			osRes = m2mb_os_ev_get(sms_evHandle, EV_SMS_SEND, M2MB_OS_EV_GET_ANY_AND_CLEAR, &curEvBits, M2MB_OS_MS2TICKS( 40000 ));
			if (osRes == M2MB_OS_SUCCESS)
			{
				AZX_LOG_INFO( "SMS correctly sent!\r\n" );
			}
			else if (osRes == M2MB_OS_NO_EVENTS)
			{
				AZX_LOG_ERROR("SMS not sent! - exit for timeout\r\n" );
			}
			else
			{
				AZX_LOG_ERROR("SMS not sent! - unexpected value %d returned\r\n", osRes);
			}

		}
  }
  // Delete all incoming SMS messages
  if (DELETE_SMS){
    AZX_LOG_DEBUG("\r\nSMS %d can be deleted\r\n", smsIndex);
    m2mb_sms_delete(h_sms_handle, smsIndex);
    osRes = m2mb_os_ev_get(sms_evHandle, EV_SMS_DELETE, M2MB_OS_EV_GET_ANY_AND_CLEAR, &curEvBits, M2MB_OS_MS2TICKS( 5000 ));
    if (osRes == M2MB_OS_SUCCESS)
    {
      AZX_LOG_INFO( "SMS correctly deleted!\r\n" );
    }
    else if (osRes == M2MB_OS_NO_EVENTS)
    {
      AZX_LOG_ERROR("SMS not deleted! - exit for timeout\r\n" );
    }
  }
  /*
    End code additions
  */

  return 0;
}
