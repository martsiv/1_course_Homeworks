#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

const char* morze[36] =
{
	".- ", "-... ", "-.-. ", "-.. ", ". ", "..-. ", "--. ", ".... ", ".. ", ".--- ",
	"-.- ", ".-.. ", "-- ", "-. ", "--- ", ".--. ", "--.- ", ".-. ", "... ", "- ",
	"..- ", "...- ", ".-- ", "-..- ", "-.-- ", "--.. "
};
const int levels = 5;
const char* quest[levels] =
{
	"City in Ukraine",
	"Country in Europa",
	"Music genre",
	"President of the United States",
	"African animal"
};
const char* answer[levels] =
{
	"Dnipro",
	"Italia",
	"Funk",
	"Obama",
	"Elephant"
};
const int BUF = 30;

void printMorse(const char* text);
bool checkAnswer(const char* yourAnswer, const char* realAnswer);

int main()
{
	char playeranswer[BUF]{};
	cout << "\t\tMorse code task\n";
	for (size_t i = 0; i < levels; i++)
	{
		cout << "\nQuestion #" << i + 1 << endl;
		cout << quest[i] << endl;
		cout << "Answer in Morse code:\n";
		printMorse(answer[i]);
		do
		{
			cout << "Your answer - ";
			cin >> playeranswer;
		} while (!checkAnswer(playeranswer, answer[i]));
		cout << "Your answer is correct!\n\n";
	}
	cout << "\t\tCongratulations, you won!\n";
}

void printMorse(const char* text)
{
	for (int j = 0; j < strlen(text); j++)
	{
		int tmp = tolower(text[j]) - 97;
		cout << morze[tmp];
	}
	cout << endl;
}
bool checkAnswer(const char* yourAnswer, const char* realAnswer)
{
	bool right = 0;
	for (int j = 0; realAnswer[j] != '\0'; j++)
	{
		right = 0;
		if (tolower(realAnswer[j]) != tolower(yourAnswer[j]))
			break;
		right = 1;
	}
	return right;
}