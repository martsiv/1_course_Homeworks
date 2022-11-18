#include <iostream>
#include <math.h>
#include <iomanip>
#include <chrono>


using namespace std;


int main(void)
{
	////Завдання 1
	//srand(unsigned(time(0)));
	//const int rows = 4, cols = 5;
	//int m[rows][cols]{};
	//for (int i = 0; i < rows; i++)
	//{
	//	int sum = 0;
	//	for (int j = 0; j < cols; j++)
	//	{	
	//		m[i][j] = rand() % 10;
	//		cout << m[i][j] << '\t';
	//		sum += m[i][j];
	//	}
	//	cout << "|| " << sum << endl << endl;
	//}
	//cout << "___________________________________________\n";
	//int counter = 0;
	//for (int j = 0; j <= cols; j++)
	//{
	//	if (j == cols)
	//	{
	//		cout << "|| " << counter << '\n';
	//		break;
	//	}
	//	int sum = 0;
	//	for (int i = 0; i < rows; i++)
	//	{
	//		sum += m[i][j];
	//	}
	//	counter += sum;
	//	cout  << sum << '\t';
	//}	
	

	////Завдання 2
	//srand(unsigned(time(0)));
	//const int ROWS = 4, COLS = 5;
	//int m[ROWS][COLS]{};
	//int sum = 0, counter_positive = 0;
	//float sum_positive = 0;
	//int max[2]{};
	//int min[2]{};

	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++)
	//	{	
	//		m[i][j] = -10 + rand() % 21;
	//		cout << m[i][j] << '\t';
	//		sum += m[i][j];

	//		if (0 < m[i][j])
	//		{
	//			sum_positive += m[i][j];
	//			counter_positive++;
	//		}
	//		if (m[i][j] < m[min[0]][min[1]])
	//		{
	//			min[0] = i;
	//			min[1] = j;
	//		}
	//			
	//		if (m[i][j] > m[max[0]][max[1]])
	//		{
	//			max[0] = i;
	//			max[1] = j;
	//		}
	//	}
	//	cout << endl << endl;
	//}	
	//cout << "Sum = " << sum << endl;
	//cout << "Arithmetic mean = " << sum_positive / counter_positive << endl;
	//cout << "Min value = " << m[min[0]][min[1]] << " index " << min[0] << ' ' << min[1] << endl;
	//cout << "Max value = " << m[max[0]][max[1]] << " index " << max[0] << ' ' << max[1] << endl;


	////Завдання 3
	//srand(unsigned(time(0)));
	//const int rows = 4, cols = 5;
	//int m[rows][cols]{};
	//int max[2]{};
	//int min[2]{};
	//for (int i = 0; i < rows; i++)
	//{
	//	min[0] = i;
	//	min[1] = 0;
	//	int sum = 0;
	//	for (int j = 0; j < cols; j++)
	//	{	
	//		m[i][j] = rand() % 10;
	//		cout << m[i][j] << '\t';
	//		if (m[i][j] < m[min[0]][min[1]])
	//		{
	//			min[0] = i;
	//			min[1] = j;
	//		}
	//	}
	//	cout << "| " << m[min[0]][min[1]] << endl << endl;
	//}
	//cout << "___________________________________________\n";
	//for (int j = 0; j <= cols; j++)
	//{
	//	max[0] = 0;
	//	max[1] = j;
	//	if (j == cols)
	//	{
	//		cout << "| " << '\n';
	//		break;
	//	}
	//	for (int i = 0; i < rows; i++)
	//	{
	//		if (m[i][j] > m[max[0]][max[1]])
	//		{
	//			max[0] = i;
	//			max[1] = j;
	//		}
	//	}
	//	cout  << m[max[0]][max[1]] << '\t';
	//}	

	////Завдання 4
	//Заповнити матрицю цілими числами, починаючи з нуля по стовпцях знизу вверх. 
	//Стовпці обходяться зліва направо.
	//const int ROWS = 6, COLS = 8;
	//int m[ROWS][COLS]{};
	//int counter = 0;
	//for (int j = 0; j < COLS; j++)
	//{
	//	for (int i = ROWS - 1; 0 <= i; i--)
	//	{
	//		m[i][j] = counter;
	//		++counter;
	//	}
	//}

	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++)
	//		cout << m[i][j] << '\t';
	//	cout << endl;

	//}
}