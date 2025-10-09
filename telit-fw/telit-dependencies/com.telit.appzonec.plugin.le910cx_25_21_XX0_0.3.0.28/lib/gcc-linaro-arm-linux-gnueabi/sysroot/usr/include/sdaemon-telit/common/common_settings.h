#ifndef _COMMON_COMMON_SETTINGS_H_
#define _COMMON_COMMON_SETTINGS_H_


#define DATA_PROFILE_START_IDX 1
#define DATA_PROFILE_END_IDX 24

#define WPA_SOCKET_DIR_PATH "/var/run"
#define WPA_SUPPLICANT_GLOBAL_IFACE "wpa-global"
//#define WPA_SUPPLICANT_CLIENT_IFACE "/var/run/wpa-client"

#define WPA_SUPPLICANT_P2P_IFACE_NAME "p2p-dev-wlan0"
#define WPA_SUPPLICANT_WLAN_IFACE_NAME "wlan0"

#define HOSTAPD_GLOBAL_IFACE "hostapd/wlan0"

#ifdef CONFIG_BASEMACHINE_SDXPRAIRIE
#define DNSMASQ_LEASE_FILE "/var/run/data/dnsmasq.leases"
#elif CONFIG_BASEMACHINE_MDM9607
#define DNSMASQ_LEASE_FILE "/var/lib/misc/dnsmasq.leases"
#else
#define DNSMASQ_LEASE_FILE "/var/lib/misc/dnsmasq.leases"
#endif
#define PERSISTENT_CONFIG_FILE_PATH "/data/persistent_data.conf"

#define IPC_SERVER_DFT_PATH "/var/run/ipc_server.sock"
#define IPC_CLIENT_DFT_PREFIX "/var/run"

#endif /*_COMMON_COMMON_SETTINGS_H_*/
