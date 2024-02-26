#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main() 
{

	Rectangle rectangle(5, 5, "rectangle_name");
	cout << rectangle.Perimeter() << endl;
	cout << rectangle.Area() << endl;
	cout << rectangle;
	//rectangle.~Rectangle();

	Triangle triangle(6, 8, 10, "triangle_name");
	cout << triangle.Perimeter() << endl;
	cout << triangle.Area() << endl;
	cout << triangle;
	//triangle.~Triangle();

	Circle circle(4, "circle_name");
	cout << circle.Perimeter() << endl;
	cout << circle.Area() << endl;
	cout << circle << endl;
	//circle.~Circle();

	PlainFigure* tab[3];
	tab[0] = &rectangle;
	tab[1] = &triangle;
	tab[2] = &circle;

	for (int i = 0; i < 3; i++)
	{
		cout << tab[i]->Area() << endl;
		cout << tab[i]->Perimeter() << endl;
	}

	return 0;
}