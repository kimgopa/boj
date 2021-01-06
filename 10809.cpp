#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	char s[101];
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;

	for (int i = 0; i < strlen(alphabet); i++)
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if (alphabet[i] == s[j])
			{
				cout << j << " ";
				break;
			}
			if (strlen(s) == j+1)
				cout << -1 << " ";
		}
	}
	return 0;
}
