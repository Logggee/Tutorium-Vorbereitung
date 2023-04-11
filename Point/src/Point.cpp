#include <iostream>
#include "Point.hpp"

using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& copyPoint)
{
	x = copyPoint.getX();
	y = copyPoint.getY();
}

Point::~Point()
{
	//Hier gibts nichts zu löschen
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int x)
{
	this->x = x;
}
void Point::setY(int y)
{
	this->y = y;
}

void Point::print()
{
	cout << "Punkt mit Mittelpunkt:" << endl;
	cout << "X = " << x << endl;
	cout << "Y = " <<  y << endl << endl;
}
