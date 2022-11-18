#include <iostream>
using namespace std;
const unsigned short format12 = 12;
const unsigned short format24 = 24;
const unsigned short secInMin = 60;
const unsigned short secInHour = 3600;
struct Time
{
	unsigned int hours;
	unsigned int minutes;
	unsigned int secunds;
};

template <typename T>
T validate(T max);
void changeHours(Time& time);
void changeMinutes(Time& time);
void changeSeconds(Time& time);
void inputTime(Time& time);
void printTime(const Time& time, unsigned short format); //format приймає значення 12 та 24, якщо інше, то видає в 24год форматі
short comparsion(const Time& time1, const Time& time2);
void plus1hour(Time& time);
void plus1min(Time& time);
void plus1sec(Time& time);
Time differecneInTime(const Time& time1, const Time& time2);

int main()
{
	Time mytime1{ 12, 40, 00 };
	Time mytime2{ 14, 20, 00 };
	cout << "Time in formats 12 and 24: \n";
	printTime(mytime1, format12);
	printTime(mytime1, format24);
	cout << "Enter a value for the first clock:\n";
	inputTime(mytime1);
	printTime(mytime1, format24);
	cout << "Enter a value for the second clock:\n";
	inputTime(mytime2);
	printTime(mytime2, format24);
	int resultComparsion = comparsion(mytime1, mytime2);
	if (!resultComparsion)
		cout << "Both values are the same\n";
	else if (0 < resultComparsion)
		cout << "First value is bigger\n";
	else 
		cout << "Second value is bigger\n";
	Time different = differecneInTime(mytime1, mytime2);
	cout << "The time difference is ";
	printTime(different, format24);
	system("PAUSE");
	system("CLS");
	cout << "Time 1:\n";
	printTime(mytime1, format24);
	cout << "Time 1 + 1 hour:\n";
	plus1hour(mytime1);
	printTime(mytime1, format24);

	cout << "\nTime 2:\n";
	printTime(mytime2, format24);
	cout << "\nTime 2 + 1 minute + 1 second:\n";
	plus1sec(mytime2);
	plus1min(mytime2);
	printTime(mytime2, format24);
}

template <typename T>
T validate(T max)
{
	T value;
	while (!(cin >> value) || max <= value || value < 0)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	while (cin.get() != '\n')
		continue;
	return value;
}
void changeHours(Time& time)
{
	int maxH = 24;
	cout << "Enter a new hour value: \n";
	time.hours = validate(maxH);
}
void changeMinutes(Time& time)
{
	int maxM = 60;
	cout << "Enter a new minute value: \n";
	time.minutes = validate(maxM);
}
void changeSeconds(Time& time)
{
	int maxS = 60;
	cout << "Enter a new second value: \n";
	time.secunds = validate(maxS);
}
void inputTime(Time& time)
{
	changeHours(time);
	changeMinutes(time);
	changeSeconds(time);
}
void printTime(const Time& time, unsigned short format)
{
	if (format == format12)
	{
		cout << (time.hours % format12) << ":" << time.minutes << ":" << time.secunds;
		if (time.hours / format12)
			cout << " am\n";
		else
			cout << " pm\n";
	}
	else
		cout << time.hours << ":" << time.minutes << ":" << time.secunds << endl;
}
short comparsion(const Time& time1, const Time& time2)
{
	if (time1.hours == time2.hours)
	{
		if (time1.minutes == time2.minutes)
		{
			if (time1.secunds == time2.secunds)
				return 0;
			else if (time1.secunds < time2.secunds)
				return -1;
			else if (time2.secunds < time1.secunds)
				return 1;
		}
		else if (time1.minutes < time2.minutes)
			return -1;
		else if (time2.minutes < time1.minutes)
			return 1;
	}
	else if (time1.hours < time2.hours)
		return -1;
	else if(time2.hours < time1.hours)
		return 1;
}
void plus1hour(Time& time)
{
	unsigned int tmp = time.hours + 1;
	time.hours = tmp % format24;
}
void plus1min(Time& time)
{
	const unsigned int maxM = 60;
	unsigned int tmp = time.minutes + 1;
	time.minutes = tmp % maxM;
	if (tmp / maxM)
		plus1hour(time);
}
void plus1sec(Time& time)
{
	const unsigned int maxS = 60;
	unsigned int tmp = time.secunds + 1;
	time.secunds = tmp % maxS;
	if (tmp / maxS)
		plus1min(time);
}
Time differecneInTime(const Time& time1, const Time& time2)
{

	Time newTime{};
	long long time1InSec = 0;
	long long time2InSec = 0;
	long long resultInSec = 0;
	if (!comparsion(time1, time2))
		return newTime;
	time1InSec += time1.secunds + time1.minutes * secInMin + time1.hours * secInHour;
	time2InSec += time2.secunds + time2.minutes * secInMin + time2.hours * secInHour;
	resultInSec = time1InSec < time2InSec ? (time2InSec - time1InSec) : (time1InSec - time2InSec);
	for (size_t i = 0; i < resultInSec; i++)
		plus1sec(newTime);
	return newTime;
}