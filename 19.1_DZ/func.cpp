#include "func.h"

void fillArrRand(int arr[][SIZE], int left, int right)
{
	if (right < left)
	{
		int tmp = right;
		right = left;
		left = tmp;
	}
	static bool start = 1;
	if (start)
	{
		srand(unsigned(time(0)));
		start = 0;
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = left + rand() % (right - left + 1);
		}
	}
}

void printArr(int arr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void sumMatrix(const int a[][SIZE], const int b[][SIZE], int c[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void multArr(int arr[][SIZE], int num)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] *= num;
		}
	}
}

void sortArr(int arr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		bool swapped;
		int counter = 0;
		do
		{
			swapped = 0;
			for (int j = 0; j < SIZE - 1 - counter; j++)
			{
				if (arr[i][j + 1] < arr[i][j])
				{
					swapped = 1;
					int tmp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = tmp;
				}
			}
			counter++;
		} while (swapped);
	}
}
