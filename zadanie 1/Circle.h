#pragma once
#include "PlainFigure.h"
#define PI 3.14

class Circle : public PlainFigure
{
	private:
		double r;
		string name;
	protected:
		void Print(std::ostream& out) const override;

	public:
		Circle(double r, string name);

		double GetR() const;
		void SetR(double r);

		string GetName() const;
		void SetName(string name);

		double Area() override;
		double Perimeter() override;

		~Circle() override;

};