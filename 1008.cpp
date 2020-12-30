#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout << setprecision(numeric_limits<double>::digits10 + 1) << a / b << endl;
	return 0;
}