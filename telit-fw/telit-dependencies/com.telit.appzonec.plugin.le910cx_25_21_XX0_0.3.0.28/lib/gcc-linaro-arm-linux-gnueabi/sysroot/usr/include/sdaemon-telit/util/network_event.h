#ifndef _UTIL_NETWORK_EVENT_H_
#define _UTIL_NETWORK_EVENT_H_

namespace pbp {
namespace util {
class NetworkEvent {
public:
	enum class OperState : uint8_t
	{
		UNKNOWN,
		DOWN,
		DORMANT,
		UP,
	};

	enum class Event : uint8_t 
	{
		UNKNOWN,
		NEW_LINK, 
		DEL_LINK,
		GET_LINK,
		NEW_ADDR, 
		DEL_ADDR, 
		GET_ADDR,
		NEW_ROUTE, 
		DEL_ROUTE,
		GET_ROUTE,
		NEW_NEIGH, 
		DEL_NEIGH, 
		GET_NEIGH,
		NEW_RULE, 
		DEL_RULE,
		GET_RULE,
		NEW_QDISC, 
		DEL_QDISC, 
		GET_QDISC,
		NEW_TCLASS, 
		DEL_TCLASS,
		GET_TCLASS,
		NEW_TFILTER, 
		DEL_TFILTER,
		GET_TFILTER,
	};

	OperState oper_state(){return oper_state_;}
	string ifname(){return ifname_;}
	Event event() const {return event_;}
	string l2_address(){return l2_address_;}
	string l2_broadcast_address(){return l2_broadcast_address_;}

	void SetOperState(OperState oper_state){oper_state_ = oper_state;}
	void SetIfname(string ifname){ifname_ = ifname;}
	void SetL2Address(string l2_address){l2_address_ = l2_address;}
	void SetL2BroadcastAddress(string l2_broadcast_address){l2_broadcast_address_ = l2_broadcast_address;}
	void SetEvent(Event event) {event_ = event;}

private:
	OperState oper_state_;
	Event event_;
	string ifname_;
	string l2_address_;
	string l2_broadcast_address_;

public:	
	NetworkEvent()
	{
		oper_state_ = OperState::UNKNOWN;
		event_ = Event::UNKNOWN;
	}

};

}}

#endif /*_UTIL_NETWORK_EVENT_H_*/
