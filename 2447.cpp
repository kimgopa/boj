#include <iostream>
using namespace std;

void printStar(int n, int x, char *arr)
{
	if (x == 1)
		return;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i % x >= x / 3) && (i % x < x / 3 * 2)	&& (j % x >= x / 3) && (j % x < x / 3 * 2))
				arr[i * n + j] = ' ';
		}
	}

	printStar(n, x / 3, arr);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	int n;
	cin >> n;

	char *starArr = new char[n * n];
	for (int i = 0; i < n * n; i++)
		starArr[i] = '*';

	printStar(n, n, starArr);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << starArr[i * n + j];
		}
		cout << "\n";
	}
	
	return 0;
}
