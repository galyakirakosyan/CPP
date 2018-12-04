#include <iostream>
using namespace std;

/* for 2.25
int main()
{
	int row = 10, column;
	while (row >= 1)
	{
		column = 1;
		while (column <= 10)
		{
			cout << (row % 2 ? "<" : ">");
			++column;
		}
		--row;
		cout << endl;

	}
	return 0;
}*/


int main()
{
	int x = 9, y = 11;

	if (x < 10)
		if (y > 10)
			cout << "*****" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl << endl;


	if (x < 10) {
		if (y > 10)
			cout << "*****" << endl;
	}
	else {
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
	}

	return 0;
}