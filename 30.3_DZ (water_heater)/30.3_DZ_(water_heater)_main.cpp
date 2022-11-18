#include <iostream>
using namespace std;
const double minTemperature = 5;
const double maxTemperature = 100;

struct WaterHeater
{
	string company;
	string color;
	unsigned int power;
	unsigned int volume;
	double temperature;
};
void inputData(WaterHeater& boiler);
void printData(const WaterHeater& boiler);
void increasingTemp(WaterHeater& boiler, double val);
void decreasingTemp(WaterHeater& boiler, double val);
const WaterHeater& powerComparsion(const WaterHeater& boiler1, const WaterHeater& boiler2);
int main()
{
	WaterHeater samsung;
	inputData(samsung);
	printData(samsung);
	cout << "Enter temperateru value to increase: ";
	double val;
	while (!(cin >> val) || (val < 0))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	increasingTemp(samsung, val);
	printData(samsung);

	WaterHeater atlant;
	inputData(atlant);
	printData(atlant);
	cout << "Enter temperateru value to decrease: ";
	while (!(cin >> val) || (val < 0))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	decreasingTemp(atlant, val);
	printData(atlant);

	cout << powerComparsion(samsung, atlant).company << " is a more powerful water heater\n";
}
void inputData(WaterHeater& boiler)
{
	cout << "Enter the name of company:\t\t\t";
	cin >> boiler.company;
	cout << "Enter the color:\t\t\t\t";
	cin >> boiler.color;
	cout << "Enter the power(in watts):\t\t\t";
	cin >> boiler.power;
	cout << "Enter the volume(in liters):\t\t\t";
	cin >> boiler.volume;
	cout << "Enter the temperature(in celsiun gedrees):\t";
	cin >> boiler.temperature;
}
void printData(const WaterHeater& boiler)
{
	cout << "\nName of company:\t" << boiler.company << endl;
	cout << "Color:\t\t\t" << boiler.color << endl;
	cout << "Power:\t\t\t" << boiler.power << "W" << endl;
	cout << "Volume:\t\t\t" << boiler.volume << endl;
	cout << "Temperature:\t\t" << boiler.temperature << endl << endl;
}
void increasingTemp(WaterHeater& boiler, double val)
{
	if (maxTemperature < (boiler.temperature + val))
	{
		cout << "Temperature is too high! Imposible operation!\n";
		return;
	}
	boiler.temperature += val;
}
void decreasingTemp(WaterHeater& boiler, double val)
{
	if ((boiler.temperature + val) < minTemperature)
	{
		cout << "Temperature is too low! Imposible operation!\n";
		return;
	}
	boiler.temperature -= val;
}
const WaterHeater& powerComparsion(const WaterHeater& boiler1, const WaterHeater& boiler2)
{
	return boiler2.power <= boiler1.power ? boiler1 : boiler2;
}