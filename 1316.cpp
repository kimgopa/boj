#include <iostream>
#include <string>
using namespace std;

bool GroupWordTF(string word)
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int n_alpha[26] = {};
	int nWord = word.size();
	for (int i = 0; i < nWord; i++)
	{
		if (i < nWord)
		{
			if (word[i] != word[i + 1])
			{
				for (int j = 0; j < 26; j++)
				{
					if (word[i] == alphabet[j])
					{
						if (n_alpha[j] == 1) return false;
						n_alpha[j] = 1;
						break;
					}
				}
			}
		}
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int nGroupWord = 0;
	int n;
	cin >> n;
	string input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (GroupWordTF(input)) nGroupWord += 1;
	}
	cout << nGroupWord;

	return 0;
}
