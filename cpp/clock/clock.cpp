#ifndef CLOCK_CPP
#define	CLOCK_CPP

#include "clock.h"
#include <sstream>
#include <iomanip>

namespace date_independent { namespace clock {
	
	at::at(int h, int m){
		m_hour = m_minute = 0;
		plus(h, m);
	}
	at at::plus(int m){
		plus(0,m);
		return *this;
	}
	void at::plus(int h, int m){
		m += m_minute;
		m_minute = (m)%60;
		if (m_minute < 0) {m_minute += 60; --h;}
		m_hour = ((h+m_hour)+(m/60))%24;
		if (m_hour < 0) m_hour += 24;
	}
	at::operator std::string() const{
		std::stringstream ss;
		ss << std::setw(2) << std::setfill('0') << m_hour << ":" << std::setw(2) << m_minute;
        return  ss.str();
    }
	bool at::operator == (const at rhs) const{
		return (m_hour == rhs.m_hour &&
		        m_minute == rhs.m_minute);
	}
	bool at::operator != (const at rhs) const{
		return !(*this == rhs);
	}
}}

#endif // CLOCK_CPP
