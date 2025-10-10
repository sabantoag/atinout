#ifndef _PBP_UTIL_SOCKET_H_
#define _PBP_UTIL_SOCKET_H_

#include "common/common_header.h"
#include "mutex.h"

namespace pbp {
namespace util {




class SocketClient;
class SocketServer;

/**
  @brief handle linux socket
  @author prock
  @details Implement linux socket as class
*/
class Socket
{
public:

  /*!
   *  @brief linux socket domain  
   *  @todo : add more domain such as ipv6 , etc...
   */
  enum class Domain : uint8_t
  {
    INTERNAL,
    EXTERNAL_IPV4,
    EXTERNAL_IPV6,
    NETLINK,
  };

  /**
    @brief linux socket type
   */
  enum class Protocol : uint8_t
  {
    NONE,
    TCP,
    UDP,
    RAW,
  };

  enum IoFlags 
  {
    IO_FLAGS_PEEK = 0x1
  };

  struct TcpInfo
  {
    int dummy;
  };

  struct SocketOption
  {
    int snd_buf_size;
    int rcv_buf_size;

    SocketOption()
    {
      snd_buf_size = 0;
      rcv_buf_size = 0;
    }
  };

  /*!
   * @brief Socket Constructor
   * @param [in] path : Path of this socket , in case of unix socket , path could be file path such as /data/temp.socket , in case of network socket , path could be xxx.xxx.xxx.xxx:xxxx
   * @param [in] protocol : socket type , please refer to Socket::Protocol
   * @param [in] domain : socket domain , please refer to Socket::Domain
   */
  Socket(string path , Protocol protocol, Domain domain, SocketOption socket_option = {}); 

  Socket(int fd, Protocol protocol, Domain domain);

  /**
    @brief Socket Destructor
  */
  ~Socket();

  /**
    @brief Get type of socket
    @see Socket::TypeE
  */
  Protocol protocol(){return protocol_;}

  Domain  domain() {return domain_;}

  /*!
   *  @brief Make none block socket
   */
  Result SetNonBlock(bool on);

  /**
    @brief Make the socket as no delay when handling tcp packet
  */
  Result SetTCPNoDelay(bool on);

  /*!
   *  @brief Turn on reuse address option
   */
  Result SetReuseAddress();

  bool Bind(string ip, uint16_t port = 0);
  Result Connect(string dest_path, int timeout_us = 0);
  

  /**
    @brief Send data to certain path through socket
    @param [in] path : destination path
    @param [in] data : data to be sent 
    @param [in] size : data size
    @return Sent size 
  */
  ssize_t SendTo(string path , const void* data, size_t size);
  ssize_t SendTo(string path , void* data, size_t size);
  ssize_t SendTo(string path , string msg); 

  ssize_t SendTo(int fd, const void* data, size_t size);
  ssize_t SendTo(int fd, void* data, size_t size);
  ssize_t SendTo(int fd, string msg);

  ssize_t Send(const void* data , size_t size);
  ssize_t Send(void* data , size_t size);
  ssize_t Send(string msg);

  Result GetIpAndPortByPath(string path, string &ip, int &port);

  Result Listen(int aBackLog);

  ssize_t Recv(void *data, size_t length, int io_flags = 0);
  ssize_t RecvTimedWait(void *data, size_t length, uint64_t time_us, int io_flags = 0);

  bool BindToDevice(string name);
  int Accept(string &out_path);
  bool GetTcpInfo(TcpInfo &tcp_info);

  bool connected(){return connected_;}
  bool IsValid(){return fd_ > 0;}
  const string& path() const { return path_;}

  /**
    @brief Get file descriptor handler of the Socket
    @return File descriptor handler
  */
  int fd() const {return fd_;}

protected:
  bool connected_;
  string path_;
  Domain domain_;
  SocketOption socket_option_;

private:
  static int nl_pid_index;

  int fd_;
  Protocol protocol_;
  bool is_owner_;
  Mutex mutex_;

  Result Init();
  bool IsMulticast(string ip);

  friend class SocketClient;
  friend class SocketServer;
};

}}

#endif /*_PBP_UTIL_SOCKET_H_*/
