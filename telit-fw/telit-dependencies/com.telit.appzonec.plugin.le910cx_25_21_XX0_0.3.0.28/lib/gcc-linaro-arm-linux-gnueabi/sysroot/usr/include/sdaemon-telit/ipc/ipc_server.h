/*!
 *  @author ilhyeokpa
 *  @date 2019/10/30
 */


#ifndef _IPC_IPC_SERVER_H_
#define _IPC_IPC_SERVER_H_

#include <vector>
#include "common/common_header.h"
#include "util/socket.h"


#include "util/socket_server.h"
#include "util/socket_server_runner.h"
#include "util/socket_client.h"
#include "util/mutex.h"
#include "util/thread.h"
#include "ipc/ipc_message.h"
#include "ipc/ipc_result.h"
#include "ipc/ipc_event.h"
#include "ipc/ipc_response.h"

using pbp::util::Thread;
using pbp::util::Mutex;
using pbp::util::Socket;
using pbp::util::SocketServer;
using pbp::util::SocketClient;
using pbp::util::SocketServerRunner;

namespace pbp {
namespace ipc {

/*!
 *  @brief Server side API on IPC for API users
 *
 */

class IpcServer
{
public:
	typedef std::function<IpcResponse(IpcMessage&)> CmdCb;
  typedef std::function<bool(int,int,string,void *data, size_t length)> DataCb;

	IpcServer();
	~IpcServer();

  /*!
   *  @brief Add AF_UNIX socket to listen request from client
   *  @param [in] path: default socket path will be /var/run/ipc_server.sock 
   *  @param [in] cb: Callback called when client's message arrived.
   */
	bool AddLocalPath(string path = IPC_SERVER_DFT_PATH , DataCb cb = NULL);

  /*!
   *  @note Do not usage this method
   *  @todo Implement this method fully to support network socket based IPC
   */
	bool AddExternalPath(string path);

  /*! 
   *  @brief Set callback function foe each message ID
   */
	bool SetMsgCb(IpcMessageId msg_id, CmdCb cb);

  /*!
   *  @note Do not use this method
   *  @todo Verify this method's functionality
   */
	bool SendEvent(IpcEvent& event);

  /*!
   *  @note Do not use this method
   *  @todo Verify this method's functionality
   */
  bool SendAsyncResult(int64_t id, IpcResult& result);

private:
  struct ServerInfo 
  {
    Socket *server;
    DataCb cb;
    std::list<string> evt_path_l;
  };

  struct AsyncReqInfo
  {
    string from;
    IpcMessageId msg_id;
    struct timeval req_time;
  };

  struct AsyncHandlerInfo
  {
    int server_fd;
    string async_path;
  };

  std::map<int64_t,AsyncReqInfo> async_req_info_m_;
  std::map<string, AsyncHandlerInfo> async_handler_m_;
	std::map<IpcMessageId,CmdCb> msg_cb_m_;

  std::list<ServerInfo> server_l_;
	up<SocketServer> ext_server_;
	Mutex evt_mutex_;

  up<SocketServerRunner> server_runner_;

	string GetPathType(string path);
  IpcResultId AddAsyncListenerPath(int sfd, string client_path, string async_handler_path);
  IpcResultId RemoveAsyncListenerPath(string client_path);

	IpcResultId AddEventPath(int sf, string event_path);
	IpcResultId RemoveEventPath(int sf, string event_path);
	bool DefaultCb(int sf, int cf, string path, void *data, size_t size);
	void SendResult(int server_fd, int client_fd, string client_path, IpcResultId ret_id);
	void SendResult(int server_fd, int client_fd, string client_path, IpcResult& result);

};

}}

#endif /*_IPC_IPC_SERVER_H_*/
