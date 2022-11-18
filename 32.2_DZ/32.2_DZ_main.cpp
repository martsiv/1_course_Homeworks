#include <iostream>
#include <fstream>
const int BUF = 20;
using namespace std;
int main()
{
	string fileN;
	ofstream fout;
	cout << "Enter the file name: ";
	cin >> fileN;
	fout.open(fileN);
	if (!fout.is_open())
	{
		cout << "Can not open the file " << fileN << endl;
		cout << "Exit program.\n";
		exit(EXIT_FAILURE);
	}
	char word[BUF]{};
	char exitprog[] = "stop";
	cout << "Enter your words or \"stop\" to exit: ";
	while (cin >> word && !((strstr(word, exitprog)) && strlen(word) == 4))
	{
		bool good = 1;
		if (!(isalpha(word[0]) && isupper(word[0])))
			continue;
		int len = strlen(word);
		for (size_t i = 0; i < len && good; i++)
		{
			if (!(isalpha(word[i])))
				good = 0;
		}
		if (!good)
			continue;
		fout << word << endl;
	}
	fout.close();
}