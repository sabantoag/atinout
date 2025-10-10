#ifndef _PBP_UTIL_TIME_H_
#define _PBP_UTIL_TIME_H_

#include "common/common_header.h"

namespace pbp {
namespace util {

class TimeDelta {

private:
	int64_t us;
};

class Time {
public:

  static const int64_t kMillisecondsPerSecond = 1000;
  static const int64_t kMicrosecondsPerMillisecond = 1000;
  static const int64_t kMicrosecondsPerSecond = 1000000;
  static const int64_t kMicrosecondsPerMinute = kMicrosecondsPerSecond * 60;
  static const int64_t kMicrosecondsPerHour = kMicrosecondsPerMinute * 60;
  static const int64_t kMicrosecondsPerDay = kMicrosecondsPerHour * 24;
  static const int64_t kMicrosecondsPerWeek = kMicrosecondsPerDay * 7;
  static const int64_t kNanosecondsPerMicrosecond = 1000;
  static const int64_t kNanosecondsPerSecond = kNanosecondsPerMicrosecond *
                                             kMicrosecondsPerSecond;

	Time() : us_(0) {
	}

	static Time Now(bool include_us = true);

	static Time FromTimeT(time_t tt) {
		return Time(tt * 1000000L);
	}
	static Time FromInternalValue(int64_t us) {
		return Time(us);
	}

	int64_t ToInternalValue() const {
		return us_;
	}

	Time& operator +=(const Time &rhs)
	{
		us_ += rhs.ToInternalValue();
		return *this;
	}

	Time operator - (const Time &rhs)
	{
		us_ -= rhs.ToInternalValue();
		return *this;
	}


private:
	int64_t us_;

	explicit Time(int64_t us) : us_(us) {
	}
};


class TimeTicks {

};

}}

#endif /*_PBP_UTIL_TIME_H_*/
