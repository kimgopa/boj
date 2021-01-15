#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int h, w, n, x, y;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		x = 1;
		y = 1;

		x *= n / h;
		y *= n % h;
		if (y == 0)
			y = h;
		else
			x += 1;
		
		cout << y * 100 + x << "\n";
	}

	return 0;
}
