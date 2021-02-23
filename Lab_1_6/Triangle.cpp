#include "Triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

void Triangle::SetA(double value)
{
	if (value > 0)
		triad.SetA(value);
	else
		triad.SetA(0);
}

void Triangle::SetB(double value)
{
	if (value > 0)
		triad.SetB(value);
	else
		triad.SetB(0);
}

void Triangle::SetC(double value)
{
	if (value > 0)
		triad.SetC(value);
	else
		triad.SetC(0);
}

bool Triangle::Init(double a, double b, double c)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		SetA(a);
		SetB(b);
		SetC(c);
		return true;
	}
	else
		return false;
}

void Triangle::Read()
{
	double A, B, C;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;
		cout << "c = "; cin >> C;
	} while (!Init(A, B, C));
}

void Triangle::Display() const
{
	triad.Display();
}

double Triangle::Square() const
{
	double a = triad.GetA();
	double b = triad.GetB();
	double c = triad.GetC();
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}

void Triangle::Angle(double& A, double& B, double& C) const
{
	const double PI = atan(1) * 4;
	double a = triad.GetA();
	double b = triad.GetB();
	double c = triad.GetC();

	double S = Square();

	double sinA = (S * 2) / (a * b);
	double x1 = asin(sinA);
	A = (x1 * 180) / PI;

	double sinB = (sinA * b) / c;
	double x2 = asin(sinB);
	B = (x2 * 180) / PI;

	C = 180 - (A + B);
}

void Triangle::Triad::SetA(double value)
{
	a = value;
}

void Triangle::Triad::SetB(double value)
{
	b = value;
}

void Triangle::Triad::SetC(double value)
{
	c = value;
}

bool Triangle::Triad::Init(double a, double b, double c)
{
	SetA(a);
	SetB(b);
	SetC(c);
	return true;
}

void Triangle::Triad::Read()
{
	double A, B, C;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;
		cout << "c = "; cin >> C;
	} while (!Init(A, B, C));
}

void Triangle::Triad::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

double Triangle::Triad::Sum()
{
	return a + b + c;;
}

