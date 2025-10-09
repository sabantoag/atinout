#ifndef _PBP_MQTT_SELF_MQTT_IMPL_H_
#define _PBP_MQTT_SELF_MQTT_IMPL_H_

#include <signal.h>
#include <sys/time.h>
#include <list>

#include "common/common_header.h"
#include "mqtt/mqtt_wrapper.h"
#include "util/mutex.h"
#include "util/thread.h"
#include "util/queue.h"
#include "util/socket_client.h"
#include "util/ssl_wrapper.h"
#include "util/network_manager.h"
#include "util/event_dic.h"

using pbp::util::Thread;
using pbp::util::SocketClient;
using pbp::util::Socket;
using pbp::util::Mutex;
using pbp::util::Condition;
using pbp::util::SslWrapper;
using pbp::util::Queue;
using pbp::util::NetworkManager;
using pbp::util::EventDic;

namespace pbp {
namespace mqtt {

using Prop = MqttWrapper::Property;
using MsgType = MqttWrapper::MessageType;
using PairedString = MqttWrapper::PairedString;

class SelfMqttImpl 
{
private:
  struct AckEvent
  {
    MqttWrapper::MessageType type;
    MqttWrapper::ConnectAck con_ack;
    MqttWrapper::SubscriptionAck sub_ack;
    MqttWrapper::UnsubscriptionAck uns_ack;
    uint16_t message_id;

    AckEvent()
    {
      type = MqttWrapper::MessageType::RESERVED;
      message_id = 0;
    }

  };


  SelfMqttImpl(MqttWrapper* mqtt_wrapper);
  ~SelfMqttImpl();


#if 0
  static void TimerHandler( int sig, siginfo_t *si, void *uc);
  timer_t CreateRtTimer(int sec, int msec, void *user_ptr);
  bool DeleteRtTimer(timer_t timer_id);
#endif  

  void RecvThread();

  MqttWrapper::StatusInfo GetStatusInfo();
  Result StartClient(MqttWrapper::ConnectOption& con_opt, MqttWrapper::ConnectAck* con_ack);
  Result StopClient(MqttWrapper::DisconnectOption *option);
  Result SetPubAckUserProperties(std::list<PairedString>& user_propery_l);
  Result SetPubRecUserProperties(std::list<PairedString>& user_propery_l);
  Result SetPubCompUserProperties(std::list<PairedString>& user_propery_l);

  Result Publish(MqttWrapper::PublishOption &option);
  Result Subscribe(MqttWrapper::SubscribeOption& option, MqttWrapper::SubscriptionAck* sub_ack);
  Result Unsubscribe(MqttWrapper::UnsubscribeOption& option, MqttWrapper::UnsubscriptionAck *uns_ack);
  Result Ping(bool wait_pong = false);
  Result Pong();

  bool inline IsV5() {return con_opt_.protocol == MqttWrapper::Protocol::V5;}
  int GetPacketLength(uint8_t *buf, size_t len);
  int DecodePackets(uint8_t *buf, size_t len);
  int DecodePacket(uint8_t* buf, size_t len);
  int DecodeProperties(uint8_t *buf, size_t len, MqttWrapper::MessageType type, MqttWrapper::Properties& properties);
  Result SendAndWait(uint8_t *p_e, uint8_t *p_s, MqttWrapper::MessageType type, bool retain, uint8_t qos, bool duplicated, int msg_id = -1, void *ret = NULL);
  int EncodeFixedHeader(uint8_t *buf, uint32_t remain_len, MqttWrapper::MessageType type, bool retain, uint8_t qos, bool duplicated);
  int EncodeVbi(uint8_t *buf, uint32_t data);
  int DecodeVbi(uint8_t *buf, size_t size, int& len);
  int EncodeString(uint8_t *buf, string str);
  int DecodeString(uint8_t *buf, string& str);
  int DecodePairedString(uint8_t *buf, PairedString &str);
  inline int EncodeNum(uint8_t *buf, uint16_t len);
  inline uint16_t DecodeNum(uint8_t *buf);
  inline int EncodeData(uint8_t *buf, const uint8_t *data, uint32_t data_len);
  inline int EncodeProperty(uint8_t *buf, PairedString& val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, PairedString& val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, uint32_t val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, uint32_t val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, int32_t val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, int32_t val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, uint16_t val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, uint16_t val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, bool val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, bool val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, string& val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, string& val, Prop idetifier);
  inline int EncodeProperty(uint8_t *buf, Buffer& val, uint8_t idetifier);
  inline int EncodeProperty(uint8_t *buf, Buffer& val, Prop idetifier);

