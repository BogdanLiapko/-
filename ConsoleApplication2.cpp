// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

long double x, y, resultat;


int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "enter x: ";
	cin >> x;
	cout << "" << endl;
	cout << "enter y: ";
	cin >> y;
	cout << "" << endl;
	resultat = (x + 2 / sin(y, 3)*sqrt(x + tg(pow(x, 2))));
	cout << resultat << endl;
	system("pause");
	return 0;
}