#ifndef _PBP_UTIL_BUFFER_H_
#define _PBP_UTIL_BUFFER_H_

#include <string>
#include <map>
#include "common/common_header.h"

namespace pbp {
namespace util {

class Buffer {
public:
  Buffer();
  Buffer(size_t capacity);
  ~Buffer();

  void Clear();
  bool Copy(uint8_t *data, size_t length);
  uint8_t* data();
  size_t length();
  size_t size();
  size_t capacity();

private:
  string data_;
  size_t length_;
  size_t offset_;
};

}}

#endif /*_PBP_UTIL_BUFFER_H_*/
