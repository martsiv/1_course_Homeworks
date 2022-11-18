#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 20;
const int allTypesAnimal = 4;
enum TypeAnimal { Snake, Dog, Cat, Bird };

struct Animal
{
	TypeAnimal type;
	union
	{
		double sizeOfSnake;
		char breed[SIZE];
		int flightHeight;
	};
	char name[SIZE];
	int age;
};
void createZoo(Animal**& zoo, int& size);
void deleteZoo(Animal**& zoo, int& size);
void enterOneAnimal(Animal& animal);
const char* printType(TypeAnimal num);
int verificateNum(int leftRange, int rightRange);
void printOneAnimal(const Animal& animal);
void printZooByType(Animal** zoo, int size, TypeAnimal type);
int writeToFile(Animal** zoo, int size, string filename);
int main()
{
	int SIZE;
	Animal** zoo;
	createZoo(zoo, SIZE);
	cout << "Enter the data of all animals\n";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "\t\t" << i + 1 << " animal\n";
		enterOneAnimal(*zoo[i]);
	}
	cout << "\n\t\tAll animals:\n\n";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "\t#" << i + 1 << ":" << endl;
		printOneAnimal(*zoo[i]);
	}
	cout << "Enter the number of enimal to edit: ";
	int num = verificateNum(1, SIZE) - 1;
	enterOneAnimal(*zoo[num]);
	cout << "Enter the type of the animal to show list: \n";
	for (size_t i = 0; i < allTypesAnimal; i++)
	{
		cout << i + 1 << " - " << printType(TypeAnimal(i)) << endl;
	}
	int type = verificateNum(1, allTypesAnimal) - 1;
	printZooByType(zoo, SIZE, TypeAnimal(type));
	cout << "\nEnter the file name to write list of the animals: (*.txt) ";
	string filename;
	cin >> filename;
	if (!writeToFile(zoo, SIZE, filename))
		cout << "Success!\n";
	else
		cerr << ">>>>>>ERROR of open file!<<<<<<\n";
	deleteZoo(zoo, SIZE);
}

void createZoo(Animal**& zoo, int& size)
{
	size = 0;
	cout << "How many animals do you want?\n";
	cin >> size;
	zoo = new Animal * [SIZE];
	for (int i = 0; i < SIZE; i++)
		zoo[i] = new Animal;
}
void deleteZoo(Animal**& zoo, int& size)
{
	for (size_t i = 0; i < size; i++)
		delete[] zoo[i];
	delete[] zoo;
	zoo = nullptr;
	size = 0;
}
void enterOneAnimal(Animal& animal)
{
	cout << "Enter the type of the animal:\n";
	for (size_t i = 0; i < allTypesAnimal; i++)
		cout << i + 1 << " - " << printType(TypeAnimal(i)) << endl;
	int type;
	animal.type = TypeAnimal(verificateNum(1, allTypesAnimal) - 1);
	if (animal.type == TypeAnimal::Snake)
	{
		cout << "Enter the size of snakes:\n";
		cin >> animal.sizeOfSnake;
	}
	else if (animal.type == TypeAnimal::Dog)
	{
		cout << "Enter the breed:\n";
		cin >> animal.breed;
	}
	else if (animal.type == TypeAnimal::Cat)
	{
		cout << "Enter the breed:\n";
		cin >> animal.breed;
	}
	else if (animal.type == TypeAnimal::Bird)
	{
		cout << "Enter the flight height:\n";
		cin >> animal.flightHeight;
	}
	cout << "Enter the name:\n";
	cin >> animal.name;
	cout << "Enter the age:\n";
	cin >> animal.age;
}

const char* printType(TypeAnimal num)
{
	if (num == TypeAnimal::Snake)
		return "Snake";
	else if (num == TypeAnimal::Dog)
		return "Dog";
	else if (num == TypeAnimal::Cat)
		return "Cat";
	else if (num == TypeAnimal::Bird)
		return "Bird";
	else
		return nullptr;
}
int verificateNum(int leftRange, int rightRange)
{
	int num;
	while (!(cin >> num) || (num < leftRange) || (rightRange < num))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	return num;
}

void printOneAnimal(const Animal& animal)
{
	cout << "The type of the animal: ";
	cout << printType(animal.type) << endl;
	if (animal.type == TypeAnimal::Snake)
		cout << "The size of snakes: " << animal.sizeOfSnake << endl;
	else if (animal.type == TypeAnimal::Dog)
		cout << "The breed: " << animal.breed << endl;
	else if (animal.type == TypeAnimal::Cat)
		cout << "The breed: " << animal.breed << endl;
	else if (animal.type == TypeAnimal::Bird)
		cout << "The flight height:" << animal.flightHeight << endl;
	cout << "The name: " << animal.name << endl;
	cout << "The age: " << animal.age << endl << endl;
}

void printZooByType(Animal** zoo, int size, TypeAnimal type)
{
	cout << "\n\tAll animals with type \"" << printType(type) << "\"\n";
	for (size_t i = 0; i < SIZE; i++)
	{
		if (zoo[i]->type == type)
			printOneAnimal(*zoo[i]);
	}
}

int writeToFile(Animal** zoo, int size, string filename)
{
	ofstream fout;
	fout.open(filename);
	if (!fout.is_open())
		return EXIT_FAILURE;
	for (int i = 0; i < size; i++)
	{
		fout << "\n\t\tAll animals:\n\n";
		for (size_t i = 0; i < SIZE; i++)
		{
			fout << "\t#" << i + 1 << ":" << endl;
			fout << "The type of the animal: ";
			fout << printType(zoo[i]->type) << endl;
			if (zoo[i]->type == TypeAnimal::Snake)
				fout << "The size of snakes: " << zoo[i]->sizeOfSnake << endl;
			else if (zoo[i]->type == TypeAnimal::Dog)
				fout << "The breed: " << zoo[i]->breed << endl;
			else if (zoo[i]->type == TypeAnimal::Cat)
				fout << "The breed: " << zoo[i]->breed << endl;
			else if (zoo[i]->type == TypeAnimal::Bird)
				fout << "The flight height:" << zoo[i]->flightHeight << endl;
			fout << "The name: " << zoo[i]->name << endl;
			fout << "The age: " << zoo[i]->age << endl << endl;
		}
	}
	fout.close();
	return 0;
}
