// ChyrunSofialab13.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_13_1.cpp
// < Чирун Софія >
// Лабораторна робота № 13.1
// Простори імен
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
#include "var.h"
#include "dod.h"
#include "sum.h"

using namespace nsSum;
using namespace nsVar;
using namespace std;

//double xp, xk, x, dx, eps, s = 0;
//int n;
//int sum(const double x, const double eps, int& n, double& s);
//void dod(const double a, const int n, double &s, double &b, double& R);

int main()
{
	s = 0;
	cout << "xp > 0, xp = "; cin >> xp;
	cout << "xk <=2, xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "log(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		sum();
		//sum(x,eps,n,s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
/*int sum(const double x, const double eps, int& n, double& s)
{
	n = 0;
	s = 0;
	double a, b, R=1;
	do {

		a = x - 1;
		b = n + 1;

		dod(a, n, s, b, R);

		n++;
	} while (abs(R) >= eps);
	return n;
}
void dod(const double a, const int n, double& s, double& b, double& R)
{
	R = (pow((-1), n) * pow(a, b)) / b;
	s += R;
}*/
