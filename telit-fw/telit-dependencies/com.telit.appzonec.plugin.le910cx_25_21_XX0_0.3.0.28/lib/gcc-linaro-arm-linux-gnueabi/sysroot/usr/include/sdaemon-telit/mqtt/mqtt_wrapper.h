#ifndef _PBP_MQTT_MQTT_WRAPPER_H_
#define _PBP_MQTT_MQTT_WRAPPER_H_

#include <list>
#include <functional>
#include <memory>

#include "common/common_header.h"
#include "util/ssl_wrapper.h"
#include "util/buffer.h"


namespace pbp {
namespace mqtt {

using util::Buffer;
using util::SslWrapper;

class SelfMqttImpl;
typedef SelfMqttImpl MqttImpl;

class MqttWrapper
{
public:
  struct PublishMsg;
  enum class DisconnectReason;
  typedef std::function<void(PublishMsg& msg)> PublishCb;
  typedef std::function<void(MqttWrapper *mqtt_wrapper, DisconnectReason dis_reason)> DisconnectCb;

  enum class Protocol
  {
    NONE,
    V4,
    V5,
  };

  enum class MessageType
  {
    RESERVED = 0, ///Reserved
    CONNECT = 1, ///Client request to connect to Server
    CONNACK = 2, ///Connect Acknowledgment
    PUBLISH = 3, ///Publish message
    PUBACK  = 4, ///Publish Acknoledgment
    PUBREC  = 5, ///Publish Received (assured delivery part 1)
    PUBREL  = 6, ///Publish Received (assured delivery part 2)
    PUBCOMP = 7, ///Publish Complete (assured delivery part 3)
    SUBSCRIBE = 8, ///Client Subscribe request
    SUBACK = 9, ///Subscribe Acknoledgment
    UNSUBSCRIBE = 10, /// Unsubscribe Acknoledgment
    UNSUBACK = 11, /// Unsubscribe Acknoledgment
    PINGREQ = 12, ///PING Request
    PINGRESP = 13, ///PING Response
    DISCONNECT = 14, ///Client is Disconnecting
    AUTH = 15 ///Auth
  };

  enum class ConnectReturnCode 
  { 
    ACCEPTED = 0,
    UNACCEPTABLE_PROTOCOL_VERSION = 1,
    IDENTIFIER_REJECTED = 2,
    SERVER_UNAVAILABLE = 3,
    BAD_USER_NAME_OR_PASSWORD = 4,
    NOT_AUTHORIZED = 5,
    UNKNOWN = 0xFFFF,
  };

