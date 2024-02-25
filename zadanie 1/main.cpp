#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() 
{
	Rectangle rectangle( 10, 10, "namee");
	cout << rectangle.Perimeter() << endl; //TODO 1
	cout << rectangle.Area() << endl; //TODO 2
	cout << rectangle; //TODO 3
	delete &rectangle; //TODO 4
	return 0;
}