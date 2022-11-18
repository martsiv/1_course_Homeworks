#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;
const int rows = 5, cols = 5;

void fillArr(int *arr, int r, int c)
{
	srand(unsigned(time(0)));
	for (int* i = arr; i < arr + r * c; i++)
	{
		*i = !(rand() % 4) ? 0 : 1;
	}
}
void showArr(int const arr[][cols])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << setw(4) << arr[i][j];
		cout << endl << endl;
	}
}
void showGameBoard(int arr[][cols])
{

}
int main()
{
	int arr[rows][cols];
	fillArr(arr);
	showArr(arr);
}