#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int words = 0;
	bool bWord = false;
	int n_input = input.length();
	for (int i = 0; i < n_input; i++)
	{
		if (input[i] == ' ')
		{
			if (bWord == true)
				words++;
			bWord = false;
		}
		else
		{
			bWord = true;
		}
	}
	if (bWord) words++;

	cout << words;

	return 0;
}