  enum class ConnectReasonCode 
  {
    SUCCESS = 0x00, // The Connection is accepted.
    UNACCEPTABLE_PROTOCOL_VERSION = 0x1,
    IDENTIFIER_REJECTED = 0x2,
    SERVER_UNAVAILABLE_V4 = 0x3,
    BAD_USER_NAME_OR_PASSWORD_V4 = 0x4,
    NOT_AUTHORIZED_V4 = 0x5,
    UNSPECIFIED_ERROR = 0x80, // The Server does not wish to reveal the reason for the failure, or none of the other Reason Codes apply.
    MALFORMED_PACKET = 0x81, // Data within the CONNECT packet could not be correctly parsed.
    PROTOCOL_ERROR = 0x82, // Data in the CONNECT packet does not conform to this specification.
    IMPLEMENTATION_SPECIFIC_ERROR = 0x83, // The CONNECT is valid but is not accepted by this Server.
    UNSUPPORTED_PROTOCOL_VERSION = 0x84, // The Server does not support the version of the MQTT protocol requested by the Client.
    CLIENT_IDENTIFIER_NOT_VALID = 0x85, // The Client Identifier is a valid string but is not allowed by the Server.
    BAD_USER_NAME_OR_PASSWORD = 0x86, // The Server does not accept the User Name or Password specified by the Client
    NOT_AUTHORIZED = 0x87, // The Client is not authorized to connect.
    SERVER_UNAVAILABLE = 0x88, // The MQTT Server is not available.
    SERVER_BUSY = 0x89, // The Server is busy. Try again later.
    BANNED = 0x8A, // This Client has been banned by administrative action. Contact the server administrator.
    BAD_AUTHENTICATION_METHOD = 0x8C, // The authentication method is not supported or does not match the authentication method currently in use.
    TOPIC_NAME_INVALID = 0x90, // The Will Topic Name is not malformed, but is not accepted by this Server.
    PACKET_TOO_LARGE = 0x95, // The CONNECT packet exceeded the maximum permissible size.
    QUOTA_EXCEEDED = 0x97, // An implementation or administrative imposed limit has been exceeded.
    PAYLOAD_FORMAT_INVALID = 0x99, // The Will Payload does not match the specified Payload Format Indicator.
    RETAIN_NOT_SUPPORTED = 0x9A, // The Server does not support retained messages, and Will Retain was set to 1.
    QOS_NOT_SUPPORTED = 0x9B, // The Server does not support the QoS set in Will QoS.
    USE_ANOTHER_SERVER = 0x9C, // The Client should temporarily use another server.
    SERVER_MOVED = 0x9D, // The Client should permanently use another server.
    CONNECTION_RATE_EXCEEDED = 0x9F, // The connection rate limit has been exceeded.
    UNKNOWN = 0xFFFF,
  };

  enum class DisconnectReasonCode
  {
    NORMAL_DISCONNECTION = 0X00, // Client or Server Close the connection normally. Do not send the Will Message.
    DISCONNECT_WITH_WILL_MESSAGE = 0X04, // Client The Client wishes to disconnect but requires that the Server also publishes its Will Message.
    UNSPECIFIED_ERROR = 0X80, // Client or Server The Connection is closed but the sender either does not wish to reveal the reason, or none of the other Reason Codes apply.
    MALFORMED_PACKET = 0X81, // Client or Server The received packet does not conform to this specification.
    PROTOCOL_ERROR = 0X82, // Client or Server An unexpected or out of order packet was received.
    IMPLEMENTATION_SPECIFIC_ERROR = 0X83, // Client or Server The packet received is valid but cannot be processed by this implementation.
    NOT_AUTHORIZED = 0X87, // Server The request is not authorized.
    SERVER_BUSY = 0X89, //SERVER THE SERVER IS BUSY AND CANNOT CONTINUE PROCESSING REQUESTS FROM THIS CLIENT.  Server_shutting_down = 0x8B, //Server The Server is shutting down.
    KEEP_ALIVE_TIMEOUT = 0X8D, // Server The Connection is closed because no packet has been received for 1.5 times the Keepalive time.
    SESSION_TAKEN_OVER = 0X8E, // Server Another Connection using the same ClientID has connected causing this Connection to be closed.
    TOPIC_FILTER_INVALID = 0X8F, // Server The Topic Filter is correctly formed, but is not accepted by this Sever.
    TOPIC_NAME_INVALID = 0X90, // Client or Server The Topic Name is correctly formed, but is not accepted by this Client or Server.
    RECEIVE_MAXIMUM_EXCEEDED = 0X93, // Client or Server The Client or Server has received more than Receive Maximum publication for which it has not sent PUBACK or PUBCOMP.
    TOPIC_ALIAS_INVALID = 0X94, // Client or Server The Client or Server has received a PUBLISH packet containing a Topic Alias which is greater than the Maximum Topic Alias it sent in the CONNECT or CONNACK packet.
    PACKET_TOO_LARGE = 0X95, // Client or Server The packet size is greater than Maximum Packet Size for this Client or Server.
    MESSAGE_RATE_TOO_HIGH = 0X96, // Client or Server The received data rate is too high.
    QUOTA_EXCEEDED = 0X97, // Client or Server An implementation or administrative imposed limit has been exceeded.
    ADMINISTRATIVE_ACTION = 0X98, // Client or Server The Connection is closed due to an administrative action.
    PAYLOAD_FORMAT_INVALID = 0X99, // Client or Server The payload format does not match the one specified by the Payload Format Indicator.
    RETAIN_NOT_SUPPORTED = 0X9A, // Server The Server has does not support retained messages.
    QOS_NOT_SUPPORTED = 0X9B, // Server The Client specified a QoS greater than the QoS specified in a Maximum QoS in the CONNACK.
    USE_ANOTHER_SERVER = 0X9C, // Server The Client should temporarily change its Server.
    SERVER_MOVED = 0X9D, // Server The Server is moved and the Client should permanently change its server location.
    SHARED_SUBSCRIPTIONS_NOT_SUPPORTED = 0X9E, // Server The Server does not support Shared Subscriptions.
    CONNECTION_RATE_EXCEEDED = 0X9F, // Server This connection is closed because the connection rate is too high.
    MAXIMUM_CONNECT_TIME = 0XA0, // Server The maximum connection time authorized for this connection has been exceeded.
    SUBSCRIPTION_IDENTIFIERS_NOT_SUPPORTED = 0XA1, // Server The Server does not support Subscription Identifiers; the subscription is not accepted.
    WILDCARD_SUBSCRIPTIONS_NOT_SUPPORTED = 0XA2, // Server The Server does not support Wildcard Subscriptions; the subscription is not accepted.
  };

