#ifndef _IPC_ASYNC_RESULT_H_
#define _IPC_ASYNC_RESULT_H_

#include <stdint.h>
#include "ipc_message.h"
#include "ipc_result.h"

typedef struct
{
  IpcMessageId id;
  int64_t index;
  IpcResult result;
}IpcAsyncResult;

typedef void(*ipc_async_result_cb)(IpcAsyncResult*);

#endif /*_IPC_ASYNC_RESULT_H_*/
