#include "Triangle.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle::Triad triad;
	triad.Read();
	triad.Display();
	cout << "Sum = " << triad.Sum() << endl;

	double A = 0.0;
	double B = 0.0;
	double C = 0.0;
	Triangle T;
	T.Read();
	T.Display();
	double S = T.Square();
	cout << "Square = " << S << endl;

	T.Angle(A, B, C);
	cout << "Êóò À = " << A << endl;
	cout << "Êóò B = " << B << endl;
	cout << "Êóò C = " << C << endl;
}