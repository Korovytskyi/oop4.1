#include "RightTrangle.h"

RightTrangle::RightTrangle()
	: Figure(0), b(0), c(0)
{}

RightTrangle::RightTrangle(int a, int b, int c)
	: Figure(a), b(b), c(c)
{}



double RightTrangle::Perimeter()
{
	double P = (GetA() + b + c);
	return P;
}

ostream& RightTrangle::Print(ostream& out) const
{
	out << "Katet1 = " << GetA() << endl;
	out << "Katet2 = " << b << endl;
	out << "Hipotenuz = " << c << endl;
	out << "Trapeze is visible" << endl;
	return out;
}