  enum class SubscribeReasonCode
  {
    GRANTED_QOS_0 = 0x00, //The subscription is accepted and the maximum QoS sent will be QoS 0. This might be a lower QoS than was requested.
    GRANTED_QOS_1 = 0x01, //The subscription is accepted and the maximum QoS sent will be QoS 1. This might be a lower QoS than was requested.
    GRANTED_QOS_2 = 0x02, // The subscription is accepted and any received QoS will be sent to this subscription.
    UNSPECIFIED_ERROR = 0x80, // The subscription is not accepted and the Server either does not wish to reveal the reason or none of the other Reason Codes apply.
    IMPLEMENTATION_SPECIFIC_ERROR = 0x83, // The SUBSCRIBE is valid but the Server does not accept it.
    NOT_AUTHORIZED = 0x87, // The Client is not authorized to make this subscription.
    TOPIC_FILTER_INVALID = 0x8F, // The Topic Filter is correctly formed but is not allowed for this Client.
    PACKET_IDENTIFIER_IN_USE = 0x91, // The specified Packet Identifier is already in use.
    QUOTA_EXCEEDED = 0x97, // An implementation or administrative imposed limit has been exceeded.
    SHARED_SUBSCRIPTIONS_NOT_SUPPORTED = 0x9E, //The Server does not support Shared Subscriptions for this Client.
    SUBSCRIPTION_IDENTIFIERS_NOT_SUPPORTED = 0xA1, // The Server does not support Subscription Identifiers; the subscription is not accepted.
    WILDCARD_SUBSCRIPTIONS_NOT_SUPPORTED = 0xA2, //The Server does not support Wildcard Subscriptions; the subscription is not accepted.
    UNKNOWN = 0xFFFF,
  };


  enum class UnsubscribeReasonCode
  {
    SUCCESS = 0x00, // The subscription is deleted.
    NO_SUBSCRIPTION_EXISTED = 0x11, // No matching Topic Filter is being used by the Client.
    UNSPECIFIED_ERROR = 0x80, // The unsubscribe could not be completed and the Server either does not wish to reveal the reason or none of the other Reason Codes apply.
    IMPLEMENTATION_SPECIFIC_ERROR = 0x83, // The UNSUBSCRIBE is valid but the Server does not accept it.
    NOT_AUTHORIZED = 0x87, // The Client is not authorized to unsubscribe.
    TOPIC_FILTER_INVALID = 0x8F, // The Topic Filter is correctly formed but is not allowed for this Client.
    PACKET_IDENTIFIER_IN_USE = 0x91, // The specified Packet Identifier is already in use.
    UNKNOWN = 0xFFFF,
  };

