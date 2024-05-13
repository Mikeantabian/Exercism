#ifndef CLOCK_H
#define	CLOCK_H

#include <string>

namespace date_independent { namespace clock {
	
	class at {
	private:
		int m_hour;
		int m_minute;
	public:
		at(int h, int m);
		at plus(int m);
		void plus(int h, int m);
		operator std::string () const;
		bool operator == (const at rhs) const;
		bool operator != (const at rhs) const;
	};
}}

#endif // CLOCK_H