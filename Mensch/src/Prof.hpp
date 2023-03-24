#ifndef _PROF_HPP_
#define _PROF_HPP_

#include <string>

class Prof
{
	private:
		std::string name;
		int groesse;
		int gewicht;
		std::string titel;

	public:
		Prof();
		Prof(std::string name, int groesse, int gewicht, std::string titel);
		~Prof();
		void print();
};

#endif
