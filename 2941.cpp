#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cro[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string input;
	cin >> input;
	int n_input = input.size();
	int nLen = 0;
	for (int i = 0; i < n_input; i++)
	{
		if (input[i] == 'c' && i + 1 < n_input)
		{
			if (input[i + 1] == '=' || input[i + 1] == '-')
			{
				nLen += 1;
				i += 1;
				continue;
			}
		}
		else if (input[i] == 'd')
		{
			if (i + 1 < n_input && input[i + 1] == '-')
			{
				nLen += 1;
				i += 1;
				continue;
			}
			else if (i + 2 < n_input && input[i + 1] == 'z' && input[i + 2] == '=')
			{
				nLen += 1;
				i += 2;
				continue;
			}
		}
		else if (input[i] == 'l' && i + 1 < n_input)
		{
			if (input[i + 1] == 'j')
			{
				nLen += 1;
				i += 1;
				continue;
			}
		}
		else if (input[i] == 'n' && i + 1 < n_input)
		{
			if (input[i + 1] == 'j')
			{
				nLen += 1;
				i += 1;
				continue;
			}
		}
		else if (input[i] == 's' && i + 1 < n_input)
		{
			if (input[i + 1] == '=')
			{
				nLen += 1;
				i += 1;
				continue;
			}
		}
		else if (input[i] == 'z' && i + 1 < n_input)
		{
			if (input[i + 1] == '=')
			{
				nLen += 1;
				i += 1;
				continue;
			}
		}
		
		nLen += 1;
	}

	cout << nLen;

	return 0;
}
