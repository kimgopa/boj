#include <iostream>

using namespace std;

int main()
{
	int n, a, b, c, i = 1;
	cin >> n;
	c = n;
	
	while (1)
	{
		a = c / 10;
		b = c % 10;
		c = b * 10 + (a + b) % 10;
		if (c == n) break;
		i += 1;
	}

	cout << i;

	return 0;
}
