#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int* b;
	b = &a;

	cout << "a = " << a << endl;
	cout << "Adresse von &a = " << &a << endl;
	cout << "Pointer b = " << b << endl;
	cout << "Dereferenzierter Pointer *b = " << *b << endl;

	return 0;
}
