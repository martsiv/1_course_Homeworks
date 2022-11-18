#include "23_DZ.h"

//Завдання 1 =====================================================
int resultQuadEqual(int a, int b, int c, double* x1_out, double* x2_out)
{
	*x1_out = *x2_out = 0;
	double D = pow(b, 2) - 4 * a * c;
	if (D < 0)
		return 0;
	else
	{
		*x1_out = (-b + sqrt(D)) / (2 * a);
		if (!D)
		{
			*x2_out = *x1_out;
			return 1;
		}
		else
		{
			*x2_out = (-b - sqrt(D)) / (2 * a);
			return 2;
		}
	}
}

//Завдання 2 =====================================================
void areaAndPerimeterCircle(double r, double* C_out, double* S_out)
{
	*C_out = 2 * M_PI * r;
	*S_out = M_PI * pow(r, 2);
}
//Завдання 3 =====================================================
void numAndSummOfEven(const int arr[], int SIZE, int* num, int* sum)
{
	*num = 0;
	*sum = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (!(arr[i] % 2))
		{
			(*num)++;
			*sum += arr[i];
		}
	}
}
//Завдання 4 =====================================================
int& refMaxElement(int arr[], int size)
{
	int index = 0;
	for (int i = 0; i < size; i++)
		if (arr[index] < arr[i])
			index = i;
	return arr[index];
}
//Завдання 5 =====================================================
int* findPositive(int* start, int* end)
{
	static bool first_time_enter = 0;
	int index = -1;
	for (int i = 0; start + i < end; i++)
	{
		if (0 < *(start + i))
		{
			if (index < 0)
				index = i;
			if (!first_time_enter)
				(*(start + i))++;
		}
	}
	first_time_enter = 1;
	return index < 0 ? nullptr : (start + index);
}

