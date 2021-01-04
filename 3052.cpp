#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y = 0;
	int arr[42] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		arr[x % 42] += 1;
	}
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] > 0) y += 1;
	}
	cout << y;

	return 0;
}
