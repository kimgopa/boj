#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	char char_case[80] = "";
	int cnt = 0, score = 0;

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		score = 0;
		cin >> char_case;

		for (int j = 0; j < strlen(char_case); j++)
		{
			if ( char_case[j] == 'O')
			{
				cnt++;
				score += cnt;
			}
			else
				cnt = 0;
		}

		cout << score << "\n";
	}

	return 0;
}
