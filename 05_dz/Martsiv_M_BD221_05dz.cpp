#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <limits.h>


using namespace std;

void main()
{
	//////«‡‰‡˜‡ 1 œ≈–≈¬≤–ﬂÀ» Õ¿ œ¿–≤
	//int number, digit1, digit2, digit3, digit4, digit5, digit6;
	//cout << "Enter a 6-digit number:\n";
	//cin >> number;
	//if (number <= 99999 || number >= 1000000)
	//{
	//	cout << "Your number is NOT 6-digit\n";
	//}
	//else 
	//{
	//	digit1 = number / 100000;
	//	digit2 = number % 100000 / 10000;
	//	digit3 = number % 10000 / 1000;
	//	digit4 = number % 1000 / 100;
	//	digit5 = number % 100 / 10;
	//	digit6 = number % 10;
	//	cout << digit1 << endl << digit2 << endl << digit3 << endl << digit4 << endl << digit5 << endl << digit6 << endl;
	//	if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6)
	//	{
	//		cout << "Congratuliation, your number is happy!\n";
	//	}
	//	else
	//	{
	//		cout << "Your number is not happy\n";
	//	}
	//}


	////«‡‰‡˜‡ 2  œ≈–≈¬≤–ﬂÀ» Õ¿ œ¿–≤
	//int num1, num2, num3, num4, num5, num6, num7, empty;
	//cout << "Enter 1 number:\n";
	//cin >> num1;
	//cout << "Enter 2 number:\n";
	//cin >> num2;
	//cout << "Enter 3 number:\n";
	//cin >> num3;
	//cout << "Enter 4 number:\n";
	//cin >> num4;
	//cout << "Enter 5 number:\n";
	//cin >> num5;
	//cout << "Enter 6 number:\n";
	//cin >> num6;
	//cout << "Enter 7 number:\n";
	//cin >> num7;
	//if (num1 < num2)
	//{
	//	num1 = num2;
	//}
	//if (num1 < num3)
	//{
	//	num1 = num3;
	//}
	//if (num1 < num4)
	//{
	//	num1 = num4;
	//}
	//if (num1 < num5)
	//{
	//	num1 = num5;
	//}
	//if (num1 < num6)
	//{
	//	num1 = num6;
	//}
	//if (num1 < num7)
	//{
	//	num1 = num7;
	//}
	//cout << "The largest number = " << num1;


	////«‡‰‡˜‡ 3
	//
	////“‡ËÙË
	//const float kyivstar_kyivstar = 0, kyivstar_lifecell = 1, kyivstar_vodafone = 1, lifecell_lifecell = 0, lifecell_kyivstar = 2, lifecell_vodafone =3, vodafone_vodafone = 0, vodafone_kyivstar = 1, vodafone_lifecell = 3;
	//
	//int time, price, hrn, kop;
	//char from, whom;
	//cout << "This program calculates the cost of the call\n";
	//cout << "Enter the call time in seconds:\n";
	//cin >> time;
	//if (time < 1 || time > 99999)
	//{
	//	cout << "Value isn`t correct!!!\n";
	//}
	//else
	//{
	//	cout << "Enter the name of your operator (1 character). \nKyivstar - K \nLifecell - L \nVodafone - V\n";
	//	cin >> from;
	//	cout << "Enter the name of the operator you are calling (1 character). \nKyivstar - k \nLifecell - L \nVodafone - v\n";
	//	cin >> whom;
	//	if ((from == 'k' || from == 'K')&&(whom == 'k' || whom == 'K'))
	//	{
	//		price = time * kyivstar_kyivstar;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'k' || from == 'K') && (whom == 'l' || whom == 'L'))
	//	{
	//		price = time * kyivstar_lifecell;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'k' || from == 'K') && (whom == 'v' || whom == 'V'))
	//	{
	//		price = time * kyivstar_vodafone;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'l' || from == 'L') && (whom == 'l' || whom == 'L'))
	//	{
	//		price = time * lifecell_lifecell;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'l' || from == 'L') && (whom == 'k' || whom == 'K'))
	//	{
	//		price = time * lifecell_kyivstar;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'l' || from == 'l') && (whom == 'v' || whom == 'V'))
	//	{
	//		price = time * lifecell_vodafone;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'v' || from == 'V') && (whom == 'v' || whom == 'V'))
	//	{
	//		price = time * vodafone_vodafone;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'v' || from == 'V') && (whom == 'k' || whom == 'K'))
	//	{
	//		price = time * vodafone_kyivstar;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else if ((from == 'v' || from == 'V') && (whom == 'l' || whom == 'L'))
	//	{
	//		price = time * vodafone_lifecell;
	//		hrn = price / 100;
	//		kop = price % 100;
	//		cout << "The price of your call is equal to: " << hrn << "hrn " << kop << "kop.\n";
	//	}
	//	else
	//	{
	//		cout << "!!!Data entered incorrectly!!!";
	//	}
	//}



	////«‡‰‡˜‡ 4
	//int choice, desired_income, number_of_delays, lines_of_code, monetary_fine = 20;
	//const float price = 0.5;
	//cout << "Hello, Vasya, Let's count your salary!\n Vasya gets 50$ for every 100 lines of code.\n However, Vasya is fined 20$ for every third delay\n\n";
	//cout << "What exactly are we going to count? \nDetermine how many lines to write \t\t(1) \nDetermine how many times you can be late \t(2) \nDetermine how much money you will receive \t(3)";
	//cout << "\nMake your choice (1, 2, 3):\n";
	//cin >> choice;
	//if (choice == 1)
	//{
	//	cout << "Enter the desired income (in dollars):\n";
	//	cin >> desired_income;
	//	cout << "Enter the number of delays:\n";
	//	cin >> number_of_delays;
	//	lines_of_code = (desired_income + (number_of_delays / 3 * monetary_fine)) / price;
	//	cout << "Vasya must write " << lines_of_code << " lines of code\n";
	//}
	//else if (choice == 2)
	//{
	//	cout << "Enter the number of lines of code written:\n";
	//	cin >> lines_of_code;
	//	cout << "Enter the desired income (in dollars):\n";
	//	cin >> desired_income;
	//	number_of_delays = ((lines_of_code * price) - desired_income) / monetary_fine;
	//	number_of_delays = number_of_delays * 3 + 2;
	//	cout << "Vasya may be late " << number_of_delays << "times\n";
	//}
	//else if (choice == 3)
	//{
	//	cout << "Enter the number of lines of code written:\n";
	//	cin >> lines_of_code;
	//	cout << "Enter the number of delays:\n";
	//	cin >> number_of_delays;
	//	desired_income = lines_of_code * price - (number_of_delays / 3 * monetary_fine);
	//	cout << "Vasya will be paid " << desired_income << "$\n";
	//}
	//else
	//{
	//	cout << "your value isn't correct!!!\n";
	//}
}