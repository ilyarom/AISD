// Task2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "������. ��������� ���������� ������ ���� ������� � ������ ���� ������ ����" << "\n";
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
		cout << "������. ���������� ����� �������� �� ����� ���� ������ ������ ����� ���������" << "\n";
		return 1;
	}
	while (arr.size() != 1)
	{
		size_t index = n + k;
		while (index > arr.size())
		{
			index -= arr.size();
		}
		cout << "������ �������: " << arr.size() << "\n";
		cout << "Index: " << arr.at(index - 1) << "\n";
		arr.erase(arr.begin() + index - 1);
		n = index - 1;
	}
	cout << arr.at(0);
    return 0;
}