#include <string>
#include <iostream>
#include "Mensch.hpp"
#include "Prof.hpp"

using namespace std;

int main()
{
	Mensch m1 = Mensch();
	Mensch m2 = Mensch("Lisa Musterfrau", 150, 60);

	m1.print();
	cout << endl;
	m2.print();

	Prof p1 = Prof();
	Prof p2 = Prof("Juta Musterfrau", 150, 60, "Professor");

	p1.print();
	cout << endl;
	p2.print();


	return 0;
}
