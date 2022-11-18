#include "25_DZ.h"
//Загальні функції для кількох завдань ===========================
template <typename T>
void ShowArr(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

template <typename T>
void FillArr(T arr[], int size)
{
	srand(unsigned(time(0)));

	for (int i = 0; i < size; i++)
		arr[i] = -15 + rand() % 30;
}

//Завдання 1 =====================================================
double add(double x, double y)
{
	return x + y;
}

double subt(double x, double y)
{
	return x - y;
}

double mult(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

//Завдання 2 =====================================================
void geometry(int number, void (*f)(int))
{
	f(number);
}

void squre(int side)
{
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			if (!j || j == side - 1)
				cout << "* ";
			else if (!i || i == side - 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

void trian(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (!j || j == i || i == height - 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

//Завдання 3 =====================================================



//Завдання 4 =====================================================

void modifyElement(int arr[], int size, void(*func)(int&))
{
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

void modifyElement(int& val, void(*func)(int&))
{
	func(val);
}

void getDoubleVal(int& num)
{
	num *= 2;
}

void getPlusOne(int& num)
{
	num += 1;
}
