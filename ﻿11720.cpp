#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	char* chNum = new char[n]();
	std::cin >> chNum;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += chNum[i] - '0';
	}
	std::cout << sum;
	return 0;
}
