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
	srand(unsigned(time(0)));


	//// Завдання 1
	//const int SIZE = 9;
	//int Scores_time_s[SIZE]{};
	//int left = 1000, right = 1100;
	//cout << "Runners results in s:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	Scores_time_s[i] = left + rand() % (right - left + 1);
	//	cout << i + 1 << " - " << Scores_time_s[i] << "s.\n";
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	int index_min = i;

	//	for (int j = i + 1; j < SIZE; j++)
	//	{
	//		if (Scores_time_s[j] < Scores_time_s[index_min])
	//			index_min = j;
	//	}
	//	if (index_min != i)
	//	{
	//		int tmp = Scores_time_s[index_min];
	//		Scores_time_s[index_min] = Scores_time_s[i];
	//		Scores_time_s[i] = tmp;
	//	}
	//}
	//cout << "Top 3 runners:\n";
	//for (int i = 0; i < 3; i++)
	//	cout << i + 1  << " - " << Scores_time_s[i] << "s.\n";

	//// Завдання 2
	//enum class MENU { UpSort = 1, DownSort, Exit };
	//const int SIZE = 10;
	//string arr[SIZE]{ "potata", "mango", "car", "race", "manufacture", "outland", "designer", "quartet", "smile", "development"};
	//int menu, counter;
	//string tmp;
	//bool swapped;

	//cout << "Array origin\n";
	//for (int i = 0; i < SIZE; i++)
	//	cout << arr[i] << setw(12);
	//cout << endl;
	//
	//cout << "Enter 1 to sort in ascending order\n"
	//	<< "Enter 2 to sort in descending order\n"
	//	<< "Enter 3 to exit\n"
	//	<< "Your choise - ";
	//do
	//{
	//	cin >> menu;
	//	switch ((MENU)menu)
	//	{
	//	case MENU::UpSort:
	//		counter = 0;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = SIZE - 1; counter < i; i--)
	//			{
	//				if (arr[i] < arr[i - 1])
	//				{
	//					swapped = 1;
	//					tmp = arr[i];
	//					arr[i] = arr[i - 1];
	//					arr[i - 1] = tmp;
	//				}
	//			}
	//			counter++;
	//		} while(swapped);
	//		cout << "\nNEW Array " << endl;
	//		for (int i = 0; i < SIZE; i++)
	//		{
	//			cout << arr[i] << setw(12);
	//		}
	//		cout << endl;
	//		break;
	//	case MENU::DownSort:
	//		counter = 0;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = SIZE - 1; counter < i; i--)
	//			{
	//				if (arr[i - 1] < arr[i])
	//				{
	//					swapped = 1;
	//					tmp = arr[i];
	//					arr[i] = arr[i - 1];
	//					arr[i - 1] = tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		cout << "\nNEW Array " << endl;
	//		for (int i = 0; i < SIZE; i++)
	//		{
	//			cout << arr[i] << setw(12);
	//		}
	//		cout << endl;
	//		break;
	//	case MENU:: Exit:
	//		cout << "Goodbuy!\n";
	//		break;
	//	default:
	//		cout << "Invalid value, try again!\n";
	//	}
	//} while (menu != 3);
	 
	 
	 
	//// Завдання 3
	//const int SIZE = 12;
	//int arr[SIZE]{};
	//int left = 20, right = 40;
	//int tmp, counter;
	//bool swapped;
	//cout << "Original array -\t";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr[i] = left + rand() % (right - left + 1);
	//	cout << arr[i] << setw(3);
	//}
	//cout << endl;
	//// Перша половина за зростанням методом камінця
	//counter = 0;
	//do
	//{
	//	swapped = 0;
	//	for (int i = SIZE / 2 - 1; counter < i; i--)
	//	{
	//		if (arr[i] < arr[i - 1])
	//		{
	//			swapped = 1;
	//			tmp = arr[i];
	//			arr[i] = arr[i - 1];
	//			arr[i - 1] = tmp;
	//		}
	//	}
	//	counter++;
	//} while (swapped);

	//// Друга половина за спаданням методом бульбашки
	//counter = 0;
	//do
	//{
	//	swapped = 0;
	//	for (int i = SIZE / 2; i < SIZE - 1 - counter; i++)
	//	{
	//		if (arr[i] < arr[i + 1])
	//		{
	//			swapped = 1;
	//			tmp = arr[i];
	//			arr[i] = arr[i + 1];
	//			arr[i + 1] = tmp;
	//		}
	//	}
	//	counter++;
	//} while (swapped);

	//cout << "NEW array -\t\t";
	//for (int i = 0; i < SIZE; i++)
	//	cout << arr[i] << setw(3);
	//cout << endl;
	 
	 
	 
	//// Завдання 4
	//const int ARR_SIZE = 5;
	//string mobile_numbers[ARR_SIZE]{ "0963957286", "0953850114", "0684810572", "0984729503", "0964829563" };
	//string home_numbers[ARR_SIZE]  { "0362284942", "0362849105", "0362847105", "0362489205", "0362894015" };
	//char digit_char, left = '0', right = '9';
	//enum class MENU { MobSort = 1, HomeSort, GetOut, Exit };
	//cout << "\t\tTelephone directory\n"
	//	<< "Set 1 to sort by mobile numbers\n"
	//	<< "Set 2 to sort by home number\n"
	//	<< "Set 3 to show by client number\n"
	//	<< "Set 4 to exit\n";
	//int menu, swapped, counter;
	//string tmp;
	//do
	//{
	//	cout << "Your choise - ";
	//	cin >> menu;
	//	switch (MENU(menu))
	//	{
	//	case MENU::MobSort:
	//		counter = 0;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = 0; i < ARR_SIZE - 1 - counter; i++)
	//			{
	//				if (mobile_numbers[i + 1] < mobile_numbers[i])
	//				{
	//					swapped = 1;
	//					tmp = mobile_numbers[i];
	//					mobile_numbers[i] = mobile_numbers[i + 1];
	//					mobile_numbers[i + 1] = tmp;
	//					tmp = home_numbers[i];
	//					home_numbers[i] = home_numbers[i + 1];
	//					home_numbers[i + 1] = tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		cout << "Sorted!\n";
	//		break;
	//	case MENU::HomeSort:
	//		counter = 0;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = 0; i < ARR_SIZE - 1 - counter; i++)
	//			{
	//				if (home_numbers[i + 1] < home_numbers[i])
	//				{
	//					swapped = 1;
	//					tmp = mobile_numbers[i];
	//					mobile_numbers[i] = mobile_numbers[i + 1];
	//					mobile_numbers[i + 1] = tmp;
	//					tmp = home_numbers[i];
	//					home_numbers[i] = home_numbers[i + 1];
	//					home_numbers[i + 1] = tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		cout << "Sorted!\n";
	//		break;
	//	case MENU::GetOut:
	//		cout << "N/N\t" << "Mobile Numbers\tHome Numbers\n";
	//		for (int i = 0; i < ARR_SIZE; i++)
	//		{
	//			cout << i << "\t" << mobile_numbers[i] << "\t" << home_numbers[i] << endl;
	//		}
	//		break;
	//	case MENU::Exit:
	//		cout << "Goodbuy!\n";
	//		break;
	//	default:
	//		cout << "Invalid value. Try again.\n";
	//	}
	//} while (menu != 4);
	

}