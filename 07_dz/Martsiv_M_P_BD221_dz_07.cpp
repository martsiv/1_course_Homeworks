#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <limits.h>

using namespace std;

int main()
{
	////Задача 5
	//enum class Direction { north = 1, south, west, east };
	//enum class Command {forward = 1, back, left, right};
	//int command, direction;
	//cout << "Enter the starting direction of the ship" << endl;
	//cout << "\t 1- North\n"
	//	 << "\t 2- South\n"
	//	 << "\t 3- West\n"
	//	 << "\t 4- East\n";
	//cin >> direction;
	//switch (Direction(direction))
	//{
	//case Direction::north:
	//	cout << "Select action :" << endl;
	//	cout << "\t 1- forward\n"
	//		<< "\t 2- turn back\n"
	//		<< "\t 3- turn left\n"
	//		<< "\t 4- turn right\n";
	//	cin >> command;
	//	switch (Command(command))
	//	{
	//	case Command::forward:
	//		cout << "The ship is looking noorth\n";
	//		break;
	//	case Command::back:
	//		cout << "The ship is looking south\n";
	//		break;
	//	case Command::left:
	//		cout << "The ship is looking west\n";
	//		break;
	//	case Command::right:
	//		cout << "The ship is looking east\n";
	//		break;
	//	default:
	//		cout << "Wrong action!\n";
	//	}
	//	break;
	//case Direction::south:
	//		cout << "Select action :" << endl;
	//		cout << "\t 1- forward\n"
	//			<< "\t 2- turn back\n"
	//			<< "\t 3- turn left\n"
	//			<< "\t 4- turn right\n";
	//		cin >> command;
	//		switch (Command(command))
	//		{
	//		case Command::forward:
	//			cout << "The ship is looking south\n";
	//			break;
	//		case Command::back:
	//			cout << "The ship is looking noorth\n";
	//			break;
	//		case Command::left:
	//			cout << "The ship is looking east\n";
	//			break;
	//		case Command::right:
	//			cout << "The ship is looking west\n";
	//			break;
	//		default:
	//			cout << "Wrong action!\n";
	//		}
	//		break;
	//case Direction::west:
	//		cout << "Select action :" << endl;
	//		cout << "\t 1- forward\n"
	//			<< "\t 2- turn back\n"
	//			<< "\t 3- turn left\n"
	//			<< "\t 4- turn right\n";
	//		cin >> command;
	//		switch (Command(command))
	//		{
	//		case Command::forward:
	//			cout << "The ship is looking west\n";
	//			break;
	//		case Command::back:
	//			cout << "The ship is looking east\n";
	//			break;
	//		case Command::left:
	//			cout << "The ship is looking south\n";
	//			break;
	//		case Command::right:
	//			cout << "The ship is looking noorth\n";
	//			break;
	//		default:
	//			cout << "Wrong action!\n";
	//		}
	//		break;
	//case Direction::east:
	//	cout << "Select action :" << endl;
	//	cout << "\t 1- forward\n"
	//		<< "\t 2- turn back\n"
	//		<< "\t 3- turn left\n"
	//		<< "\t 4- turn right\n";
	//	cin >> command;
	//	switch (Command(command))
	//	{
	//	case Command::forward:
	//		cout << "The ship is looking east\n";
	//		break;
	//	case Command::back:
	//		cout << "The ship is looking west\n";
	//		break;
	//	case Command::left:
	//		cout << "The ship is looking noorth\n";
	//		break;
	//	case Command::right:
	//		cout << "The ship is looking south\n";
	//		break;
	//	default:
	//		cout << "Wrong action!\n";
	//	}
	//	break;
	//default:
	//	cout << "Wrong direction!\n";
	//}


	////Задача 6
	//int x, y;
	//cout << "Enter the coordinates of the point x, y:\n";
	//cin >> x >> y;
	//x >= -1 && x <= 1 && y >= 0 && y <= 1 || x >= 0 && x <= 1 && y >= -1 && y <= 1 ? cout << "The point is in the gray area\n" : cout << "The point is not in the gray area\n";


	////Задача домашня 1
	//enum class ConsoleType {backgrount = 1, text = 2};
	//enum class Color { Black = 0, Blue, Green, Aqua, Red, Purple, Yellow, White, Gray, 
	//	LightBlue, LightGreen, LightAqua, LightRed, LightPurple, LightYellow, BrightWhite };
	//int choise;
	//int color;
	//cout << "What do you want to change, background or text color?\n";
	//cout << "\t1 - background\n";
	//cout << "\t2 - text color\n";
	//cin >> choise;
	//switch (ConsoleType(choise))
	//{
	//case ConsoleType::backgrount:
	//	cout << "What background color do you want to set??\n";
	//	cout << "\t0 - Black\n";
	//	cout << "\t1 - Blue\n";
	//	cout << "\t2 - Green\n";
	//	cout << "\t3 - Aqua\n";
	//	cout << "\t4 - Red\n";
	//	cout << "\t5 - Purple\n";
	//	cout << "\t6 - Yellow\n";
	//	cout << "\t7 - White\n";
	//	cout << "\t8 - Gray\n";
	//	cout << "\t9 - LightBlue\n";
	//	cout << "\t10 - LightGreen\n";
	//	cout << "\t11 - LightAqua\n";
	//	cout << "\t12 - LightRed\n";
	//	cout << "\t13 - LightPurple\n";
	//	cout << "\t14 - LightYellow\n";
	//	cout << "\t15 - BrightWhite\n";
	//	cin >> color;
	//	switch (Color(color))
	//	{
	//	case Color::Black:
	//		system("color 07");
	//		break;
	//	case Color::Blue:
	//		system("color 17");
	//		break;
	//	case Color::Green:
	//		system("color 27");
	//		break;
	//	case Color::Aqua:
	//		system("color 37");
	//		break;
	//	case Color::Red:
	//		system("color 47");
	//		break;
	//	case Color::Purple:
	//		system("color 57");
	//		break;
	//	case Color::Yellow:
	//		system("color 67");
	//		break;
	//	case Color::White:
	//		system("color 70");
	//		break;
	//	case Color::Gray:
	//		system("color 80");
	//		break;
	//	case Color::LightBlue:
	//		system("color 90");
	//		break;
	//	case Color::LightGreen:
	//		system("color A0");
	//		break;
	//	case Color::LightAqua:
	//		system("color B0");
	//		break;
	//	case Color::LightRed:
	//		system("color C0");
	//		break;
	//	case Color::LightPurple:
	//		system("color D0");
	//		break;
	//	case Color::LightYellow:
	//		system("color E0");
	//		break;
	//	case Color::BrightWhite:
	//		system("color F0");
	//		break;
	//	default:
	//		cout << "Wrong Color.\n";
	//		break;
	//	}
	//	break;
	//case ConsoleType::text:
	//	cout << "What text color do you want to set??\n";
	//	cout << "\t0 - Black\n";
	//	cout << "\t1 - Blue\n";
	//	cout << "\t2 - Green\n";
	//	cout << "\t3 - Aqua\n";
	//	cout << "\t4 - Red\n";
	//	cout << "\t5 - Purple\n";
	//	cout << "\t6 - Yellow\n";
	//	cout << "\t7 - White\n";
	//	cout << "\t8 - Gray\n";
	//	cout << "\t9 - LightBlue\n";
	//	cout << "\t10 - LightGreen\n";
	//	cout << "\t11 - LightAqua\n";
	//	cout << "\t12 - LightRed\n";
	//	cout << "\t13 - LightPurple\n";
	//	cout << "\t14 - LightYellow\n";
	//	cout << "\t15 - BrightWhite\n";
	//	cin >> color;
	//	switch (Color(color))
	//	{
	//	case Color::Black:
	//		system("color 70");
	//		break;
	//	case Color::Blue:
	//		system("color 71");
	//		break;
	//	case Color::Green:
	//		system("color 72");
	//		break;
	//	case Color::Aqua:
	//		system("color 73");
	//		break;
	//	case Color::Red:
	//		system("color 74");
	//		break;
	//	case Color::Purple:
	//		system("color 75");
	//		break;
	//	case Color::Yellow:
	//		system("color 76");
	//		break;
	//	case Color::White:
	//		system("color 07");
	//		break;
	//	case Color::Gray:
	//		system("color 08");
	//		break;
	//	case Color::LightBlue:
	//		system("color 09");
	//		break;
	//	case Color::LightGreen:
	//		system("color 0A");
	//		break;
	//	case Color::LightAqua:
	//		system("color 0B");
	//		break;
	//	case Color::LightRed:
	//		system("color 0C");
	//		break;
	//	case Color::LightPurple:
	//		system("color 0D");
	//		break;
	//	case Color::LightYellow:
	//		system("color 0E");
	//		break;
	//	case Color::BrightWhite:
	//		system("color 0F");
	//		break;
	//	default:
	//		cout << "Wrong Color.\n";
	//		break;
	//	}
	//	break;
	//default:
	//	cout << "Not correct!\n";
	//}


	////Задача домашня 2
	//enum class Menu {Pizzamenu = 1, Drinkmenu};
	//enum class PizzaMenu { Pepperoni = 1, Margherita, Neapolitan, Diabola };
	//enum class DrinkMenu { Cola = 1, Juice, Water };
	//const float pepperoni_price = 9.30, margherita_price = 7.20, neapolitan_price = 8.40, diabola_price = 7.70, cola_price = 1.90, juice_price = 2.20, water_price = 1.50;
	//int menu, number, pizzamenu, drinkmenu, pepperoni = 0, margherita = 0, neapolitan = 0, diabola = 0, cola = 0, juice = 0, water = 0;
	//float discount = 0, pizza_price = 0, drink_price = 0, total_price = 0;											  //Загальні суми за їжу, на пої, разом та знижка
	//float pepperoni_total_price = 0, margherita_total_price = 0, neapolitan_total_price = 0, diabola_total_price = 0; //Суми за конкретну піцу
	//float cola_total_price = 0, juice_total_price = 0, water_total_price = 0;										  //Суми за конкретний напій
	//char yesno;

	//cout << "What do you want to order, the pizza menu or the drinks menu?\n";
	//cout << "\t1 - pizza menu\n";
	//cout << "\t2 - drink menu\n";
	//cin >> menu;

	//switch (Menu(menu))
	//{
	//case Menu::Pizzamenu:
	//	cout << "Choose a pizza:\n";
	//	cout << "\t1 - Pepperoni. ";
	//	cout << "\t\tPrice = " << pepperoni_price << "$\n";
	//	cout << "\t2 - Margherita. ";
	//	cout << "\tPrice = " << margherita_price << "$\n";
	//	cout << "\t3 - Neapolitan. ";
	//	cout << "\tPrice = " << neapolitan_price << "$\n";
	//	cout << "\t4 - Diabola. ";
	//	cout << "\t\tPrice = " << diabola_price << "$\n";
	//	cin >> pizzamenu;
	//	switch (PizzaMenu(pizzamenu))
	//	{
	//	case PizzaMenu::Pepperoni:
	//		cout << "How many pieces do you want to order ?\n";
	//		cin >> number;
	//		pepperoni += number;
	//		cout << "You ordered a Pepperoni pizza and you have: " << pepperoni << " Pepperoni\n";
	//		break;
	//	case PizzaMenu::Margherita:
	//		cout << "How many pieces do you want to order ?\n";
	//		cin >> number;
	//		margherita += number;
	//		cout << "You ordered a Margherita pizza and you have: " << margherita << " Margherita\n";
	//		break;
	//	case PizzaMenu::Neapolitan:
	//		cout << "How many pieces do you want to order ?\n";
	//		cin >> number;
	//		neapolitan += number;
	//		cout << "You ordered a Neapolitan pizza and you have: " << neapolitan << " Neapolitan\n";
	//		break;
	//	case PizzaMenu::Diabola:
	//		cout << "How many pieces do you want to order ?\n";
	//		cin >> number;
	//		diabola += number;
	//		cout << "You ordered a Diabola pizza and you have: " << diabola << " Diabola\n";
	//		break;
	//	default:
	//		cout << "Error!\n";
	//	}
	//	break;
	//case Menu::Drinkmenu:
	//	cout << "Choose a drink:\n";
	//	cout << "\t1 - Cola. ";
	//	cout << "\t\tPrice = " << cola_price << "$\n";
	//	cout << "\t2 - Juice. ";
	//	cout << "\t\tPrice = " << juice_price << "$\n";
	//	cout << "\t3 - Water. ";
	//	cout << "\t\tPrice = " << water_price << "$\n";
	//	cin >> drinkmenu;
	//	switch (DrinkMenu(drinkmenu))
	//	{
	//	case DrinkMenu::Cola:
	//		cout << "How many drinks would you like to order?\n";
	//		cin >> number;
	//		cola += number;
	//		cout << "You chose a cola drink in quantity - " << cola << endl;
	//		break;
	//	case DrinkMenu::Juice:
	//		cout << "How many drinks would you like to order?\n";
	//		cin >> number;
	//		juice += number;
	//		cout << "You chose a Juice drink in quantity - " << juice << endl;
	//		break;
	//	case DrinkMenu::Water:
	//		cout << "How many drinks would you like to order?\n";
	//		cin >> number;
	//		water += number;
	//		cout << "You chose a Water drink in quantity - " << water << endl;
	//		break;
	//		break;
	//	default:
	//		cout << "Error!\n";
	//		break;
	//	}
	//default:
	//	cout << "Eror!\n";
	//}
	//
	//do
	//{
	//	cout << "\nDo you want to order somethings else? (y, n)\n";
	//	cin >> yesno;
	//	if (yesno == 'y' || yesno == 'Y')
	//	{
	//		cout << "What do you want to order, the pizza menu or the drinks menu?\n";
	//		cout << "\t1 - pizza menu\n";
	//		cout << "\t2 - drink menu\n";

	//		cin >> menu;
	//		switch (Menu(menu))
	//		{
	//		case Menu::Pizzamenu:
	//			cout << "Choose a pizza:\n";
	//			cout << "\t1 - Pepperoni. ";
	//			cout << "\t\tPrice = " << pepperoni_price << "$\n";
	//			cout << "\t2 - Margherita. ";
	//			cout << "\tPrice = " << margherita_price << "$\n";
	//			cout << "\t3 - Neapolitan. ";
	//			cout << "\tPrice = " << neapolitan_price << "$\n";
	//			cout << "\t4 - Diabola. ";
	//			cout << "\t\tPrice = " << diabola_price << "$\n";
	//			cin >> pizzamenu;
	//			switch (PizzaMenu(pizzamenu))
	//			{
	//			case PizzaMenu::Pepperoni:
	//				cout << "How many pieces do you want to order ?\n";
	//				cin >> number;
	//				pepperoni += number;
	//				cout << "You ordered a Pepperoni pizza and you have: " << pepperoni << " Pepperoni\n";
	//				break;
	//			case PizzaMenu::Margherita:
	//				cout << "How many pieces do you want to order ?\n";
	//				cin >> number;
	//				margherita += number;
	//				cout << "You ordered a Margherita pizza and you have: " << margherita << " Margherita\n";
	//				break;
	//			case PizzaMenu::Neapolitan:
	//				cout << "How many pieces do you want to order ?\n";
	//				cin >> number;
	//				neapolitan += number;
	//				cout << "You ordered a Neapolitan pizza and you have: " << neapolitan << " Neapolitan\n";
	//				break;
	//			case PizzaMenu::Diabola:
	//				cout << "How many pieces do you want to order ?\n";
	//				cin >> number;
	//				diabola += number;
	//				cout << "You ordered a Diabola pizza and you have: " << diabola << " Diabola\n";
	//				break;
	//			default:
	//				cout << "Error!\n";
	//			}
	//			break;
	//		case Menu::Drinkmenu:
	//			cout << "Choose a drink:\n";
	//			cout << "\t1 - Cola. ";
	//			cout << "\t\tPrice = " << cola_price << "$\n";
	//			cout << "\t2 - Juice. ";
	//			cout << "\t\tPrice = " << juice_price << "$\n";
	//			cout << "\t3 - Water. ";
	//			cout << "\t\tPrice = " << water_price << "$\n";
	//			cin >> drinkmenu;
	//			switch (DrinkMenu(drinkmenu))
	//			{
	//			case DrinkMenu::Cola:
	//				cout << "How many drinks would you like to order?\n";
	//				cin >> number;
	//				cola += number;
	//				cout << "You chose a cola drink in quantity - " << cola << endl;
	//				break;
	//			case DrinkMenu::Juice:
	//				cout << "How many drinks would you like to order?\n";
	//				cin >> number;
	//				juice += number;
	//				cout << "You chose a Juice drink in quantity - " << juice << endl;
	//				break;
	//			case DrinkMenu::Water:
	//				cout << "How many drinks would you like to order?\n";
	//				cin >> number;
	//				water += number;
	//				cout << "You chose a Water drink in quantity - " << water << endl;
	//				break;
	//				break;
	//			default:
	//				cout << "Error!\n";
	//				break;
	//			}
	//			break;
	//		default:
	//			cout << "Error1!\n";
	//		}
	//	}
	//} 
	//while (yesno != 'n');
	//
	//pepperoni_total_price = pepperoni * pepperoni_price;
	//margherita_total_price = margherita * margherita_price;
	//neapolitan_total_price = neapolitan * neapolitan_price;
	//diabola_total_price = diabola * diabola_price;
	//cola_total_price = cola * cola_price;
	//juice_total_price = juice * juice_price;
	//water_total_price = water * water_price;
	//total_price = pepperoni_total_price + margherita_total_price + neapolitan_total_price + diabola_total_price + cola_total_price + juice_total_price + water_total_price;
	//
	//if (total_price > 50)
	//{
	//	cout << "\nThe amount of your order is more than 50$. You get a discount of 20%!!!";
	//	cout << "\nYour order:\n";
	//	cout << "\tPizza menu:\n";
	//	if (pepperoni > 0)
	//	{
	//		cout << "Pepperoni - " << pepperoni << " pieces\t";
	//		pepperoni_total_price = pepperoni * pepperoni_price;
	//		cout << "Price: " << pepperoni_total_price << "$\n";
	//	}
	//	if (margherita > 0)
	//	{
	//		cout << "Margherita - " << margherita << " pieces\t";
	//		margherita_total_price = margherita * margherita_price;
	//		cout << "Price: " << margherita_total_price << "$\n";
	//	}
	//	if (neapolitan > 0)
	//	{
	//		cout << "Neapolitan - " << neapolitan << " pieces\t";
	//		neapolitan_total_price = neapolitan * neapolitan_price;
	//		cout << "Price: " << neapolitan_total_price << "$\n";
	//	}
	//	if (diabola > 0)
	//	{
	//		cout << "Diabola - " << diabola << " pieces\t";
	//		diabola_total_price = diabola * diabola_price;
	//		cout << "Price: " << diabola_total_price << "$\n";
	//	}
	//	
	//	pizza_price = pepperoni_total_price + margherita_total_price + neapolitan_total_price + diabola_total_price;
	//	cout << "Price Pizza menu:\t" << pizza_price << "$\n";

	//	cout << "\tDrink menu:\n";
	//	if (cola > 0)
	//	{
	//		cout << "Cola - " << cola << " pieces\t";
	//		cola_total_price = cola * cola_price;
	//		cout << "Price: " << cola_total_price << "$\n";
	//	}
	//	if (juice > 0)
	//	{
	//		cout << "Juice - " << juice << " pieces\t";
	//		juice_total_price = juice * juice_price;
	//		cout << "Price: " << juice_total_price << "$\n";
	//	}
	//	if (water > 0)
	//	{
	//		cout << "Water - " << water << " pieces\t";
	//		water_total_price = water * water_price;
	//		cout << "Price: " << water_total_price << "$\n";
	//	}
	//	drink_price = cola_total_price + juice_total_price + water_total_price;
	//	cout << "Price Drink menu:\t" << drink_price << "$\n";

	//	total_price = pizza_price + drink_price;
	//	discount = total_price * 0.8;
	//	cout << "\tTotal price:\t" << total_price << "$. With Your discount (20%) - " << discount << "$\n";

	//}
	//else
	//{
	//	cout << "\nYour order:\n";
	//	cout << "\tPizza menu:\n";
	//	if (pepperoni > 0)
	//	{
	//		cout << "Pepperoni - " << pepperoni << " pieces\t";
	//		if (pepperoni >= 5)
	//		{
	//			pepperoni_total_price = (pepperoni - pepperoni / 5) * pepperoni_price;
	//			discount = pepperoni * pepperoni_price - pepperoni_total_price;
	//			cout << "Price: " << pepperoni_total_price << "$\t With discount " << pepperoni / 5 << " pizza`s FREE = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			pepperoni_total_price = pepperoni * pepperoni_price;
	//			cout << "Price: " << pepperoni_total_price << "$\n";
	//		}
	//	}
	//	if (margherita > 0)
	//	{
	//		cout << "Margherita - " << margherita << " pieces\t";
	//		if (margherita >= 5)
	//		{
	//			margherita_total_price = (margherita - margherita / 5) * margherita_price;
	//			discount = margherita * margherita_price - margherita_total_price;
	//			cout << "Price: " << margherita_total_price << "$\t With discount " << margherita / 5 << " pizza`s FREE = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			margherita_total_price = margherita * margherita_price;
	//			cout << "Price: " << margherita_total_price << "$\n";
	//		}
	//	}
	//	if (neapolitan > 0)
	//	{
	//		cout << "Neapolitan - " << neapolitan << " pieces\t";
	//		if (neapolitan >= 5)
	//		{
	//			neapolitan_total_price = (neapolitan - neapolitan / 5) * neapolitan_price;
	//			discount = neapolitan * neapolitan_price - neapolitan_total_price;
	//			cout << "Price: " << neapolitan_total_price << "$\t With discount " << neapolitan / 5 << " pizza`s FREE = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			neapolitan_total_price = neapolitan * neapolitan_price;
	//			cout << "Price: " << neapolitan_total_price << "$\n";
	//		}
	//	}
	//	if (diabola > 0)
	//	{
	//		cout << "Diabola - " << diabola << " pieces\t";
	//		if (diabola >= 5)
	//		{
	//			diabola_total_price = (diabola - diabola / 5) * diabola_price;
	//			discount = diabola * diabola_price - diabola_total_price;
	//			cout << "Price: " << diabola_total_price << "$\t With discount " << diabola / 5 << " pizza`s FREE = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			diabola_total_price = diabola * diabola_price;
	//			cout << "Price: " << diabola_total_price << "$\n";
	//		}
	//	}

	//	pizza_price = pepperoni_total_price + margherita_total_price + neapolitan_total_price + diabola_total_price;
	//	cout << "Price Pizza menu:\t" << pizza_price << "$\n";

	//	cout << "\tDrink menu:\n";
	//	if (cola > 0)
	//	{
	//		cout << "Cola - " << cola << " pieces\t";
	//		if (cola_price > 2)
	//		{
	//			cola_total_price = cola * cola_price * 0.85;
	//			discount = cola * cola_price - cola_total_price;
	//			cout << "Price: " << cola_total_price << "$\t With discount 15% = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			cola_total_price = cola * cola_price;
	//			cout << "Price: " << cola_total_price << "$\n";
	//		}
	//	}
	//	if (juice > 0)
	//	{
	//		cout << "Juice - " << juice << " pieces\t";
	//		if (juice_price > 2)
	//		{
	//			juice_total_price = juice * juice_price * 0.85;
	//			discount = juice * juice_price - juice_total_price;
	//			cout << "Price: " << juice_total_price << "$\t With discount 15% = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			juice_total_price = juice * juice_price;
	//			cout << "Price: " << juice_total_price << "$\n";
	//		}
	//	}
	//	if (water > 0)
	//	{
	//		cout << "Water - " << water << " pieces\t";
	//		if (water_price > 2)
	//		{
	//			water_total_price = water * water_price * 0.85;
	//			discount = water * water_price - water_total_price;
	//			cout << "Price: " << water_total_price << "$\t With discount 15% = " << discount << "$\n";
	//		}
	//		else
	//		{
	//			water_total_price = water * water_price;
	//			cout << "Price: " << water_total_price << "$\n";
	//		}
	//	}

	//	drink_price = cola_total_price + juice_total_price + water_total_price;
	//	cout << "Price Drink menu:\t" << drink_price << "$\n";

	//	total_price = pizza_price + drink_price;
	//	cout << "\tTotal price:\t" << total_price << "$\n";
	//}
}