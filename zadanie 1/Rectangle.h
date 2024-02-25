#pragma once
#include "PlainFigure.h"
using namespace std;

class Rectangle : public PlainFigure
{
	private:
		double a, b;
		string name;
	protected:
		void Print(ostream& out) const override;
	public:
		Rectangle(double a, double b, string name);
		
		double GetA() const;

		void SetA(double a);

		double GetB() const;

		void SetB(double b);

		string GetName() const;

		void SetName(string name);

		double Perimeter() override;
		double Area() override;

		~Rectangle() override;
};