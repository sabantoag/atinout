#include "common/common_header.h"
#include <functional>

#ifndef ANDROID

#ifndef __GXX_RTTI
#error please add -frtti flag or remove -fno-rtti flag
#endif

#endif

namespace pbp {
namespace util {
	class Misc
	{
	public:
#ifndef ANDROID	
		template<typename T, typename... U>
		static size_t GetStdFunctionAddress(std::function<T(U...)> func)
		{
			typedef T(FuncType)(U...);
			FuncType** ptr = func.template target<FuncType*>();
			return (size_t) *ptr;
		}
#endif		

		static int StoiWithException(string value, bool& exception);
		static long long StollWithException(string value, bool& exception);
	};

}}
