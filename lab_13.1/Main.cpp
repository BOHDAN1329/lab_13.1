// lab13.1.cpp
// <Паньків Богдан>
// Лабораторна робота № 13.1
// Простори імен
// Варіант 17

#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-----------------------------------------\n";
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "ln(x)" << " |"
		<< setw(10) << "Sum" << " |"
		<< setw(5) << "n" << " |\n";
	cout << "-----------------------------------------\n";

	for (x = xp; x <= xk; x += dx) {
		sum();

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |\n";
	}

	cout << "-----------------------------------------\n";

	return 0;
}
