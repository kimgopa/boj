#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int x = 1;
	n -= 1;
	while (n > 0)
	{
		x += 1;
		n -= 6 * (x - 1);
		if (n < 0)
			break;
	}
	cout << x;


	return 0;
}
