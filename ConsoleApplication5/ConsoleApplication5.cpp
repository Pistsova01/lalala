#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите первый угол ";
	cin >> a;
	cout << "Введите второй угол ";
	cin >> b;
	int sum = a + b;
	if (sum < 180)
	{
		cout << "Треугольник существует" << endl;
		if (a == 90 || b == 90 || a + b == 90)
			cout << "Треугольник прямоугольный";
		else
			cout << "Тругольник не прямоугольный";
	}
	else
		cout << "Треуголькин не существует" << endl;
	return 0;
}
