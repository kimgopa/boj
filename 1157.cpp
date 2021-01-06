#include <iostream>
#include <string.h>

int main()
{
	char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alphabet_cnt[27] = { };
	char word[1000001];
	std::cin >> word;

	int w_len = strlen(word);
	int a_len = strlen(alphabet);
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
			i_tmp = -1;
		}
	}

	if (i_tmp == -1)
		std::cout << "?";
	else
		std::cout << alphabet[i_tmp];
	
	return 0;
}
