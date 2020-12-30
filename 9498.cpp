#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int y = x / 10;
	if (y==9||y==10) cout << "A";
	else if (y==8) cout << "B";
	else if (y==7) cout << "C";
	else if (y==6) cout << "D";
	else cout << "F";

	return 0;
}
