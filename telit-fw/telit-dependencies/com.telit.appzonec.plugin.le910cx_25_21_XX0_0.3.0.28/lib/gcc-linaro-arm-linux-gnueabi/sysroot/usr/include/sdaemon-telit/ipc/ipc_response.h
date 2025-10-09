#ifndef _PBP_IPC_IPCSERVERRESULT_H_
#define _PBP_IPC_IPCSERVERRESULT_H_

#include "ipc_result.h"

namespace pbp {
namespace ipc {

struct IpcResponse
{
  IpcResponse()
  {
    result.id = IPC_RESULT_ID_NONE; 
    async_id = -1;
  }

  IpcResponse(IpcResultId ret_id)
  {
    result.id = ret_id; 
    async_id = -1;
  }

  IpcResult result; 
  int64_t async_id;
};


}}
 

#endif /*_PBP_IPC_IPCSERVERRESULT_H_*/
