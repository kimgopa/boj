#include <iostream>
#include <string>
using namespace std;

int main()
{
	string al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string di = "22233344455566677778889999";
	/*
		1
		2 : A B C
		3 : D E F
		4 : G H I
		5 : J K L
		6 : M N O
		7 : P Q R S
		8 : T U V
		9 : W X Y Z
		0
	*/
	
	string input;
	cin >> input;
	int time = 0;
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = 0; j < al.size(); j++)
		{
			if (input[i] == al[j])
			{
				time += di[j] - '0';
				time += 1;

				break;
			}
		}
	}

	cout << time;

	return 0;
}
