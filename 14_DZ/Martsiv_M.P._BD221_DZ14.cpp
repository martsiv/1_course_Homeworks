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
		////Завдання 3
	//const int SIZE = 5;
	//string arr[SIZE]{};

	//cout << "Enter " << SIZE << " words.\n";
	//for (size_t i = 0; i < SIZE; i++)
	//{
	//	cout << "Enter word " << i + 1 << " - ";
	//	cin >> arr[i];
	//}

	//string s_tmp;
	//bool swapped;
	//int counter = 0;
	//do
	//{
	//	swapped = 0;
	//	for (int j = 0; j < SIZE - 1 - counter; j++)
	//	{
	//		if (arr[j] < arr[j + 1])
	//		{
	//			swapped = 1;
	//			s_tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = s_tmp;
	//		}
	//	}
	//	counter++;
	//} while (swapped);

	//cout << "\nThe words were sorted in descending order:\n";
	//for (size_t i = 0; i < SIZE; i++)
	//{
	//	cout << '\t' << arr[i] << endl;
	//}

	//int left = 0, right = SIZE - 1, middle;
	//bool result = 0;
	//string key;
	//cout << "Enter your word key - ";
	//cin >> key;
	//while (left <= right && !result)
	//{
	//	middle = (left + right) / 2;

	//	if (key > arr[middle])
	//		right = middle - 1;
	//	else if (key < arr[middle])
	//		left = middle + 1;
	//	else
	//	{
	//		cout << "We find your key in index " << middle << endl;
	//		result = 1;
	//	}
	//}
	//if (!result)
	//	cout << "We did not find your key" << endl;


		////Завдання 2
	//const int SIZE = 5;
	//string city[SIZE]{ "Rivne", "Mykolaiw", "Odesa", "Kharkiv", "Dnipro" };
	//int people[SIZE]{ 270, 290, 420, 360, 310 };
	//int counter, i_tmp, menu, left, right, middle;
	//string s_tmp, key;
	//enum class Menu { PeopleSortDown = 1, PeopleSortUp, CitySortUp, MoreThat, SearchCityName, Exit = 0};
	//bool swapped, sorted_people_up = 0, sorted_name_up = 0, result;

	//for (size_t i = 0; i < SIZE; i++)
	//	cout << city[i] << " population\t" << people[i] << endl;

	//do
	//{
	//	cout << "\nSet:\n"
	//		<< "\t1 - Sort cities by population in descending order\n"
	//		<< "\t2 - Sort cities by population in order of growth\n"
	//		<< "\t3 - Sort cities by name in ascending order (alphabetically)\n"
	//		<< "\t4 - Output of cities with a population exceeding a certain value\n"
	//		<< "\t5 - Search for the population of the city by name\n"
	//		<< "\t0 - Exit\n";
	//	cin >> menu;
	//	switch (Menu(menu))
	//	{
	//	case Menu::PeopleSortDown:
	//		sorted_name_up = 0;
	//		sorted_people_up = 0;
	//		counter = 0;
	//		swapped = 1;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = 0; i < SIZE - 1 - counter; i++)
	//			{
	//				if (people[i] < people[i + 1])
	//				{
	//					swapped = 1;
	//					i_tmp = people[i];
	//					people[i] = people[i + 1];
	//					people[i + 1] = i_tmp;
	//					s_tmp = city[i];
	//					city[i] = city[i + 1];
	//					city[i + 1] = s_tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		for (size_t i = 0; i < SIZE; i++)
	//			cout << city[i] << " population\t" << people[i] << endl;
	//		break;
	//	case Menu::PeopleSortUp:
	//		sorted_name_up = 0;
	//		counter = 0;
	//		swapped = 1;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = 0; i < SIZE - 1 - counter; i++)
	//			{
	//				if (people[i + 1] < people[i])
	//				{
	//					swapped = 1;
	//					i_tmp = people[i];
	//					people[i] = people[i + 1];
	//					people[i + 1] = i_tmp;
	//					s_tmp = city[i];
	//					city[i] = city[i + 1];
	//					city[i + 1] = s_tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		sorted_people_up = 1;
	//		for (size_t i = 0; i < SIZE; i++)
	//			cout << city[i] << " population\t" << people[i] << endl;
	//		break;
	//	case Menu::CitySortUp:
	//		sorted_people_up = 0;
	//		counter = 0;
	//		swapped = 1;
	//		do
	//		{
	//			swapped = 0;
	//			for (int i = 0; i < SIZE - 1 - counter; i++)
	//			{
	//				if (city[i + 1] < city[i])
	//				{
	//					swapped = 1;
	//					i_tmp = people[i];
	//					people[i] = people[i + 1];
	//					people[i + 1] = i_tmp;
	//					s_tmp = city[i];
	//					city[i] = city[i + 1];
	//					city[i + 1] = s_tmp;
	//				}
	//			}
	//			counter++;
	//		} while (swapped);
	//		sorted_name_up = 1;
	//		for (size_t i = 0; i < SIZE; i++)
	//			cout << city[i] << " population\t" << people[i] << endl;
	//		break;
	//	case Menu::MoreThat:
	//		cout << "Enter the value."
	//			<< "The program will output cities with a population greater than this value - ";
	//		int value;
	//		result = 0;
	//		cin >> value;
	//		if (sorted_people_up)
	//		{
	//			for (size_t i = 0; i < SIZE && !result; i++)
	//			{
	//				if (value <= people[i])
	//				{	
	//					for (int j = i;j < SIZE; j++)
	//						cout << city[j] << " population " << people[j] << endl;
	//					result = 1;
	//				}
	//			}
	//		}
	//		else 
	//		{
	//			for (size_t i = 0; i < SIZE; i++)
	//			{
	//				if (value <= people[i])
	//				{
	//					cout << city[i] << " population " << people[i] << endl;
	//					result = 1;
	//				}
	//			}
	//		}
	//		if (!result)
	//			cout << "We did not find city with population more thaht " << value << endl;
	//		break;

	//	case Menu::SearchCityName:
	//		cout << "Enter name of the city fo search - ";
	//		cin >> key;
	//		result = 0;

	//		if (sorted_name_up)
	//		{
	//			left = 0;
	//			right = SIZE - 1;
	//			while (left <= right && !result)
	//			{
	//				middle = (left + right) / 2;

	//				if (key < city[middle])
	//					right = middle - 1;
	//				else if (key > city[middle])
	//					left = middle + 1;
	//				else
	//				{
	//					cout << "We find your city " << city[middle] << " with population " << people[middle] << " index# " << middle << endl;
	//					result = 1;
	//				}
	//			}
	//		}
	//		else
	//		{
	//			for (int i = 0; i < SIZE && !result; i++)
	//				if (key == city[i])
	//				{
	//					cout << "We find your city " << city[i] << " with population " << people[i] << " index# " << i << endl;
	//					result = 1;
	//				}
	//		}
	//		if (!result)
	//			cout << "We did not find your city" << endl;
	//		break;
	//	case Menu::Exit:
	//		cout << "Goodbuy!\n";
	//		break;
	//	default:
	//		cout << "Invalid value!\n";
	//		break;
	//	}
	//} while (menu);
}