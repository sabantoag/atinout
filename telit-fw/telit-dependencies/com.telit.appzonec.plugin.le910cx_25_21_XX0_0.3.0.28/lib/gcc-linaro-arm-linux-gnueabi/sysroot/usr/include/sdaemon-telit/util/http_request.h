#ifndef _UTIL_HTTP_REQUEST_H_
#define _UTIL_HTTP_REQUEST_H_

#include <list>
#include <memory>
#include <curl/curl.h>
#include "util/buffer.h"
#include "common/common_header.h"


namespace pbp {
namespace util {
	class HttpRequest
	{
	public:
		enum class Method : uint8_t 
		{
			NONE,
			GET,
			POST,
		};

		HttpRequest();
		~HttpRequest();
		void SetUserAgent(string user_agent){user_agent_ = user_agent;}
		void SetUrl(string url){url_ = url;}
		void SetMethod(Method method, string post_field = "");
		void SetHeaders(std::list<string> header_l){header_l_ = header_l;}
		Result Start(Buffer &result);

	private:
		CURL *curl_;
		struct curl_slist *cslist_;
		string post_field_;
		Method method_;
		string user_agent_;
		string url_;
		Buffer *out_result_;
		std::list<string> header_l_;
		size_t WriteFuntion(void*ptr , size_t size);
		static size_t CurlWritefunction( void *ptr, size_t size, size_t nmemb, HttpRequest* owner);
		friend size_t CurlWritefunction( void *ptr, size_t size, size_t nmemb, HttpRequest* owner);
	};
}}

#endif /*_UTIL_HTTP_REQUEST_H_*/
