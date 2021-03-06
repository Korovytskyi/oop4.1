#include "Trapeze.h"

Trapeze::Trapeze()
	: Figure(0), b(0), c(0), d(0)
{}

Trapeze::Trapeze(int a, int b, int c, int d)
	: Figure(a), b(b), c(c), d(d)
{}



double Trapeze::Perimeter()
{
	double P = (GetA() + b + c + d);
	return P;
}

ostream& Trapeze::Print(ostream& out) const
{
	out << "Basis1 = " << GetA() << endl;
	out << "Basis2 = " << b << endl;
	out << "Side1 = " << c << endl;
	out << "Side2 = " << d << endl;
	out << "Trapeze is visible" << endl;
	return out;
}