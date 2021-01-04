#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	int max = a[0], n = 0;
	for (int i = 1; i < 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			n = i;
		}
	}

	cout << max << "\n" << n+1;

	return 0;
}
