#ifndef _PBP_UTIL_STRINGUTIL_H_
#define _PBP_UTIL_STRINGUTIL_H_

#include "common/common_header.h"
#include <vector>

namespace pbp {
namespace util {

class StringUtil
{
public:
	static std::vector<string> Split(const string& value , char spliter);
};

}}

#endif /*_PBP_UTIL_STRINGUTIL_H_*/
