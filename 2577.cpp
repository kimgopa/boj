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

	while (0 < r)
	{
		arr[r % 10] += 1;
		r = r / 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
