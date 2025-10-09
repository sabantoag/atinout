#ifndef _PBP_UTIL_SSLWRAPPER_H_
#define _PBP_UTIL_SSLWRAPPER_H_

/*!
 *  https://b.luavis.kr/server/tls-1.3
 */

#include <vector>
#include "common/common_header.h"
#include "util/buffer.h"

namespace pbp {
namespace util {

#if defined(CONFIG_SUPPORT_WOLF_SSL) && defined(CONFIG_SUPPORT_OPEN_SSL)
#error "You cannot use opessl and wolfssl simultaneously, please pick one of them"
#endif

#ifdef CONFIG_SUPPORT_WOLF_SSL
class WolfSslImpl;
typedef WolfSslImpl SslImpl;
#define SSLIMPL WolfSslImpl 
#elif CONFIG_SUPPORT_OPEN_SSL
class OpenSslImpl;
typedef OpenSslImpl SslImpl;
#define SSLIMPL OpenSslImpl
#else
class StubSslImpl;
typedef StubSslImpl SslImpl;
#endif

class SslWrapper
{
public:
  enum class Method
  {
    NONE,
    SSL_3,
    TLS_1_0,
    TLS_1_1,
    TLS_1_2,
    TLS_1_3,
    DTLS_1_0,
    DTLS_1_2,
    LAST,
  };

  enum class FileType
  {
    NONE,
    PEM,
    DER,
    LAST,
  };

  SslWrapper(bool server, Method method);
  ~SslWrapper();

  static FileType GetCertType(Buffer& buf);
  static FileType GetKeyType(Buffer& buf);

  Result SetRootCaFile(string root_ca, FileType file_type = SslWrapper::FileType::PEM);
  Result SetCertAndKeyFile(string cert, string key, FileType cert_file_type = FileType::PEM, FileType key_file_type = FileType::PEM);

  bool Accept(int fd);
  bool Connect(int fd);
  bool RemoveClient(int fd);
  ssize_t Send(int fd, const void *buf, size_t size);
  ssize_t Send(int fd, void *buf, size_t size);
  ssize_t Recv(int fd, void *buf, size_t size);
  bool SetCipherLists(std::vector<string> cipher_v);
  SslImpl *ssl_impl_;
private:
};

}}

#endif /*_PBP_UTIL_SSLWRAPPER_H_*/
