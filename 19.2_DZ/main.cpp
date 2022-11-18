#include "func.h"

int main()
{
	purchase("earpod", 5000, 1);
	int number = purchase("mouse", 300, 2);

	cout << "Purchases : " << number << endl;
}