  enum class Property
  {
    NONE = 0,
    PAYLOAD_FORMAT_INDICATOR = 0x01,
    MESSAGE_EXPIRY_INTERVAL = 0x02,
    CONTENT_TYPE = 0x03,
    RESPONSE_TOPIC = 0x08,
    CORRELATION_DATA = 0x09,
    SUBSCRIPTION_IDENTIFIER = 0x0B,
    SESSION_EXPIRY_INTERVAL = 0x11,
    ASSIGNED_CLIENT_IDENTIFIER = 0x12,
    SERVER_KEEP_ALIVE = 0x13,
    AUTHENTICATION_METHOD = 0x15,
    AUTHENTICATION_DATA = 0x16,
    REQUEST_PROBLEM_INFORMATION = 0x17, 
    WILL_DELAY_INTERVAL = 0x18,
    REQUEST_RESPONSE_INFORMATION = 0x19,
    RESPONSE_INFORMATION = 0x1A,
    SERVER_REFERENCE = 0x1C,
    REASON_STRING = 0x1F,
    RECEIVE_MAXIMUM = 0x21, 
    TOPIC_ALIAS_MAXIMUM = 0x22,
    TOPIC_ALIAS = 0X23, 
    MAXIMUM_QOS = 0X24, 
    RETAIN_AVAILABLE = 0X25, 
    USER_PROPERTY = 0X26, 
    MAXIMUM_PACKET_SIZE = 0X27, 
    WILDCARD_SUBSCRIPTION = 0X28, 
    SUBSCRIPTION_IDENTIFIER_AVAILABLE = 0X29 ,
    SHARED_SUBSCRIPTION_AVAILABLE = 0X2A, 
  };

