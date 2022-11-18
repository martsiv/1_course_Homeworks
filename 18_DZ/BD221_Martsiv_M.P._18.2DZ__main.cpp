#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>


using namespace std;
//До завдання 1
double triangle_area(double height, double basis);
double triangle_area(double side1, double side2, double side3);

//До завдання 2
const  int SIZE = 10;
int arr[SIZE]{};
void fillArray(int arr[], int SIZE);
void printArray(int arr[], int SIZE);
int indFirst(int arr[], int SIZE);
int indLast(int arr[], int SIZE);
void reversePartArray(int arr[], int left, int right);

int main()
{
	////Завдання 1
	//cout << "This program will calculate the area of a triangle!\n";
	//const int SIDES = 3;
	//double triangle_sides[SIDES]{};
	//double height_of_triangle, basis_of_triangle;
	//int choise;
	//cout << "3 - If you know 3 sides of the triangle.\n"
	//	<< "2 - If you know height and basis of the triangle.\n";
	//while (!(cin >> choise) || (choise != 2 && choise != 3))
	//{
	//	cin.clear();
	//	while (cin.get() != '\n')
	//		continue;
	//}
	//if (choise == 3)
	//{
	//	cout << "Enter the sides of the triangle - ";
	//	for (int i = 0; i < SIDES; i++)
	//	{
	//		cout << "Enter " << i + 1 << " side of triangle - ";
	//		while (!(cin >> triangle_sides[i]) || triangle_sides[i] <= 0)
	//		{
	//			cin.clear();
	//			while (cin.get() != '\n')
	//				continue;
	//		}
	//	}
	//	cout << "Area of the thiangle = " << triangle_area(triangle_sides[0], triangle_sides[1], triangle_sides[2]) << endl;
	//}
	//else
	//{
	//	cout << "Enter the height of the triangle - ";
	//	while (!(cin >> height_of_triangle) || height_of_triangle <= 0)
	//	{
	//		cin.clear();
	//		while (cin.get() != '\n')
	//			continue;
	//	}
	//	cout << "Enter the basis of the triangle - ";
	//	while (!(cin >> basis_of_triangle) || basis_of_triangle <= 0)
	//	{
	//		cin.clear();
	//		while (cin.get() != '\n')
	//			continue;
	//	}
	//	cout << "Area of the thiangle = " << triangle_area(height_of_triangle, basis_of_triangle) << endl;
	//}



	////Завдання 2
	//fillArray(arr, SIZE);
	//printArray(arr, SIZE);
	//int left = indFirst(arr, SIZE);
	//int right = indLast(arr, SIZE);
	//cout << "left = " << left << endl;
	//cout << "right = " << right << endl;
	//reversePartArray(arr, left, right);
	//printArray(arr, SIZE);


}