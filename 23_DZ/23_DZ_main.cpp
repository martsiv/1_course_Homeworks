#include "23_DZ.h"

int main()
{
	//Завдання 1 =====================================================
	std::cout << "\tTask 1. Function for solving a quadratic equation\n";
	
	int a = 5, b = 7, c = -3;
	double x1, x2;
	std::cout << "resultQuadEqual = " << resultQuadEqual(a, b, c, &x1, &x2) << std::endl;
	std::cout << "x1 = " << x1
		<< std::endl << "x2 = " << x2 << std::endl << std::endl;

	//Завдання 2 =====================================================
	std::cout << "\n\tTask 2. Function for calculating the length of a circle and the area of a circle\n";

	double circuit, circleS, radius = 4.75;
	areaAndPerimeterCircle(radius, &circuit, &circleS);
	std::cout << "Radius of the circle = " << radius << std::endl
		<< "Circuit (C) = \t\t" << circuit << std::endl
		<< "Area of a circle (S) = \t" << circleS << std::endl << std::endl;

	//Завдання 3 =====================================================
	std::cout << "\n\tTask 3. A function that returns the number and sum of even elements in an array\n";

	srand(unsigned(time(0)));
	const int SIZE = 10;
	int arr[SIZE];
	int numbersOfEven, sumOfEven;
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = -10 + rand() % 15;
		std::cout << std::setw(3) << arr[i];
	}
	std::cout << std::endl;
	numAndSummOfEven(arr, SIZE, &numbersOfEven, &sumOfEven);
	std::cout << "Numbers and sum of even elements in array: "
		<< numbersOfEven << " and " << sumOfEven << std::endl << std::endl;

	//Завдання 4 =====================================================
	std::cout << "\n\tTask 4. A function that returns a reference to the largest element of an array and set \"0\"\n";

	refMaxElement(arr, SIZE) = 0;
	for (size_t i = 0; i < SIZE; i++)
		std::cout << std::setw(3) << arr[i];
	std::cout << std::endl;

	//Завдання 5 =====================================================
	std::cout << "\n\tTask 5. A function that returns the address of the first positive element placed \n"
		"between the pointers and increases each element by 1\n";
	
	std::cout << "First positive element = ";
	if (findPositive(arr, arr + SIZE - 1) == nullptr)
		std::cout << 0 << std::endl;
	else
		std::cout << *findPositive(arr, arr + SIZE - 1) << std::endl;
	for (size_t i = 0; i < SIZE; i++)
		std::cout << std::setw(3) << arr[i];
	std::cout << std::endl;

}