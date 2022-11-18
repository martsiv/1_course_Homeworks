#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <ctime> 


using namespace std;

int main()
{
	////Домашня задача 1
	//srand(unsigned(time(0)));
	//int number, heads = 0, tails = 0;
	//
	//for (int i = 1; i <= 9; i++)
	//{
	//	number = rand() % 2;
	//	if (number == 1)
	//	{
	//		++heads;
	//		cout << i << " - Heads\n";
	//	}
	//	else
	//	{
	//		++tails;
	//		cout << i << " - Tails\n";
	//	}
	//}
	//if (heads % 2 == 0)
	//	cout << "Positive\n";
	//else
	//	cout << "Negative\n";



	//// Задача Домашнє завдання 2.1
	//enum class Levels {Level_1 = 1, Level_2 = 2, Level_3 = 3};
	//srand(unsigned(time(0)));
	//int left, right, choise, answer, rate = 0, number1, number2, trueresult;
	//
	//cout << "Choise game level \n";
	//cout << "Level 1 - 5 questions (numbers 2-5)\n";
	//cout << "Level 2 - 5 questions (numbers 2-9)\n";
	//cout << "Level 3 - 4 questions (numbers 2-9) and 1 question (2-9 x 11-19)\n";
	//cout << "(Enter 1 to 3)\n";

	//do
	//{
	//	cin >> choise;

	//	switch (Levels(choise))
	//	{
	//	case Levels::Level_1:
	//		for (int i = 1; i <= 5; i++)
	//		{
	//			left = 2;
	//			right = 5;

	//			number1 = left + rand() % (right - left + 1);
	//			number2 = left + rand() % (right - left + 1);
	//			trueresult = number1 * number2;

	//			cout << number1 << " x " << number2 << " = ?\n";
	//			cin >> answer;
	//			if (answer == trueresult)
	//			{
	//				cout << "Your answer is correct.\n";
	//				++rate;
	//			}
	//			else
	//			{
	//				cout << "Sorry, your answer is incorrect. Correct answer " << trueresult << endl;
	//			}
	//		}
	//		break;

	//	case Levels::Level_2:
	//		for (int i = 1; i <= 5; i++)
	//		{
	//			left = 2;
	//			right = 9;

	//			number1 = left + rand() % (right - left + 1);
	//			number2 = left + rand() % (right - left + 1);
	//			trueresult = number1 * number2;

	//			cout << number1 << " x " << number2 << " = ?\n";
	//			cin >> answer;
	//			if (answer == trueresult)
	//			{
	//				cout << "Your answer is correct.\n";
	//				++rate;
	//			}
	//			else
	//			{
	//				cout << "Sorry, your answer is incorrect. Correct answer " << trueresult << endl;
	//			}
	//		}
	//		break;

	//	case Levels::Level_3:
	//		for (int i = 1; i <= 4; i++)
	//		{
	//			left = 2;
	//			right = 9;

	//			number1 = left + rand() % (right - left + 1);
	//			number2 = left + rand() % (right - left + 1);
	//			trueresult = number1 * number2;

	//			cout << number1 << " x " << number2 << " = ?\n";
	//			cin >> answer;
	//			if (answer == trueresult)
	//			{
	//				cout << "Your answer is correct.\n";
	//				++rate;
	//			}
	//			else
	//			{
	//				cout << "Sorry, your answer is incorrect. Correct answer " << trueresult << endl;
	//			}
	//		}
	//		for (int i = 1; i <= 1; i++)
	//		{
	//			left = 11;
	//			right = 19;

	//			number1 = left + rand() % (right - left + 1);
	//			number2 = left + rand() % (right - left + 1);
	//			trueresult = number1 * number2;

	//			cout << number1 << " x " << number2 << " = ?\n";
	//			cin >> answer;
	//			if (answer == trueresult)
	//			{
	//				cout << "Your answer is correct.\n";
	//				++rate;
	//			}
	//			else
	//			{
	//				cout << "Sorry, your answer is incorrect. Correct answer " << trueresult << endl;
	//			}
	//		}
	//		break;

	//	default:
	//		cout << "Incorrect data\n";
	//		break;
	//	}
	//}
	//while (choise < 1 || choise > 3);
	//cout << "You gave " << rate << " correct answers\n";


	////Задача 3
	//enum Mounth { January  = 1, February, March, April, May, June, July, August, September, October, November, December	};
	//int mount_number, day_started, day_of_week, average_number_of_days = 30, days_in_month, leap_year, weekend = 0;
	//cout << "Is this a leap year (0 - no, 1 - yes)?\n";
	//cin >> leap_year;
	//cout << "Input a month number (1-12) -> ";
	//do
	//{
	//	cin >> mount_number;
	//} while (mount_number < 1 || mount_number > 12);
	//cout << "Input a number day of week (1-7) when that mounth started -> ";
	//do
	//{
	//	cin >> day_started;
	//} while (day_started < 1 || day_started > 7);
	//day_of_week = day_started;

	//switch (Mounth(mount_number)) 
	//{
	//case Mounth::January:
	//	cout << "\n\t\t\t\tJanuary\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::February:
	//	cout << "\n\t\t\t\tFebruary\n\n";
	//	if (leap_year)
	//		days_in_month = average_number_of_days - 1;
	//	else
	//		days_in_month = average_number_of_days - 2;
	//	break;
	//case Mounth::March:
	//	cout << "\n\t\t\t\tMarch\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::April:
	//	cout << "\n\t\t\t\tApril\n\n";
	//	days_in_month = average_number_of_days;
	//	break;
	//case Mounth::May:
	//	cout << "\n\t\t\t\tMay\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::June:
	//	cout << "\n\t\t\t\tJune\n\n";
	//	days_in_month = average_number_of_days;
	//	break;
	//case Mounth::July:
	//	cout << "\n\t\t\t\tJuly\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::August:
	//	cout << "\n\t\t\t\tAugust\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::September:
	//	cout << "\n\t\t\t\tSeptember\n\n";
	//	days_in_month = average_number_of_days;
	//	break;
	//case Mounth::October:
	//	cout << "\n\t\t\t\tOctober\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//case Mounth::November:
	//	cout << "\n\t\t\t\tNovember\n\n";
	//	days_in_month = average_number_of_days;
	//	break;
	//case Mounth::December:
	//	cout << "\n\t\t\t\tDecember\n\n";
	//	days_in_month = average_number_of_days + 1;
	//	break;
	//}
	//cout << "\tMo\tTu\tWe\tTh\tFr\tSa\tSu\n\n\t";
	//for (int i = 1; i < day_started; i++)
	//{
	//	cout << "  \t";
	//}
	//for (int i = 1; i <= days_in_month; i++)
	//{
	//	cout << i << "\t";
	//	if (day_of_week % 7 == 0)
	//	{
	//		cout << "\n  \t";
	//	}
	//	if (day_of_week % 7 == 0 || (day_of_week + 1) % 7 == 0)
	//		++weekend;
	//	day_of_week++;

	//}

	//cout << "\n\nThat month weekends is " << weekend << endl;



	//Задача 2.2
	srand(unsigned(time(0)));	
	const int grade_win = 5;
	int num1, num2, summ1, summ2, grade1 = 0, grade2 = 0;
	for (; grade1 <= grade_win || grade1 <= grade_win; )
	{
		cout << "Player 1 throws:\n";
		for (int i = 0; i < 1; ++i)
		{
			num1 = 1 + rand() % 6;
			num2 = 1 + rand() % 6;
			summ1 = num1 + num2;
			cout << "Cubes with numbers fell out: " << num1 << ", " << num2 << " summ = " << summ1 << endl;
			if (num1 == num2)
			{
				++grade1;
				cout << "Congratulations, you got a double. You got plus 2 points\n";
			}

		}
		cout << "Player 2 throws:\n";
		for (int i = 0; i < 1; ++i)
		{
			num1 = 1 + rand() % 6;
			num2 = 1 + rand() % 6;
			summ2 = num1 + num2;
			cout << "Cubes with numbers fell out: " << num1 << ", " << num2 << " summ = " << summ2 << endl;
			if (num1 == num2)
			{
				++grade2;
				cout << "Congratulations, you got a double. You got plus 2 points\n";
			}

		}
		if (summ1 > summ2)
		{
			++grade1;
			cout << "In this round, player 1 earns 1 point.\n";
		}
		else if (summ2 > summ1)
		{
			++grade2;
			cout << "In this round, player 2 earns 1 point.\n";
		}
		else if (summ1 == summ2)
		{
			cout << "This round is a draw.\n";
		}

			
	}
	
	

}