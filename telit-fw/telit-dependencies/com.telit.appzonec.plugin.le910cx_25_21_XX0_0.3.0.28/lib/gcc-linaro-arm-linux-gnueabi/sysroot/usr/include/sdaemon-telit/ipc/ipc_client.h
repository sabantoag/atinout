#ifndef _PBP_IPC_IPCCLIENT_H_
#define _PBP_IPC_IPCCLIENT_H_

#include "ipc/ipc_result.h"
#include "ipc/ipc_event.h"
#include "ipc/ipc_message.h"
#include "ipc/ipc_async_result.h"

#ifdef __cplusplus

#include <vector>

#include "common/common_header.h"
#include "util/socket_client.h"
#include "util/socket_server.h"
#include "util/thread.h"
#include "util/mutex.h"
#include "util/condition.h"

using pbp::util::SocketClient;
using pbp::util::SocketServer;
using pbp::util::Socket;
using pbp::util::Thread;
using pbp::util::Mutex;
using pbp::util::Condition;

namespace pbp {
namespace ipc {

class IpcClient 
{
public:
	IpcClient();
	~IpcClient();

	bool SetLocalPath(ipc_event_cb event_cb = NULL, ipc_async_result_cb async_cb = NULL, string client_path_prefix = IPC_CLIENT_DFT_PREFIX, string server_path = IPC_SERVER_DFT_PATH);

  IpcResult SendMessage(IpcMessage& msg);

	bool EventCb(int sfd, int cfd, string path, void *data, size_t size);
	bool AsyncCb(int sfd, int cfd, string path, void *data, size_t size);

	ipc_event_cb event_cb_;
  ipc_async_result_cb async_cb_;
	std::vector<string> msg_v_;
	up<SocketClient> client_;
	up<SocketServer> event_listener_;
	up<SocketServer> async_listener_;
	IpcResult result_;
  Mutex send_mutex_;

	bool is_local_;
	string client_path_;
	string server_path_;
	string event_path_;
	string async_path_;

};

}}
#endif


/*function for c binaries*/
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
//#include "ipc_result_id.h"

typedef void* ipc_client_h;

ipc_client_h create_ipc_client(char* socket_path, ipc_event_cb cb);
bool destroy_ipc_client(ipc_client_h h);
IpcResult ipc_client_send_msg(ipc_client_h h, IpcMessage* msg); 
#ifdef __cplusplus
}
#endif



#endif /*_PBP_IPC_IPCCLIENT_H_*/
