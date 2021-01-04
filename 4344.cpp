#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.precision(3);
	cout << fixed;

	int c, n;
	double x, avg, y;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> n;
		avg = 0;
		x = 0;
		int *score = new int[n]();
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			avg += score[j];
		}
		avg = avg / n;
		for (int j = 0; j < n; j++)
		{
			if (score[j] > avg)
				x++;
		}
		y = x / n * 100;
		cout << y << "%" << endl;
	}

	return 0;
}
