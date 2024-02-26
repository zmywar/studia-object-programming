#pragma once
#include "PlainFigure.h"

class Triangle : public PlainFigure
{
	private:
		double a, b, c;
		string name;
		double p = Triangle::Perimeter() / 2;
	protected:
		void Print(std::ostream& out) const override;

	public:
		Triangle(double a, double b, double c, string name);

		double GetA() const;
		void SetA(double a);

		double GetB() const;
		void SetB(double b);

		double GetC() const;
		void SetC(double c);

		string GetName() const;
		void SetName(string name);

		double Area() override;
		double Perimeter() override;

		~Triangle() override;

};