  /*
   * 1 0x01 Payload Format Indicator Byte PUBLISH, Will Properties
   * 2 0x02 Message Expiry Interval Four Byte Integer PUBLISH, Will Properties
   * 3 0x03 Content Type UTF-8 Encoded String PUBLISH, Will Properties
   * 8 0x08 Response Topic UTF-8 Encoded String PUBLISH, Will Properties
   * 9 0x09 Correlation Data Binary Data PUBLISH, Will Properties
   * 11 0x0B Subscription Identifier Variable Byte Integer PUBLISH, SUBSCRIBE
   * 17 0x11 Session Expiry Interval Four Byte Integer CONNECT, CONNACK, DISCONNECT mqtt-v5.0-cs01 25 December 2017 * Standards Track Work Product Copyright © OASIS Open 2017. All Rights Reserved. Page 26 of 136
   * 18 0x12 Assigned Client Identifier UTF-8 Encoded String CONNACK
   * 19 0x13 Server Keep Alive Two Byte Integer CONNACK
   * 21 0x15 Authentication Method UTF-8 Encoded String CONNECT, CONNACK, AUTH
   * 22 0x16 Authentication Data Binary Data CONNECT, CONNACK, AUTH
   * 23 0x17 Request Problem Information Byte CONNECT
   * -------------------------------------------------------------------------------------------------------------------------------------
   * Followed by a Byte with a value of either 0 or 1. It is a Protocol Error to include Request Problem Information more than once, 
   * or to have a value other than 0 or 1. If the Request Problem Information is absent, the value of 1 is used.
   * The Client uses this value to indicate whether the Reason String or User Properties are sent in the case of failures.
   * If the value of Request Problem Information is 0, the Server MAY return a Reason String or User Properties on a CONNACK or DISCONNECT packet, 
   * but MUST NOT send a Reason String or User Properties on any packet other than PUBLISH, CONNACK, or DISCONNECT [MQTT-3.1.2-29]. 
   * If the value is 0 and the Client receives a Reason String or User Properties in a packet other than PUBLISH, CONNACK, or DISCONNECT, 
   * it uses a DISCONNECT packet with Reason Code 0x82 (Protocol Error) as described in section 4.13 Handling errors.
   * If this value is 1, the Server MAY return a Reason String or User Properties on any packet where it is allowed.
   * ---------------------------------------------------------------------------------------------------------------
   *     
   * 24 0x18 Will Delay Interval Four Byte Integer Will Properties
   * 25 0x19 Request Response Information Byte CONNECT
   * 26 0x1A Response Information UTF-8 Encoded String CONNACK
   * 28 0x1C Server Reference UTF-8 Encoded String CONNACK, DISCONNECT
   * 31 0x1F Reason String UTF-8 Encoded String CONNACK, PUBACK, PUBREC, * PUBREL, PUBCOMP, SUBACK, * UNSUBACK, DISCONNECT, AUTH
   * 33 0x21 Receive Maximum Two Byte Integer CONNECT, CONNACK
   * ------------------------------------------------------------------------------------
   * Followed by the Two Byte Integer representing the Receive Maximum value. 
   * It is a Protocol Error to include the Receive Maximum value more than once or for it to have the value 0.
   * The Server uses this value to limit the number of QoS 1 and QoS 2 publications that it is willing to process concurrently for the Client. 
   * It does not provide a mechanism to limit the QoS 0 publications that the Client might try to send.
   * If the Receive Maximum value is absent, then its value defaults to 65,535.
   * Refer to section 4.9 Flow Control for details of how the Receive Maximum is used.
   * ---------------------------------------------------------------------------------------------
   * 34 0x22 Topic Alias Maximum Two Byte Integer CONNECT, CONNACK
   * 35 0x23 Topic Alias Two Byte Integer PUBLISH
   * 36 0x24 Maximum QoS Byte CONNACK
   * 37 0x25 Retain Available Byte CONNACK
   * 38 0x26 User Property UTF-8 String Pair CONNECT, CONNACK, PUBLISH, Will Properties, PUBACK, PUBREC, PUBREL, PUBCOMP, SUBSCRIBE, SUBACK, UNSUBSCRIBE, * UNSUBACK, DISCONNECT, AUTH
   * 39 0x27 Maximum Packet Size Four Byte Integer CONNECT, CONNACK
   * 40 0x28 Wildcard Subscription Available Byte CONNACK
   * 41 0x29 Subscription Identifier Available Byte CONNACK
   * 42 0x2A Shared Subscription Available Byte CONNACK
   */

  enum class ConnectStatus
  {
    NONE,
    SERVER_CONNECTED,
    CONNECTED_TO_BROKER,
    DISCONNECTED,
  };

  enum class DisconnectReason
  {
    NONE,
    CONNECTION_RESET_BY_PEER,
    NETWORK_ERROR,
    NO_PONG_FROM_SERVER,
  };

  struct PairedString
  {
    string key;
    string val;
  };

  struct Properties
  {
    int64_t session_expiry_interval;
    string assigned_client_identifier;
    int server_keep_alive;
    string authentication_method;
    Buffer authentication_data;
    string response_information;
    string server_reference;
    string reason_string;
    int receive_maximum;
    int topic_alias_maximum;
    int topic_alias;
    int16_t maximum_qos;
    int16_t retain_available;
    std::list<PairedString> user_property_l;
    int64_t maximum_packet_size;
    int16_t wildcard_subscription_available;
    int16_t subscription_identifier_available;
    int16_t shared_subscription_available;
  };

  struct ConnectAck
  {
    bool session_present;
    ConnectReasonCode connect_reason_code;
    Properties properties;
    ConnectAck()
    {
      connect_reason_code = ConnectReasonCode::UNKNOWN;
    }
  };

  struct SubscriptionAck
  {
    uint16_t message_id;
    SubscribeReasonCode subscribe_reasone_code;
    Properties properties;

