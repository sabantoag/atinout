#ifndef _IPC_MESSAGE_H_
#define _IPC_MESSAGE_H_

#include "ipc_types.h"

typedef enum 
{
  IPC_MSG_ID_NONE,
  IPC_MSG_ID_SEND_PING,

  IPC_MSG_ID_ATCMD_ICMWANCFG,
  IPC_MSG_ID_GET_WIFI_AP_CONNECTED_STATION_LIST,
  IPC_MSG_ID_GET_WIFI_MAC,
  IPC_MSG_ID_ATCMD_USBCFG,
  IPC_MSG_ID_START_DHCP_SERVER,
  IPC_MSG_ID_STOP_DHCP_SERVER,
  IPC_MSG_ID_GET_MOBILEAP_LAN_CONFIG,

  IPC_MSG_ID_CONNECT_TO_WWAN,
  IPC_MSG_ID_DISCONNECT_FROM_WWAN,
  IPC_MSG_ID_SET_WWAN_AUTO_CONNECTION_STATUS,
  IPC_MSG_ID_GET_WWAN_AUTO_CONNECTION_STATUS,
  IPC_MSG_ID_SET_WWAN_ROAMING_STATUS,
  IPC_MSG_ID_GET_WWAN_ROAMING_STATUS,
  IPC_MSG_ID_GET_WWAN_CONFIG,
  IPC_MSG_ID_GET_WWAN_CONNECTION_STATUS,
  IPC_MSG_ID_GET_WWAN_IP_ADDRESS,
  IPC_MSG_ID_GET_WWAN_SUBNET_MASK,
  IPC_MSG_ID_SET_WWAN_NETWORK_LAYER_PROTOCOL_ENABLED_STATUS,
  IPC_MSG_ID_GET_WWAN_NETWORK_LAYER_PROTOCOL_ENABLED_STATUS,
  IPC_MSG_ID_START_WWAN_NETWORK_SCAN_ASYNC,
  IPC_MSG_ID_GET_WWAN_NETWORK_SIGNAL_INFO_ASYNC,
  IPC_MSG_ID_GET_WWAN_NETWORK_ERROR_RATE_ASYNC,
  IPC_MSG_ID_GET_WWAN_NETWORK_CELL_LOCATION,
  IPC_MSG_ID_GET_WWAN_NETWORK_CELL_LOCATION_ASYNC,
  IPC_MSG_ID_GET_WWAN_NETWORK_SYS_INFO_ASYNC,

  IPC_MSG_ID_GET_DEVICE_MODEL_ID,

  IPC_MSG_ID_SEND_NOTIFICATION_TO_MODEM,

  IPC_MSG_ID_GET_SMS_ROUTE_LIST,
  IPC_MSG_ID_SET_SMS_ROUTE,

  IPC_MSG_ID_GET_WWAN_CELL_LOCATION,

  IPC_MSG_ID_RUN_IPERF_SERVER,
  IPC_MSG_ID_RUN_IPERF_CLIENT,
  IPC_MSG_ID_STOP_IPERF_SERVER,
  IPC_MSG_ID_STOP_IPERF_CLIENT,

  IPC_MSG_ID_LAST,
  /*DON'T ADD msg id on below this line*/

  /*internal only*/
  IPC_MSG_ID_ADD_EVENT_LISTENER , 
  IPC_MSG_ID_REMOVE_EVENT_LISTENER ,
  IPC_MSG_ID_ADD_ASYNC_LISTENER , 
  IPC_MSG_ID_REMOVE_ASYNC_LISTENER ,

}IpcMessageId;




typedef union 
{
  struct
  {
    char path[512];
  }add_event_listener;

  struct
  {
    char path[512];
  }remove_event_listener;

  struct
  {
    char path[512];
  }add_async_listener;

  struct
  {
    char path[512];
  }remove_async_listener;


  struct
  {
    char start_ip[32];
    char end_ip[32];
    int lease_time;
  }start_dhcp_server;

  struct
  {
    int profile_id;
    IpVersion ip_version; 
    WwanTech wwan_tech;
  }connect_to_wwan;

  struct
  {
    bool enabled;
  }wwan_auto_connection_status;

  struct
  {
    bool enabled;
  }wwan_roaming_status;

  struct
  {
    IpVersion ip_version; 
    bool enabled;
  }wwan_network_layer_protocol_enabled_status;

  struct
  {
    IpVersion ip_version;
  }disconnect_from_wwan;

  struct
  {
    char msg[8192];
  }send_notification_to_modem;

}IpcMessageParam;

typedef struct
{
  IpcMessageId id;
  IpcMessageParam param;
}IpcMessage;


#endif /*_IPC_MESSAGE_H_*/
