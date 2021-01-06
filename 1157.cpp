#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string alphabet = "?ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alphabet_cnt[27] = {0,};
	string word;
	cin >> word;
	int w_len = word.length();
	int a_len = alphabet.length();
	for (int i = 0; i < w_len; i++)
	{
		for (int j = 0; j < a_len; j++)
		{
			if (toupper(word[i]) == alphabet[j])
				alphabet_cnt[j]++;
		}
	}

	int max = 0;
	int i_tmp = 0;
	for (int i = 0; i < a_len; i++)
	{
		if (alphabet_cnt[i] > max)
		{
			max = alphabet_cnt[i];
			i_tmp = i;
		}
		else if (alphabet_cnt[i] == max)
		{
			i_tmp = 0;
		}
	}

	cout << alphabet[i_tmp];
	
	return 0;
}
