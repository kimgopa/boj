#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int r = a * b * c;
	int arr[10] = { 0 };
	int x = 10;
	int y = 0;	// r % x

	while (x/10 < r)
	{
		y = r % x / (x / 10);
		r -= y;
		arr[y] += 1;
		x *= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
