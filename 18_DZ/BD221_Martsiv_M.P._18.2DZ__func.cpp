#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>


using namespace std;


 //До завдання 1
double triangle_area(double height, double basis)
{
	if (height < 0|| basis < 0)
		return 0;
	double result;
	result = basis * height / 2;
	return result;
}

double triangle_area(double side1, double side2, double side3)
{
	if (side1 < 0 || side2 < 0 || side3 < 0)
		return 0;
	double p, S;
	p = (side1 + side2 + side3) / 2;
	S = sqrt(p * (p - side1) * (p - side2) * (p - side3));
	return S;
}

//До завдання 2
void fillArray(int arr[], int SIZE)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -10 + rand() % 21;
	}
}
void printArray(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << arr[i];
	cout << endl;
}
int indFirst(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
			return i;
	}
	return -1;

}
int indLast(int arr[], int SIZE)
{
	for (int i = SIZE - 1; 0 <= i; i--)
	{
		if (arr[i] < 0)
			return i;
	}
	return -1;
}
void reversePartArray(int arr[], int left, int right)
{
	for (int i = left, j = right; i <= (right - left) / 2 + left; i++, j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}