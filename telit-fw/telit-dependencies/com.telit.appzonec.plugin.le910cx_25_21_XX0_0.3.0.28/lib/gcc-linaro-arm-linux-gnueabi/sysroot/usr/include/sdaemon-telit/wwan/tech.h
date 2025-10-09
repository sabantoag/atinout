#ifndef _PBP_WWAN_TECH_H_
#define _PBP_WWAN_TECH_H_


namespace pbp {
namespace wwan {

enum class Tech
{
	NONE,
	UMTS,
	CDMA,
	H1_X,
	DO,
	LTE,
	MODEM_LINK_LOCAL,
	AUTO,
	LAST
};

}}

#endif /*_PBP_WWAN_TECH_H_*/
