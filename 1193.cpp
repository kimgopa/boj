#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int a = 1, b = 1, n = 1;

	while (true)
	{
		if (n * (n + 1) / 2 >= x)
			break;
		n += 1;
	}

	x -= (n - 1) * n / 2;

	if (n % 2 == 0)
	{
		a = x;
		b = n + 1 - x;
	}
	else
	{
		a = n + 1 - x;
		b = x;
	}

	cout << a << "/" << b;

	return 0;
}
