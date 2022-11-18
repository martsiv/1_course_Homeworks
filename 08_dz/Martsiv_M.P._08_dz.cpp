#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <limits.h>

using namespace std;

int main()
{
	//// Задача на парі 5
	//int k, x = 1;	
	//cout << "Enter your number:\n";
	//cin >> k;
	//while (x < 9)
	//{
	//	++x;
	//	cout << k << " * " << x << " = " << k * x << endl;
	//}

	// Щоб змінити назви змінних по всьому коду Ctrl + R вписати нову назву. Але вибрати де змінити, чи у всіх проектах чи в одному і т.д.
	// system ("pause>null");
	// system("cls");
	// cin.clear(); cin.ignore(1, '\n'); якщо 1 символ почистити
	// cin.clear(); cin.ignore(10, '\n'); якщо 10 символів чистити


	//// Задача на парі 6
	//const float usd_uah = 35.3, uah_usd = 0.032, eur_uah = 36.0, uah_eur = 0.033, usd_eur = 0.98, eur_usd = 1.02, usd_usd = 1, eur_eur = 1, uah_uah = 1;
	//enum class Menu {buy = 1, sell};
	//enum class Currency { usd = 1, eur, uah};
	//int choise_menu, choise_currency, money;

	//cout << "What must be done? \n 1 - sell a certain amount of money or \n 2 - buy a certain amount of money?\n";
	//do
	//{
	//	cin >> choise_menu;
	//	switch (Menu(choise_menu))
	//	{
	//	case Menu::buy:
	//		cout << "What currency do you want to buy?\n";
	//		cout << " 1 - USD\n";
	//		cout << " 2 - EUR\n";
	//		cout << " 3 - UAH\n";
	//		do
	//		{
	//			cin >> choise_currency;

	//			switch (Currency(choise_currency))
	//			{
	//			case Currency::usd:
	//				cout << "How much money did you want to buy?\n";
	//				cin >> money;
	//				cout << "To buy " << money << "USD, you need to have:\t" << money * usd_uah << "UAH or\t" << money * usd_eur << "EUR\n";
	//				break;
	//			case Currency::uah:
	//				cout << "How much money did you want to buy?\n";
	//				cin >> money;
	//				cout << "To buy " << money << "UAH, you need to have:\t" << money * uah_usd << "USD or\t" << money * uah_eur << "EUR\n";
	//				break;
	//			case Currency::eur:
	//				cout << "How much money did you want to buy?\n";
	//				cin >> money;
	//				cout << "To buy " << money << "EUR, you need to have:\t" << money * eur_uah << "UAH or\t" << money * eur_usd << "USD\n";
	//				break;
	//			default:
	//				cout << "Not correct value.\n";
	//			}
	//		}
	//		while (choise_currency < 1 || choise_currency > 3);
	//		break;
	//	case Menu::sell:
	//		cout << "What currency do you want to buy?\n";
	//		cout << " 1 - USD\n";
	//		cout << " 2 - EUR\n";
	//		cout << " 3 - UAH\n";
	//		do
	//		{
	//			cin >> choise_currency;
	//			switch (Currency(choise_currency))
	//			{
	//			case Currency::usd:
	//				cout << "How much money did you want to sell?\n";
	//				cin >> money;
	//				cout << "To sell " << money << "USD, you need to have:\t" << money * usd_uah << "UAH or\t" << money * usd_eur << "EUR\n";
	//				break;
	//			case Currency::uah:
	//				cout << "How much money did you want to sell?\n";
	//				cin >> money;
	//				cout << "To sell " << money << "UAH, you need to have:\t" << money * uah_usd << "USD or\t" << money * uah_eur << "EUR\n";
	//				break;
	//			case Currency::eur:
	//				cout << "How much money did you want to sell?\n";
	//				cin >> money;
	//				cout << "To sell " << money << "EUR, you need to have:\t" << money * eur_uah << "UAH or\t" << money * eur_usd << "USD\n";
	//				break;
	//			default:
	//				cout << "Not correct value.\n";
	//			}
	//		}
	//		while (choise_currency < 1 || choise_currency > 3);
	//		break;
	//	default:
	//		cout << "Make Your choise.\n";
	//		break;
	//	}
	//} 
	//while (choise_menu < 1 || choise_menu > 2);


	////Задача домашня 1
	//unsigned int number, divider = 1;
	//cout << "Enter a positive integer\t";
	//cin >> number;
	//cout << "\nThis number is evenly divisible by ";
	//do
	//{
	//	if (number % divider == 0)
	//	{
	//		cout << divider << " ";
	//	}
	//	divider++;
	//} 
	//while (divider <= number);


	////Задача домашня 2
	//int number, x = 1, i = 0;
	//cout << "Eneter an integer\t";
	//cin >> number;
	//do
	//{
	//	x *= 10;
	//	++i;
	//} while (number / x > 0);
	//cout << number << " have " << i << " numbers\n";



	////Задача домашня 3
	//char first, last, chr;
	//do
	//{
	//	do
	//	{
	//		cout << "Enter a first char(latin letter): ";
	//		cin >> first;
	//		if ((first < 65 || first > 90) && (first < 97 || first > 122))
	//		{
	//			cout << "Error! This is not a Latin letter\n";
	//		}
	//	} while ((first < 65 || first > 90) && (first < 97 || first > 122));

	//	do
	//	{
	//		cout << "\nEnter a last char(latin letter): ";
	//		cin >> last;
	//		if ((last < 65 || last > 90) && (last < 97 || last > 122))
	//		{
	//			cout << "Error! This is not a Latin letter\n";
	//		}
	//	} while ((last < 65 || last > 90) && (last < 97 || last > 122));

	//	if (((first > 65 && first < 90) && (last > 97 && last < 122)) || ((first > 97 && first < 122) && (last > 65 && last < 90)))
	//	{
	//		cout << "Enter letters of the same case\n";
	//	}
	//} while (((first > 65 && first < 90) && (last > 97 && last < 122)) || ((first > 97 && first < 122) && (last > 65 && last < 90)));
	//
	//if (first > last)
	//{
	//	char tmp = first;
	//	first = last;
	//	last = tmp;
	//}

	//chr = first;

	//while (chr <= last)
	//{
	//	cout << chr << " ";
	//	chr = int(chr) + 1;
	//}
		

	////Задача домашня 4
	//char chr, direction;
	//int quantify, x = 1;
	//cout << "Eneter the char: ";
	//cin >> chr;
	//cout << "\nEnter the quantity: ";
	//cin >> quantify;
	//cout << "Enter the direction:\n";
	//cout << "H - horizontal\nV - vertical\n";
	//do
	//{
	//	cin >> direction;
	//	if (direction == 'h' || direction == 'H')
	//	{
	//		while (x <= quantify)
	//		{
	//			cout << chr;
	//			++x;
	//		}
	//	}
	//	else if (direction == 'v' || direction == 'V')
	//	{
	//		while (x <= quantify)
	//		{
	//			cout << chr << endl;
	//			++x;
	//		}
	//	}
	//	else if (direction != 'h' && direction != 'H' && direction != 'v' && direction != 'V')
	//	{
	//		cout << "Not correct\n";
	//	}
	//} while (direction != 'h' && direction != 'H' && direction != 'v' && direction != 'V');


	////Задача домашня 5	
	//int L, P, i = 0;
	//cout << "Enter the length of the fabric\n";
	//cin >> L;
	//cout << "Enter the length of the pillow\n";
	//cin >> P;
	//while (L >= P)
	//{
	//	L -= P;
	//	++i;
	//	cout << i << " pillow. " << L << " meters of fabric remained\n";
	//}

}