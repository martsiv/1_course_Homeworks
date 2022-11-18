#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <limits.h>

using namespace std;

void main()
{
	////Задача з класної роботи
		//int money1 = 200, sales1;
		//int money2 = 200, sales2;
		//int money3 = 200, sales3;
		//int max = 0;
		//cout << "The employee receives a salary of 200$ plus a percentage of sales.\n";
		//cout << "Enter the amount of goods sold. For a manager 1: \n";
		//cin >> sales1;
		//cout << "Enter the amount of goods sold. For a manager 2: \n";
		//cin >> sales2;
		//cout << "Enter the amount of goods sold. For a manager 3: \n";
		//cin >> sales3;
		//
		//if (sales1 <= 500) //з\п 1-шого менеджера
		//{
		//	money1 = money1 + (float)sales1 * 3 / 100;
		//}
		//else if (sales1 > 500 && sales1 <= 1000)
		//{
		//	money1 = money1 + (float)sales1 * 5 / 100;
		//}
		//else if (sales1 > 1000)
		//{
		//	money1 = money1 + (float)sales1 * 8 / 100;
		//}
		//if (sales2 <= 500) //з\п 2-гого менеджера
		//{
		//	money2 = money2 + (float)sales2 * 3 / 100;
		//}
		//else if (sales2 > 500 && sales2 <= 1000)
		//{
		//	money2 = money2 + (float)sales2 * 5 / 100;
		//}
		//else if (sales1 > 1000)
		//{
		//	money2 = money2 + (float)sales2 * 8 / 100;
		//}
		//if (sales3 <= 500) //з\п 3-го менеджера
		//{
		//	money3 = money3 + (float)sales3 * 3 / 100;
		//}
		//else if (sales3 > 500 && sales3 <= 1000)
		//{
		//	money3 = money3 + (float)sales3 * 5 / 100;
		//}
		//else if (sales3 > 1000)
		//{
		//	money3 = money3 + (float)sales3 * 8 / 100;
		//}

		//max = money1;

		//if (money2 > max)
		//{
		//	max = money2;
		//}
		//if (money3 > max)
		//{
		//	max = money3;
		//}
		//cout << "Manager 1 have: " << money1 << "$\n";
		//cout << "Manager 2 have: " << money2 << "$\n";
		//cout << "Manager 3 have: " << money3 << "$\n";
		//if (max == money1)
		//{
		//	money1 += 200;
		//	cout << "In this mounth best manager 1. His salary with a bonus of 200 is: " << money1 << "$\n";
		//}
		//else if (max == money2)
		//{
		//	money2 += 200;
		//	cout << "In this mounth best manager 2. His salary with a bonus of 200 is: " << money2 << "$\n";

		//}
		//else if (max == money3)
		//{
		//	money3 += 200;
		//	cout << "In this mounth best manager 3. His salary with a bonus of 200 is: " << money3 << "$\n";
		//}


		////Задача домашня 1
		//int tank = 300, a_b, b_c, weight, flyDistance, fuel, addFuel;
		//cout << "The plane flies from point A through point B to point C.\nEnter the distance from A to B in km: \n";
		//cin >> a_b;
		//cout << "Enter the distance from B to C in km\n";
		//cin >> b_c;
		//cout << "Enter the weight in kg: ";
		//cin >> weight;
		//if (weight <= 500)
		//{
		//	flyDistance = (float)tank / 1;
		//	if (flyDistance < a_b)
		//	{
		//		cout << "There is not enough fuel to fly from point A to point B!!!\n";
		//	}
		//	else
		//	{
		//		fuel = ((float)flyDistance - a_b) * 1;
		//		cout << "You can fly from A to B point. In B point You have fuel - " << fuel << " L.\n";
		//		if (b_c * 1 <= tank)
		//		{

		//			addFuel = fuel >= b_c * 1 ? 0 : b_c * 1 - fuel;
		//			cout << "You can fly from B to C point. You need add " << addFuel << " L on the B point.\n";
		//		}
		//		else
		//			cout << "But You have too small tank to fly from point B to point C.\n";
		//	}
		//}
		//else if (weight <= 1000)
		//{
		//	flyDistance = (float)tank / 4;
		//	if (flyDistance < a_b)
		//	{
		//		cout << "There is not enough fuel to fly from point A to point B!!!\n";
		//	}
		//	else
		//	{
		//		fuel = ((float)flyDistance - a_b) * 4;
		//		cout << "You can fly from A to B point. In B point You have fuel - " << fuel << " L.\n";
		//		if (b_c * 4 <= tank)
		//		{

		//			addFuel = fuel >= b_c * 4 ? 0 : b_c * 4 - fuel;
		//			cout << "You can fly from B to C point. You need add " << addFuel << " L on the B point.\n";
		//		}
		//		else
		//			cout << "But You have too small tank to fly from point B to point C.\n";
		//	}
		//}
		//else if (weight <= 1500)
		//{
		//	flyDistance = (float)tank / 7;
		//	if (flyDistance < a_b)
		//	{
		//		cout << "There is not enough fuel to fly from point A to point B!!!\n";
		//	}
		//	else
		//	{
		//		fuel = ((float)flyDistance - a_b) * 7;
		//		cout << "You can fly from A to B point. In B point You have fuel - " << fuel << " L.\n";
		//		if (b_c * 7 <= tank)
		//		{

		//			addFuel = fuel >= b_c * 7 ? 0 : b_c * 7 - fuel;
		//			cout << "You can fly from B to C point. You need add " << addFuel << " L on the B point.\n";
		//		}
		//		else
		//			cout << "But You have too small tank to fly from point B to point C.\n";
		//	}
		//}
		//else if (weight <= 2000)
		//{
		//	flyDistance = (float)tank / 9;
		//	if (flyDistance < a_b)
		//	{
		//		cout << "There is not enough fuel to fly from point A to point B!!!\n";
		//	}
		//	else
		//	{
		//		fuel = ((float)flyDistance - a_b) * 9;
		//		cout << "You can fly from A to B point. In B point You have fuel - " << fuel << " L.\n";
		//		if (b_c * 9 <= tank)
		//		{

		//			addFuel = fuel >= b_c * 9 ? 0 : b_c * 9 - fuel;
		//			cout << "You can fly from B to C point. You need add " << addFuel << " L on the B point.\n";
		//		}
		//		else
		//			cout << "But You have too small tank to fly from point B to point C.\n";
		//	}
		//}
		//else
		//{
		//	cout << "With that weight on the board You can't fly!\n";
		//}

		////Задача домашня 2
		//int hh, mm, ss;
		//bool correct;
		//cout << "Enter the hours:\n";
		//cin >> hh;
		//cout << "Enter the minutes:\n";
		//cin >> mm;
		//cout << "Enter the seconds:\n";
		//cin >> ss;
		//(mm / 60 == 0) && (ss / 60 == 0) ? cout << "Correct. Your time is: " << hh << "h " << mm << "m " << ss << "s.\n" : cout << "Your time is not correct.\n";
		//

		////Задача домашня 3 
		//char a;
		//cout << "Enter the char 'y' or 'n'\n";
		//cin >> a;
		//a == 'y' || a == 'Y' ? cout << "YES" : (a == 'n' || a == 'N' ? cout << "NO" : cout << "DON'T KNOW");


		//// Задача домашня 4
		//int dd, mm, yy;
		//bool days, leapYear;
		//
		//cout << "Enter the year: ";
		//cin >> yy;
		//leapYear = (yy % 100 == 0 && yy % 400 == 0) || (yy % 100 != 0 && yy % 4 == 0);

		//cout << "Enter the month: ";
		//do
		//{
		//	cin >> mm;
		//	if (mm < 1 || mm > 12)
		//	{
		//		cout << "Error. Enter the valid month: \n";
		//	}
		//} 
		//while (mm < 1 || mm > 12);


		//cout << "Enter the day: ";

		// Тут є два шляхи перевірки коректності чи день місяця реальний. 
		// 1 - Перший - тернарними вкладеними операціями. 2 - Другий через If Else
		//				!!!Розкоментувати необхідний варіант!!!
		// 
		//// Варіант рішення 1
		//do
		//{
		//	cin >> dd;
		//	days = mm == 1 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 2 && leapYear == 1 && dd >= 1 && dd <= 29 ? 1 :
		//		mm == 2 && leapYear == 0 && dd >= 1 && dd <= 28 ? 1 :
		//		mm == 3 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 4 && dd >= 1 && dd <= 30 ? 1 :
		//		mm == 5 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 6 && dd >= 1 && dd <= 30 ? 1 :
		//		mm == 7 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 8 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 9 && dd >= 1 && dd <= 30 ? 1 :
		//		mm == 10 && dd >= 1 && dd <= 31 ? 1 :
		//		mm == 11 && dd >= 1 && dd <= 30 ? 1 :
		//		mm == 12 && dd >= 1 && dd <= 31 ? 1 : 0;
		//	!days ? cout << "Error! Enter valid day: \n" : cout << "Your date - " << yy << "year " << mm << "month " << dd << "day\n";
		//}
		//while (days == 0);


		//// Варіант рішення 2

		//do
		//{
		//	cin >> dd;
		//	if (mm == 1 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 2 && leapYear == 1 && dd >= 1 && dd <= 29)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 2 && leapYear == 0 && dd >= 1 && dd <= 28)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 3 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 4 && dd >= 1 && dd <= 30)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 5 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 6 && dd >= 1 && dd <= 30)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 7 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 8 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 9 && dd >= 1 && dd <= 30)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 10 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 11 && dd >= 1 && dd <= 30)
		//	{
		//		days = 1;
		//	}
		//	else if (mm == 12 && dd >= 1 && dd <= 31)
		//	{
		//		days = 1;
		//	}
		//	else
		//		days = 0;
		//} 
		//while (days == 0);
		//cout << "Your date - " << yy << "year " << mm << "month " << dd << "days\n";

		//// Друга частина задачі. Виведення наступного дня
		//++dd;
		//if (mm == 1 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 2 && leapYear == 1 && dd > 29)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 2 && leapYear == 0 && dd > 28)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 3 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 4 && dd > 30)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 5 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 6 && dd > 30)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 7 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 8 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 9 && dd > 30)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 10 && dd > 31)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 11 && dd > 30)
		//{
		//	dd = 1;
		//	++mm;
		//}
		//else if (mm == 12 && dd > 31)
		//{
		//	dd = 1;
		//	mm = 1;
		//	++yy;
		//}
		//cout << "+1 day. \nNew date : " << yy << "year " << mm << "month " << dd << "days\n";


		//// Задача домашня 5

	//int dd1, mm1, yy1, dd2, mm2, yy2;
	//unsigned long allDays1, allDays2;
	//bool trueDays, leapYear;

	//cout << "Enter the year of first date: ";
	//cin >> yy1;
	//leapYear = (yy1 % 100 == 0 && yy1 % 400 == 0) || (yy1 % 100 != 0 && yy1 % 4 == 0);

	//cout << "Enter the month of the first date: ";
	//do
	//{
	//	cin >> mm1;
	//	if (mm1 < 1 || mm1 > 12)
	//	{
	//		cout << "Error. Enter the valid month of the first date: \n";
	//	}
	//} while (mm1 < 1 || mm1 > 12);

	//cout << "Enter the day of the first date: ";

	//do
	//{
	//	cin >> dd1;
	//	if (mm1 == 1 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 2 && leapYear == 1 && dd1 >= 1 && dd1 <= 29)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 2 && leapYear == 0 && dd1 >= 1 && dd1 <= 28)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 3 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 4 && dd1 >= 1 && dd1 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 5 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 6 && dd1 >= 1 && dd1 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 7 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 8 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 9 && dd1 >= 1 && dd1 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 10 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 11 && dd1 >= 1 && dd1 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm1 == 12 && dd1 >= 1 && dd1 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else
	//		trueDays = 0;
	//	!trueDays ? cout << "Error! Enter valid day of the first date: \n" : cout << "Your date N1 - " << yy1 << "year " << mm1 << "month " << dd1 << "day\n";
	//} while (trueDays == 0);
	//allDays1 = (unsigned)yy1 * 364 + (unsigned)yy1 / 4;

	//if (leapYear == 1)
	//{
	//	if (mm1 > 2)
	//	{
	//		allDays1 += 29;
	//	}
	//}
	//if (leapYear == 0)
	//{
	//	if (mm1 > 2)
	//	{
	//		allDays1 += 28;
	//	}
	//}
	//if (mm1 > 1)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 3)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 4)
	//{
	//	allDays1 += 30;
	//}
	//if (mm1 > 5)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 6)
	//{
	//	allDays1 += 30;
	//}
	//if (mm1 > 7)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 8)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 9)
	//{
	//	allDays1 += 30;
	//}
	//if (mm1 > 10)
	//{
	//	allDays1 += 31;
	//}
	//if (mm1 > 11)
	//{
	//	allDays1 += 30;
	//}
	//allDays1 += dd1;

	//!trueDays;
	//!leapYear;

	//cout << "Enter the year of second date: ";
	//cin >> yy2;
	//leapYear = (yy2 % 100 == 0 && yy2 % 400 == 0) || (yy2 % 100 != 0 && yy2 % 4 == 0);

	//cout << "Enter the month of the second date: ";
	//do
	//{
	//	cin >> mm2;
	//	if (mm2 < 1 || mm2 > 12)
	//	{
	//		cout << "Error. Enter the valid month of the second date: \n";
	//	}
	//} while (mm2 < 1 || mm2 > 12);

	//cout << "Enter the day of the second date: ";

	//do
	//{
	//	cin >> dd2;
	//	if (mm2 == 1 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 2 && leapYear == 1 && dd2 >= 1 && dd2 <= 29)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 2 && leapYear == 0 && dd2 >= 1 && dd2 <= 28)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 3 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 4 && dd2 >= 1 && dd2 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 5 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 6 && dd2 >= 1 && dd2 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 7 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 8 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 9 && dd2 >= 1 && dd2 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 10 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 11 && dd2 >= 1 && dd2 <= 30)
	//	{
	//		trueDays = 1;
	//	}
	//	else if (mm2 == 12 && dd2 >= 1 && dd2 <= 31)
	//	{
	//		trueDays = 1;
	//	}
	//	else
	//		trueDays = 0;
	//	!trueDays ? cout << "Error! Enter valid day of the second date: \n" : cout << "Your date N2 - " << yy2 << "year " << mm2 << "month " << dd2 << "day\n";
	//} while (trueDays == 0);
	//allDays2 = (unsigned)yy2 * 364 + (unsigned)yy2 / 4;

	//if (leapYear == 1)
	//{
	//	if (mm2 > 2)
	//	{
	//		allDays2 += 29;
	//	}
	//}
	//if (leapYear == 0)
	//{
	//	if (mm2 > 2)
	//	{
	//		allDays2 += 28;
	//	}
	//}
	//if (mm2 > 1)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 3)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 4)
	//{
	//	allDays2 += 30;
	//}
	//if (mm2 > 5)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 6)
	//{
	//	allDays2 += 30;
	//}
	//if (mm2 > 7)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 8)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 9)
	//{
	//	allDays2 += 30;
	//}
	//if (mm2 > 10)
	//{
	//	allDays2 += 31;
	//}
	//if (mm2 > 11)
	//{
	//	allDays2 += 30;
	//}
	//allDays2 += dd2;
	//allDays2 <= allDays1 ? cout << "Your second date is no greater or equal to than date one" : cout << "The difference in days is " << allDays2 - allDays1 << endl;
}