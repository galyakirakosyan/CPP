#include <iostream>
using namespace std;

void main()
{
	int num;
	cout << "Type a number: ";
	cin >> num;
//	cout << (float)num / 2 <<"\n"; to divide with 

	if(num % 2 == 0)
	{
		cout << "The number is even!" << "\n";
	}
	else {
		cout << "The number is odd!" << "\n";
	}
}