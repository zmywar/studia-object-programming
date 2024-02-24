#include <iostream>
using namespace std;

class PlainFigure
{
	protected:
		virtual void Print(ostream& out) const = 0;

		friend ostream& operator << (ostream& os, const PlainFigure& figure);

	public:
		virtual double Area() = 0;
		virtual double Perimeter() = 0;
		virtual PlainFigure();
};