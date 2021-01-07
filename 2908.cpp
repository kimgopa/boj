#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	
	string d, e;
	for (int i = 2; i > -1; i--)
	{
		d += a[i];
		e += b[i];
	}

	if (atoi(d.c_str()) - atoi(e.c_str()) > 0)
		cout << d;
	else
		cout << e;

	return 0;
}