    SubscriptionAck()
    {
      subscribe_reasone_code = SubscribeReasonCode::UNKNOWN;
      message_id = 0;
    }
  };

  struct UnsubscriptionAck
  {
    uint16_t message_id;
    UnsubscribeReasonCode unsubscribe_reasone_code;
    Properties properties;

    UnsubscriptionAck()
    {
      unsubscribe_reasone_code = UnsubscribeReasonCode::UNKNOWN;
      message_id = 0;
    }
  };


  struct PublishOption
  {
    string topic_name;
    bool retain;
    uint8_t qos;
    bool duplicate;
    string msg;

    struct 
    {
      int8_t payload_format_indicator; //0x01 bool -1

      /*
       * If present, the Four Byte value is the lifetime of the Application Message in seconds. If the Message Expiry Interval has passed and the Server has not managed to start onward delivery to a matching subscriber, then it MUST delete the copy of the message for that subscriber [MQTT-3.3.2-5].
       * If absent, the Application Message does not expire.
       * The PUBLISH packet sent to a Client by the Server MUST contain a Message Expiry Interval set to the received value minus the time that the Application Message has been waiting in the Server [MQTT-3.3.2-6]. Refer to section 4.1 for details and limitations of stored state.
       */

      int64_t message_expiry_interval; //0x02 4bytes
      string content_type;
      string response_topic;
      int32_t subscription_identifier;
      int32_t topic_alias;
      std::list<PairedString> user_property_l;

    } properties;

    PublishOption()
    {
      qos = 1;
      retain = false;
      duplicate = false;

      properties.payload_format_indicator = -1; //0x01
      properties.message_expiry_interval = -1; //0x02
    }
  };

  struct SubscribeOption
  {
    std::map<string, uint8_t> topic_qos_m;
    struct
    {
      int32_t subscription_identifier;
      std::list<PairedString> user_property_l;
    } properties;

    SubscribeOption()
    {
      properties.subscription_identifier = -1;
    }
  };

  struct UnsubscribeOption
  {
    std::list<string> topic_l;
    struct
    {
      std::list<PairedString> user_property_l;
    } properties;
  };

  struct ConnectOption
  {
    Protocol protocol;
    string host;
    int port;
    string bind_iface;
    int packet_timeout_sec;
    string client_id;
    string user_name;
    string password;
    int keep_alive_sec;
    bool clean_session;
    PublishCb publish_cb;
    struct
    {
      bool enable;
      PublishOption msg;
      struct
      {
        int8_t payload_format_indicator; //0x01 bool -1
        int64_t message_expiry_interval; //0x02 4bytes integer -1
        string content_type; //0x03
        string response_topic; //0x08
        Buffer correlation_data; //0x09
        int64_t will_delay_interval; //0x18 4bytes integer def:0
        std::list<PairedString> user_property_l; //0x26
      } properties;
    }lwt;

    DisconnectCb disconnect_cb;
    void* app_ctx;

    struct 
    {
      bool enable;
      string root_ca_file;
      string cert_file;
      string key_file;
      SslWrapper::FileType root_ca_file_type;
      SslWrapper::FileType cert_file_type;
      SslWrapper::FileType key_file_type;
      SslWrapper::Method method;      
      std::vector<string> cipher_v;
    } ssl_option;

    struct
    {
      int64_t session_expiry_interval; //17 0x11 4bytes
      int8_t request_problem_information; //23 0x17 1byte
      int8_t request_response_information; //25 0x19 1byte
      string authentication_method; //21
      Buffer authentication_data; //22 0x16
      int32_t receive_maximum; //33 0x21 2bytes
      int32_t topic_alias_maximum; //34 2bytes def:0
      int64_t maximum_packet_size; //39 4bytes
      std::list<PairedString> user_property_l; //38 0x26
    } properties;
  
