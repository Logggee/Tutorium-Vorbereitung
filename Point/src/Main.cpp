#include <iostream>
#include "Point.hpp"

int main(void)
{
	//Point Object auf dem Stack erzeugen
	Point pStack (10 ,10);
	//Point auf dem Heap erzeugen
	Point* pHeap = new Point(20, 20);

	//Wenn das Objekt auf dem Stack erzeugt wurde kann der Punkt Operator verwendet werden
	pStack.print();
	//Wenn das Objekt auf dem Heap erzeugt wurde muss der -> Operator verwendet werden
	pHeap->print();
	//Äquivalent zum -> Operatir ist diese Notaion, Punkt bindet stärker als Dereferenzieren
	(*pHeap).print();

	return 0;
}
