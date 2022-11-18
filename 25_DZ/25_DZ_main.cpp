#include "25_DZ.h"
template <typename T>
int findValue(const T* arr, int size, bool (*f)(T))
{
	for (int i = 0; i < size; i++)
	{
		if (f(arr[i]))
			return i;
	}
	return -1;
}

template <typename T>
bool isPositive(T num)
{
	if (0 < num)
		return true;
	return false;
}

template <typename T>
bool isTwoDigitNumber(T num)
{
	if (10 <= abs(num) && abs(num) < 100)
		return true;
	return false;
}
int main()
{
	//Завдання 1 =====================================================
	//const int SIZE = 4;
	//double (*calc[SIZE])(double, double) = { add, subt , mult, div };
	//double n1, n2;
	//cout << "Enter two digit: ";
	//cin >> n1 >> n2;
	//cout << "1 - Add\n"
	//	<< "2 - Subtract\n"
	//	<< "3 - Multiply\n"
	//	<< "4 - Division\n";
	//int number;
	//while (!(cin >> number) || number < 1 || 4 < number)
	//	continue;
	//cout << "Result = " << calc[number - 1](n1, n2);

	//Завдання 2 =====================================================
	//int size;
	//cout << "Enter the size of square: ";
	//cin >> size;
	//geometry(size, squre);
	//cout << "\n\nEnter the size of triangle: ";
	//cin >> size;
	//geometry(size, trian);

	//Завдання 3 =====================================================
	int SIZE;
	cout << "Enter the size of array: ";
	while (!(cin >> SIZE) || SIZE < 1)
		continue;
	int* arr = new int[SIZE];
	FillArr(arr, SIZE);
	ShowArr(arr, SIZE);
	cout << "First enter with positive " << findValue(arr, SIZE, isPositive) << endl;
	cout << "First enter with two-digit number " << findValue(arr, SIZE, isTwoDigitNumber) << endl;
	delete[] arr;

	//Завдання 4 =====================================================
	//int SIZE;
	//cout << "Enter the size of array: ";
	//while (!(cin >> SIZE) || SIZE < 1)
	//	continue;
	//int* arr = new int[SIZE];
	//FillArr(arr, SIZE);
	//ShowArr(arr, SIZE);
	//cout << "Double all elements of array: \n";
	//modifyElement(arr, SIZE, getDoubleVal);
	//ShowArr(arr, SIZE);
	//cout << "Increased all elements by one: \n";
	//modifyElement(arr, SIZE, getPlusOne);
	//ShowArr(arr, SIZE);
	//int index;
	//cout << "Enter the index of the element to be changed: ";
	//while (!(cin >> index) || index < 0 || SIZE <= index)
	//	continue;
	//modifyElement(arr[index], getDoubleVal);
	//ShowArr(arr, SIZE);
	//delete[] arr;
}
