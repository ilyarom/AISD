// Task2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	size_t m;
	size_t k;
	size_t n;
	cin >> m;
	cin >> n;
	cin >> k;
	if (!((m > 0) && (k > 0) && (n > 0)))
	{
		cout << "Ошибка. Указанные переменные должны быть числами и должны быть больше нуля" << "\n";
		return 1;
	}
	vector <int> arr(m, 0);
	for (size_t i = 0; i < m; ++i)
	{
		arr.at(i) = i + 1;
	}
	cout << arr.size() << "\n";
	if (arr.size() < n)
	{
		cout << "Ошибка. Порядковый номер студента не может быть больше общего числа студентов" << "\n";
		return 1;
	}
	while (arr.size() != 1)
	{
		size_t index = n + k;
		while (index > arr.size())
		{
			index -= arr.size();
		}
		cout << "Размер массива: " << arr.size() << "\n";
		cout << "Index: " << arr.at(index - 1) << "\n";
		arr.erase(arr.begin() + index - 1);
		n = index - 1;
	}
	cout << arr.at(0);
    return 0;
}