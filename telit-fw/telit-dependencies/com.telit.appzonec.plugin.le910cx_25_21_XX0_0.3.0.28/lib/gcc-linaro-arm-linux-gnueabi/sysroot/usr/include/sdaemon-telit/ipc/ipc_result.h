#ifndef _IPC_RESULT_H_
#define _IPC_RESULT_H_

typedef enum
{
 	IPC_RESULT_ID_NONE,
	IPC_RESULT_ID_SUCCESS,
	IPC_RESULT_ID_WRONG_COMMAND,
	IPC_RESULT_ID_INVALID_ARGUMENT,
	IPC_RESULT_ID_NOT_INITAILIZED,
	IPC_RESULT_ID_BAD_CONNECTION,
	IPC_RESULT_ID_MALFORMED_DATA,
	IPC_RESULT_ID_NOT_IMPLEMENTED,
	IPC_RESULT_ID_FAILED_OPERATION,
  IPC_RESULT_ID_MISMATCHED_CONDITION,
	IPC_RESULT_ID_USER_DEFINED,
}IpcResultId;

typedef union 
{
  struct
  {
    bool ipv4_connected;
    bool ipv6_connected;
    int profile_id;
  }wwan_connection_status;

  struct
  {
    char subnet_mask[32];
  }wwan_subnet_mask;

  struct
  {
    char ip_address[32];
  }wwan_ip_address;

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
    int dummy;
  }wwan_config;

  struct
  {
    bool ipv4_enabled;
    bool ipv6_enabled;
  }wwan_network_layer_protocol_enabled_status;

  struct
  {
    char id[128];
  }device_model_id;

  struct
  {
    char mac[32];
  }wifi_mac;

  struct
  {
    size_t list_size;
    struct
    {
      char mac[32];
      char ip[32];
      int rx_packets;
      int tx_packets;
      char host_name[64];
    }wifi_station[20];
  }wifi_ap_connected_station_list;

/*TODO : sample code to check extendability for customers*/
}IpcResultParam;

typedef struct
{
  IpcResultId id;
  IpcResultParam param;
}IpcResult;


#endif /*_IPC_RESULT_H_*/
