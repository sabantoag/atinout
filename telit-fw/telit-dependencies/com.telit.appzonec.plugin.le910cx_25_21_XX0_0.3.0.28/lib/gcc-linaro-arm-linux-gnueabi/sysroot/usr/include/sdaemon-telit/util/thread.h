#ifndef _PBP_UTIL_THREAD_H_
#define _PBP_UTIL_THREAD_H_

#include <functional>
#include <thread>
#include "common/common_header.h"

namespace pbp {
namespace util {

class Thread {
public:
  Thread(){}
  ~Thread(){}

  Thread(const Thread& rhs) = delete;

  template <typename T, typename ... Types>
  Result Start(T t, Types ...args)
  {
    thread_ = std::thread(t, args...);
    return Result::SUCCESS;
  }

  Result Join();
  Result Detach();
  bool Joinable(){return thread_.joinable();}

private:
  std::thread thread_;

};
}}

#endif /*_PBP_UTIL_THREAD_H_*/
