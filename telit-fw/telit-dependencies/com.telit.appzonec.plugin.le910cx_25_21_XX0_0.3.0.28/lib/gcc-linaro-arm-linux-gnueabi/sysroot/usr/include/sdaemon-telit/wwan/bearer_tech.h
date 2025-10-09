#ifndef _PBP_WWAN_BEARERTECH_H_
#define _PBP_WWAN_BEARERTECH_H_

namespace pbp {
namespace wwan {

enum class BearerTech
{

	NONE,

	/* CDMA related data bearer technologies */
	CDMA_1X,       /**< 1X technology. */
	EVDO_REV0,     /**< CDMA Rev 0. */
	EVDO_REVA,     /**< CDMA Rev A. */
	EVDO_REVB,     /**< CDMA Rev B. */
	EHRPD,         /**< EHRPD. */
	FMC,           /**< Fixed mobile convergence. */
	HRPD,          /**< HRPD */
	H3GPP2_WLAN,    /**< IWLAN */

	/* UMTS related data bearer technologies */
	WCDMA,         /**< WCDMA. */
	GPRS,          /**< GPRS. */
	HSDPA,         /**< HSDPA. */
	HSUPA,         /**< HSUPA. */
	EDGE,          /**< EDGE. */
	LTE,           /**< LTE. */
	HSDPA_PLUS,    /**< HSDPA+. */
	DC_HSDPA_PLUS, /**< DC HSDPA+. */
	HSPA,          /**< HSPA */
	H64_QAM,        /**< 64 QAM. */
	TDSCDMA,       /**< TD-SCDMA. */
	GSM,           /**< GSM */
	H3GPP_WLAN,      /**< IWLAN */
	LAST,	
};

}}

#endif /*_PBP_WWAN_BEARERTECH_H_*/
