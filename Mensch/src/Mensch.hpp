#ifndef _MENSCH_HPP_
#define _MENSCH_HPP_

#include <string>

class Mensch
{
	private:
		std::string name;
		int groesse;
		int gewicht;

	public:
		Mensch();
		Mensch(std::string name, int groesse, int gewicht);
		~Mensch();
		void print();
};

#endif