    ConnectOption()
    {
      ssl_option.enable = false;
      ssl_option.method = SslWrapper::Method::TLS_1_2;
      ssl_option.root_ca_file_type = SslWrapper::FileType::PEM;
      ssl_option.cert_file_type = SslWrapper::FileType::PEM;
      ssl_option.key_file_type = SslWrapper::FileType::PEM;
      protocol = Protocol::V4;
      port = 0;
      packet_timeout_sec = 10;
      lwt.enable = false;
      lwt.properties.will_delay_interval = -1;
      lwt.properties.payload_format_indicator = -1;
      lwt.properties.message_expiry_interval = -1;

      keep_alive_sec = 60;
      clean_session = true;
      client_id = "TelitMQTTClient";
      publish_cb = NULL;
      disconnect_cb = NULL;
      app_ctx = NULL;

      properties.session_expiry_interval = -1;
      properties.receive_maximum = -1;
      properties.maximum_packet_size = -1; //just assume minus value is not set
      properties.topic_alias_maximum = -1; //e. If the Topic Alias Maximum property is absent, the default value is 0
      properties.request_response_information = -1; //. If the Request Response Information is absent, the value of 0 is used.
      properties.request_problem_information = -1; //If the Request Problem Information is absent, the value of 1 is used.
    }
  };


  struct DisconnectOption
  {
    DisconnectReasonCode disconnect_reason_code;
    struct
    {
      int64_t session_expiry_interval; //0x11 4bytes
      string server_reference; // 0x1c
      string reason_string; // 0x1f
      std::list<PairedString> user_propery_l; //0x26
    }properties;

    DisconnectOption()
    {
      properties.session_expiry_interval = -1;
    }
  };


  struct PublishMsg
  {
    MqttWrapper *mqtt_wrapper;
    uint16_t message_id;
    uint8_t qos;
    string topic_name;
    string msg;
  };

  struct StatusInfo
  {
    ConnectStatus con_status;
    DisconnectReason dis_reason;
    DisconnectReasonCode dis_reason_v5;

    StatusInfo()
    {
      con_status = ConnectStatus::NONE;
      dis_reason = DisconnectReason::NONE;
      dis_reason_v5 = DisconnectReasonCode::NORMAL_DISCONNECTION;
    }

    StatusInfo(ConnectStatus con_status, DisconnectReason dis_reason)
    {
      this->con_status = con_status;
      this->dis_reason = dis_reason;
    }

    StatusInfo(ConnectStatus con_status, DisconnectReasonCode dis_reason_v5)
    {
      this->con_status = con_status;
      this->dis_reason_v5 = dis_reason_v5;
    }   
  };

  MqttWrapper();
  ~MqttWrapper();

  Result StartClient(ConnectOption& con_opt, ConnectAck *con_ack = NULL); 
  Result StopClient(DisconnectOption *dis_opt = NULL);
  Result SetPubAckUserProperties(std::list<PairedString>& user_propery_l);
  Result SetPubRecUserProperties(std::list<PairedString>& user_propery_l);
  Result SetPubCompUserProperties(std::list<PairedString>& user_propery_l);

  Result Publish(PublishOption &option);
  Result Subscribe(SubscribeOption& option, SubscriptionAck *sub_ack = NULL);
  Result Unsubscribe(UnsubscribeOption& option, UnsubscriptionAck *uns_ack = NULL);
  Result Ping(bool wait_pong = false);
  Result SetConnectOption(ConnectOption& con_opt);
  ConnectOption GetConnectOption();
  StatusInfo GetStatusInfo();

  static string GetMsgTypeInStr(MessageType type);
  static string GetMsgTypeInStr(int type);
  static string GetConnectReturnCodeInStr(ConnectReturnCode code);
  static string GetConnectReturnCodeInStr(int code);
  static string GetConnectReasonCodeInStr(ConnectReasonCode code);
  static string GetConnectReasonCodeInStr(int code);

private:
  MqttImpl *mqtt_impl; 
  ConnectOption con_opt_;

};

}}

#endif /*_PBP_MQTT_MQTT_WRAPPER_H_*/
