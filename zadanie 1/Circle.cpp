#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double r, string name) : r(r), name(name)
{
	cout << "Constructor Circle(" << r << "," << name << ")" << endl;
}

double Circle::GetR() const
{
	return r;
}

void Circle::SetR(double r)
{
	this->r = r;
}


string Circle::GetName() const
{
	return name;
}

void Circle::SetName(string name)
{
	this->name = name;
}

double Circle::Perimeter()
{
	return 2 * PI * r;
}

double Circle::Area()
{
	return PI * r * r;
}

void Circle::Print(ostream& out) const
{
	out << "name: " << name << " area: " << &Circle::Area << " perimeter: " << &Circle::Perimeter << endl;
}

Circle::~Circle()
{
	cout << name << endl;
}