#include <string>
#include <iostream>
#include "Mensch.hpp"

using namespace std;

int main()
{
	Mensch m1 = Mensch();
	Mensch m2 = Mensch("Lisa Musterfrau", 150, 60);

	m1.print();
	cout << endl;
	m2.print();

	return 0;
}
