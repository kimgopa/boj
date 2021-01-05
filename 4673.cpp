#include <iostream>

using namespace std;

int d(int n)
{
	int result = n;
	do
	{
		result += n % 10;
		n = n / 10;
	} while (n != 0);

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	bool arr[10001] = { 1, };
	for (int i = 1; i <= 10000; i++)
	{
		int tmp = d(i);
		if ( tmp < 10001 )
			arr[tmp] = 1;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == 0)
			cout << i << "\n";
	}
}
