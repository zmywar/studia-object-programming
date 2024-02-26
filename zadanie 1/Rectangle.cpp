#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double a, double b, string name) : a(a), b(b), name(name)
{
	cout << "Constructor Rectangle(" << a << "," << b << "," << name << ")" << endl;
}

double Rectangle::GetA() const
{
	return a;
}

double Rectangle::GetB() const
{
	return b;
}

void Rectangle::SetA(double a)
{
	this->a = a;
}

void Rectangle::SetB(double b)
{
	this->b = b;
}

string Rectangle::GetName() const
{
	return name;
}

void Rectangle::SetName(string name)
{
	this->name = name;
}

double Rectangle::Perimeter() 
{
	return a * 2 + b * 2;
}

double Rectangle::Area()
{
	return a * b;
}

void Rectangle::Print(ostream& out) const
{
	out << "name: " << name << " area: " << &Rectangle::Area << " perimeter: " << &Rectangle::Perimeter << endl;
}

Rectangle::~Rectangle()
{
	cout << name << endl;
}