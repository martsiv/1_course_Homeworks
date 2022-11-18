#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <limits.h>
#include <iomanip>
#include <ctime>
#include <string>


using namespace std;

int main(void)
{
	//// Завдання 1
	//srand(unsigned(time(0)));
	//const int SIZE = 5;
	//int A[SIZE]{}, B[SIZE]{};
	//const int SIZE_C = SIZE * 2;
	//int C[SIZE_C]{};
	//
	//int left = 20, right = 50;
	//cout << "Array A:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	A[i] = left - rand() % (right - left + 1);
	//	cout << A[i] << setw(4);
	//}
	//cout << endl;
	//
	//left = -10, right = 20;
	//cout << "Array B:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	B[i] = left - rand() % (right - left + 1);
	//	cout << B[i] << setw(4);
	//}
	//cout << endl;

	//int counterA = 0, counterB = 0;
	//cout << "Array C:\n";
	//for (int i = 0; i < SIZE_C; i++)
	//{
	//	if (!(i % 2))
	//	{
	//		C[i] = A[counterA];
	//		counterA++;
	//		cout << C[i] << setw(4);
	//	}
	//	if ((i % 2))
	//	{
	//		C[i] = B[counterB];
	//		counterB++;
	//		cout << C[i] << setw(4);
	//	}
	//}
	//cout << endl;


	//// Завдання 2
	//const int MONTS_Y = 12;
	//int arr_y[MONTS_Y]{};
	//srand(unsigned(time(0)));
	//int left = 0, right = 5000;
	//cout << "Sales of pencils for each month of the year:\n";
	//for (int i = 0; i < MONTS_Y; i++)
	//{
	//	arr_y[i] = rand() % right + 1;
	//	cout << setw(2) << i + 1 << " - " << arr_y[i] << "UAH\n";
	//}

	//const int QUARTETS = 4, MONTS_Q = 3;
	//int arr_q[QUARTETS][MONTS_Q]{};
	//int max_sales_per_q = 0;
	//int index_max_q = 0;
	//int all_sales_per_q = 0;

	//for (int i = 0, m = 0; i < QUARTETS; i++)
	//{
	//	cout << "Sales of pencils for each month of the " << i + 1 << " quartet:\n";
	//	all_sales_per_q = 0;
	//	for (int j = 0; j < MONTS_Q; j++, m++)
	//	{
	//		arr_q[i][j] = arr_y[m];
	//		cout << setw(2) << m + 1 << " - " << arr_q[i][j] << "UAH\n";
	//		all_sales_per_q += arr_q[i][j];
	//	}
	//	if (max_sales_per_q < all_sales_per_q)
	//	{
	//		max_sales_per_q = all_sales_per_q;
	//		index_max_q = i;
	//	}
	//}
	//cout << "The maximum sales were in the " << index_max_q + 1 << "nd quarter.\n";
	 
	 
	//// Завдання 3
	//const int SIZE = 7;
	//int costs[SIZE]{};
	//string DaysOfWeek[SIZE]{ "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	//float average = 0;
	//int summ = 0;
	//int counter = 0;

	//enum class MENU { Average = 1, SummOfWeek, More100, Exit };
	//cout << "Enter your expenses for each day of the week\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "For " << DaysOfWeek[i] << ' ';
	//	cin >> costs[i];
	//}
	//cout << endl;

	//int choise;
	//do
	//{
	//	cout << "\n\nMake choise what do you want to do?\n";
	//	cout << "1 - Calculate the average cost\n";
	//	cout << "2 - Calculate the total amount of expenses\n";
	//	cout << "3 - The number of days and their names \nwhen the amount of expenses was more than 100\n";
	//	cout << "4 - Exit\n";
	//	cout << "Your choise - ";
	//	cin >> choise;
	//	switch (MENU(choise))
	//	{
	//	case MENU::Average:
	//		for (int i = 0; i < SIZE; i++)
	//			average += costs[i];
	//		average /= SIZE;
	//		cout << "Average expenses = " << average << endl;
	//		break;
	//	case MENU::SummOfWeek:
	//		for (int i = 0; i < SIZE; i++)
	//			summ += costs[i];
	//		cout << "The total amount of expenses = " << summ << endl;
	//		break;
	//	case MENU::More100:
	//		for (int i = 0; i < SIZE; i++)
	//		{
	//			if (costs[i] >= 100)
	//			{
	//				cout << "In " << DaysOfWeek[i] << " the amount of expenses was more than 100.\n";
	//				counter++;
	//			}
	//		}
	//		if (counter)
	//			cout << "Total number of days " << counter << endl;
	//		else
	//			cout << "Tis week expenses did not exceed 100 per day.\n";
	//		break;
	//	case MENU::Exit:
	//		cout << "Goodbuy!\n";
	//		break;
	//	default:
	//		cout << "Invalid value!\n";
	//	}
	//} while (choise != 4);


	//// Завдання 4
	
	//int year, month, day;
	//const int MONTS = 12;
	//int days_per_month[MONTS]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//
	//cout << "Enter the year: ";
	//cin >> year;
	//bool result_year = (year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
	//if (result_year)
	//	days_per_month[1]++;

	//cout << "Enter the month: ";
	//do
	//	cin >> month;
	//while (month < 1 || month > 12);

	//cout << "Enter the day: ";
	//do
	//	cin >> day;
	//while (day < 1 || day > days_per_month[month - 1]);


	//int counter_days = 0;
	//for (int i = 1; i <= month; i++)
	//{
	//	if (i != month)
	//	{
	//		for (int j = 1; j <= days_per_month[i - 1]; j++)
	//		{
	//			counter_days++;
	//		}
	//	}
	//	else
	//	{
	//		for (int j = 1; j <= day; j++)
	//		{
	//			counter_days++;
	//		}
	//	}
	//}
	//cout << "\nDays have passed since the beginning of the year:\t" << counter_days << endl;

	//counter_days = 0;
	//for (int i = month; i <= MONTS; i++)
	//{
	//	if (i == month)
	//	{
	//		for (int j = day; j <= days_per_month[i - 1]; j++)
	//			counter_days++;
	//	}
	//	else
	//	{
	//		for (int j = 1; j <= days_per_month[i - 1]; j++)
	//			counter_days++;
	//	}
	//}
	//cout << "\nThere are days left until the end of the year:\t" << counter_days << endl;
}