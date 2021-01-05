#include <iostream>

bool a(int number)
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);

	int x = 0, y = 0, a = 0;

	if (number / 100 == 0)
		return true;

	x = number % 10;
	number = number / 10;
	y = number % 10;
	a = x - y;
	number = number / 10;
	do
	{
		x = number % 10;
		if (y - x != a) return false;
		y = x;
		number = number / 10;
	} while (number != 0);

	return true;
}

int main()
{
	int n, cnt = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (a(i)) cnt++;
	}
	std::cout << cnt;
	return 0;
}