  Result Connect(MqttWrapper::ConnectOption& connect_opt, MqttWrapper::ConnectAck *con_ack);
  Result Disconnect(MqttWrapper::DisconnectOption *option);
  Result PublishResponse(MsgType msg_type, uint16_t message_id, uint8_t reason_code, std::list<PairedString>& user_property_l);
  void EventCb(EventDic &event_dic);

  bool SendAckEvent(MqttWrapper::MessageType type);
  Result StartRecvThread();
  Result StopRecvThread();
  inline uint16_t GetMessageId();
  inline int64_t GetClockTimeUs();

  const int k_max_tx_buf_ = 1024 * 128;
  const int k_max_rx_buf_ = 1024 * 128;
  const uint32_t k_max_publish_buf_size_ = 100000; 
  int keep_alive_sec_;
  int64_t keep_alive_usec_;
  bool thread_started_;
  bool keep_thread_;
  Thread thread_;
  Mutex mutex_;
  Mutex id_mutex_;
  Mutex ping_mutex_;
  Mutex disconnect_mutex_;
  Mutex socket_mutex_;
  Mutex stop_mutex_;
  std::unique_ptr<SocketClient> sc_;
  std::unique_ptr<SslWrapper> ssl_;
  Queue<AckEvent> ack_q_;

  int32_t left_buf_size_;
  int32_t extra_packet_size_;
  uint8_t *tx_buf_;
  bool wait_pong_;
  int64_t pong_recv_time_us_;
  int64_t ping_sent_time_us_;
  int64_t last_packet_sent_time_us_;
  int packet_timeout_sec_;
  int64_t packet_timeout_usec_;
  int event_fd_;
  int message_id_;
  bool stop_calling_;
  bool disconnect_called_;
  int rtc_fd_;
  int timer_fd_;
  timer_t rt_timer_;

  string psm_module_id;
  string debug_msg_;
  MqttWrapper *mqtt_wrapper_;
  MqttWrapper::ConnectOption con_opt_;
  MqttWrapper::DisconnectOption dis_con_opt_;
  MqttWrapper::ConnectStatus con_status_;
  MqttWrapper::DisconnectReason dis_reason_;
  MqttWrapper::DisconnectReasonCode dis_reason_v5_;
  NetworkManager network_manager_;
  std::list<PairedString> pub_ack_user_property_l_;
  std::list<PairedString> pub_rec_user_property_l_;
  std::list<PairedString> pub_rel_user_property_l_;
  std::list<PairedString> pub_comp_user_property_l_;

  struct RecvPublishMsg
  {
    MqttWrapper::PublishMsg pub_msg;
    int64_t recv_time_usec;
    
    RecvPublishMsg(MqttWrapper::PublishMsg &pub_msg)
    {
      this->pub_msg = pub_msg;
      struct timespec ts;
      clock_gettime(CLOCK_MONOTONIC, &ts);
      this->recv_time_usec = (int64_t)(((int64_t)ts.tv_sec * 1000000000ll + ts.tv_nsec)) / 1000;
    }
  };
  std::list<RecvPublishMsg> recv_publish_msg_l;

  friend class MqttWrapper;
};

}}

#endif /*_PBP_MQTT_SELF_MQTT_IMPL_H_*/
