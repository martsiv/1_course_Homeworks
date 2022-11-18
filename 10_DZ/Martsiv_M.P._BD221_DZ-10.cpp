#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <ctime> 
#include <iomanip> 



using namespace std;

int main()
{

	////Задача 1.1
	//char charname;
	//cout << "Enter your char:";
	//cin >> charname;
	//if (charname >= 65 && charname <= 90)
	//	charname += 32;
	//for (char i = 'a'; i <= charname; i++)
	//{
	//	for (int b = 1; b <= int(i) - 96; b++)
	//		cout << i;
	//	cout << endl;
	//}

	////Задача 1.5
	//char charname;
	//cout << "Enter your char:";
	//cin >> charname;
	//if (charname >= 65 && charname <= 90)
	//charname += 32;

	//for (int x = 'z'; x >= charname; --x)
	//{
	//	for (char i = x; i <= 'z'; i++)
	//		cout << i;
	//	cout << endl;
	//}

	////Задача 1.6

	//int a = 0, b = 9;
	//int tmp, x, y;
	//for (int i = a + 1; i <= b; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		x = a;
	//		y = i;
	//	}
	//	else
	//	{
	//		x = i;
	//		y = a;
	//	}
	//	for (int j = a; j <= b; j++)
	//	{
	//		cout << y;
	//		if (x < y)
	//		{
	//			tmp = x;
	//			x = y;
	//			y = tmp;
	//		}
	//		else if (y<x)
	//		{
	//			tmp = x;
	//			x = y;
	//			y = tmp;
	//		}
	//	}
	//	cout << endl;
	//}

	////Задача 1.8
	//const char first = 'a', last = 'z';
	//char middle = (int(last) - 96) / 2 + 96;
	//for (char i = first, j = last; i <= middle; i++, j--)
	//{
	//	for (char a = 'a'; a < i; a++)
	//		cout << " ";
	//	for (char k = i; k <= j; k++)
	//	{
	//		cout << k;
	//	}
	//	for (char a = 'a'; a < i; a++)
	//		cout << " ";
	//	cout << endl;
	//}

	////Задача 1.9
	//const char first = 'a', last = 'z';
	//for (char i = last; i >= first; i--)
	//{
	//	for (char j = i; j >= first; j--)
	//		cout << j;
	//	cout << endl;
	//}

	////Задача 2
	//int year, days;
	//int midday = 30;
	//cout << "Enter a year: \n";
	//cin >> year;
	////Перевірка на високосність
	//bool result_year = (year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
	////Алгоритм, який видає день тижня, з якого починається рік (0 понеділок...)
	//int d = 1, mounth = 1;
	//int a = (14 - mounth) / 12;
	//int y = year - a;
	//int m = mounth + 12 * a - 2;
	//int iWeek = ((d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) - 1) % 7;

	//for (int i = 1; i <= 12; i++)
	//{
	//	if (i == 1)
	//	{
	//		cout << "\t\t\t January\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 2)
	//	{
	//		cout << "\t\t\t February\n";
	//		days = result_year > 0 ? midday - 1 : midday - 2;
	//	}
	//	else if (i == 3)
	//	{
	//		cout << "\t\t\t March\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 4)
	//	{
	//		cout << "\t\t\t April\n";
	//		days = midday;
	//	}
	//	else if (i == 5)
	//	{
	//		cout << "\t\t\t May\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 6)
	//	{
	//		cout << "\t\t\t June\n";
	//		days = midday;
	//	}
	//	else if (i == 7)
	//	{
	//		cout << "\t\t\t July\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 8)
	//	{
	//		cout << "\t\t\t August\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 9)
	//	{
	//		cout << "\t\t\t September\n";
	//		days = midday;
	//	}
	//	else if (i == 10)
	//	{
	//		cout << "\t\t\t October\n";
	//		days = midday + 1;
	//	}
	//	else if (i == 11)
	//	{
	//		cout << "\t\t\t November\n";
	//		days = midday;
	//	}
	//	else if (i == 12)
	//	{
	//		cout << "\t\t\t December\n";
	//		days = midday + 1;
	//	}
	//	
	//	cout << "\nMo\tTu\tWe\tTh\tFr\tSa\tSu\n";
	//	
	//	//Цикл, який робить пробіли на початку місяця перед початком днів 
	//	for (int k = 0; k < iWeek; k++) 
	//		cout << "  \t";

	//	//Цикл розставляє дні в місяці 
	//	for (int l = 1; l <= days; l++)
	//	{
	//		cout << l << "\t";
	//		if (iWeek == 6)
	//			cout << endl;
	//		iWeek++;
	//		iWeek = iWeek % 7;
	//	}
	//	cout << "\n\n";
	//}


	////Задача 3
	//int height, number;
	//char space = ' ', star = '*';
	//	cout << "Enter the height of the slide - ";
	//cin >> height;
	//cout << "Enter the number of slides - ";
	//cin >> number;

	//for (int i = 1; i <= number; i++) //Цикл на загальну довжину гірок
	//{
	//	for (int j = 1; j <= height; j++) //Цикл на підйом до піку гірки
	//	{
	//		for (int k = 1; k < j; k++) //Пробіли перед зірочками
	//			cout << space;
	//		cout << star << endl;
	//	}
	//	for (int j = height; j >= 1; j--) //Цикл на спуск від вершини
	//	{
	//		for (int k = 1; k < j; k++)
	//			cout << space;
	//		cout << star << endl;
	//	}
	//}


	////Задача 4
	//int height, number;
	//char space = ' ', star = '*';
	//cout << "Enter the height of the triangle - ";
	//cin >> height;

	//number = 1;
	//for (int i = 1; i < height; i++)
	//	number += 2;
	//
	//for (int i = 1; i <= height; i++, number -= 2) 
	//{
	//	for (int j = 1; j < i; j++)
	//		cout << space;
	//	for (int k = 1; k <= number; k++)
	//		cout << star;
	//	cout << endl;
	//}

	////Задача 5
	//int number;
	//char black = 177, white = 219, tmp;
	//cout << black << endl << white << endl;
	//cout << "Enter the size of the board - ";
	//cin >> number;
	//tmp = white;
	//for (int i = 1; i <= number; i++)
	//{
	//	for (int j = 1; j <= number; j++)
	//	{
	//		cout << tmp;
	//		if (tmp == white)
	//			tmp = black;
	//		else
	//			tmp = white;
	//	}
	//	cout << endl;
	//}





}