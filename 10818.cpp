#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a;
	cin >> n;
	int max = -10000000, min = 1000000;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (max < a) max = a;
		if (min > a) min = a;
	}
	cout << min << " " << max;
	return 0;
}
