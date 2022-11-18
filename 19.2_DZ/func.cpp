#include "func.h"

int purchase(string name, int value, double price)
{
	static int n_purchase = 0;
	n_purchase++;
	static  double all_purchaces = 0;
	cout << "Purchase # " << n_purchase << endl;
	cout << "Product " << name << endl;
	cout << "Total price : " << fixed << setprecision(2) << price * value << endl;
	all_purchaces += price * value;
	cout << "All purchaces in shop : " << all_purchaces << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << '_';
	}
	cout << endl;
	return n_purchase;
}
