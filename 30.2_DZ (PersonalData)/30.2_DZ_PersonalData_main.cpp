#include <iostream>
using namespace std;
const int SIZE = 5;
struct PersonalData
{
	string firstname;
	string lastname;
};
struct Sportsman
{
	PersonalData name;
	string countrie;
	unsigned result[SIZE];
};

void inputResults(unsigned results[], int  size);
void inputPD(PersonalData& pd);
void inputSportsman(Sportsman& s);
void printResults(const unsigned results[], int  size);
void printPD(const PersonalData& pd);
void printSportsman(const Sportsman& s, int SIZE);
unsigned bestResult(const Sportsman& s, int SIZE);
double avgResult(const Sportsman& s, int SIZE);
const Sportsman& bestSportsman(const Sportsman& s1, const Sportsman& s2);

int main()
{
	Sportsman ukrainian{ { "Ivan", "Semko" }, "Ukraine", {324, 315, 321, 330, 319} };
	Sportsman american{ { "Patrick", "Wilson" }, "USA", {314, 325, 331, 327, 322} };
	inputSportsman(ukrainian);
	printSportsman(ukrainian, SIZE);
	cout << "Best result: " << bestResult(ukrainian, SIZE) << endl;
	cout << "Average result: " << avgResult(ukrainian, SIZE) << endl;
	cout << "Best sportsman: ";
	printPD(bestSportsman(ukrainian, american).name);
}


void inputResults(unsigned results[], int  size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter the " << i + 1 << "result: ";
		cin >> results[i];
	}
}
void inputPD(PersonalData& pd)
{
	cout << "Enter firstname:\t";
	cin >> pd.firstname;
	cout << "Enter lastname:\t";
	cin >> pd.lastname;
}
void inputSportsman(Sportsman& s)
{
	inputPD(s.name);
	cout << "Enter the countrie:\t";
	cin >> s.countrie;
	inputResults(s.result, SIZE);
}
void printResults(const unsigned results[], int  size)
{
	for (size_t i = 0; i < size; i++)
		cout << results[i] << "\t";
	cout << endl;
}
void printPD(const PersonalData& pd)
{
	cout << pd.firstname << " " << pd.lastname << endl;
}
void printSportsman(const Sportsman& s, int SIZE)
{
	printPD(s.name);
	cout << s.countrie << endl;
	printResults(s.result, SIZE);
}
unsigned bestResult(const Sportsman& s, int SIZE)
{
	unsigned max = s.result[0];
	for (size_t i = 0; i < SIZE; i++)
	{
		if (max < s.result[i])
			max = s.result[i];
	}
	return max;
}
double avgResult(const Sportsman& s, int SIZE)
{
	double avg = 0;
	for (size_t i = 0; i < SIZE; i++)
		avg += s.result[i];
	avg /= (double)SIZE;
	return avg;
}
const Sportsman& bestSportsman(const Sportsman& s1, const Sportsman& s2)
{
	return avgResult(s2, SIZE) <= avgResult(s1, SIZE) ? s1 : s2;
}