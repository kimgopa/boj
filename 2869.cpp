#include <iostream>

int main()
{
	int a, b, v;
	std::cin >> a >> b >> v;

	int d = 1;
	if (v > a)
	{
		int x = (v - a) / (a - b);
		int y = (v - a) % (a - b);
		if (y > 0) d += 1;
		d += x;
	}
	
	std::cout << d;

	return 0;
}
