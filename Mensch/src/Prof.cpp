#include <string>
#include <iostream>
#include "Prof.hpp"

using namespace std;

Prof::Prof()
{
	name = "Thomas Musterman";
	groesse = 180;
	gewicht = 80;
	titel = "Professor";
}

Prof::Prof(string name, int groesse, int gewicht, string titel)
{
	this->name = name;
	this->groesse = groesse;
	this->gewicht = gewicht;
	this->titel = titel;
}

Prof::~Prof()
{
	//Nothing to delete
}

void Prof::print()
{
	cout << "Name: " << name << endl;
	cout << "Größe: " << groesse << endl;
	cout << "Gewicht: " << gewicht << endl;
	cout << "Titel: " << titel << endl;
}
