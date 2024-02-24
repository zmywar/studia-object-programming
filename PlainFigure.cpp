#include "PlainFigure.h"
using namespace std;

ostream& operator << (ostream& os, const PlainFigure& figure)
{
	figure.Print(os);
	return os;
}

PlainFigure:: ~PlainFigure()
{

}