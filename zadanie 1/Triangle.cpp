#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double a, double b, double c, string name) : a(a), b(b), c(c), name(name)
{
	cout << "Constructor Triangle(" << a << "," << b << "," << c << "," << name << ")" << endl;
}

double Triangle::GetA() const
{
	return a;
}

double Triangle::GetB() const
{
	return b;
}

double Triangle::GetC() const
{
	return c;
}

void Triangle::SetA(double a)
{
	this->a = a;
}

void Triangle::SetB(double b)
{
	this->b = b;
}

void Triangle::SetC(double c)
{
	this->c = c;
}

string Triangle::GetName() const
{
	return name;
}

void Triangle::SetName(string name)
{
	this->name = name;
}

double Triangle::Perimeter()
{
	return a + b + c;
}

double Triangle::Area()
{
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Triangle::Print(ostream& out) const
{
	out << "name: " << name << " area: " << &Triangle::Area << " perimeter: " << &Triangle::Perimeter << endl;
}

Triangle::~Triangle()
{
	cout << name << endl;
}