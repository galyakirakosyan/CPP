#include <iostream>
using namespace std;

int main()
{
	double a, b, c;

	cout << "Enter 3 sides: \n";
	cin >> a >> b >> c;

	if (a < b + c && b < a + c && c < a + b)
		cout << "It can be triangle\n";
	else
		cout << "It can not be triangle\n";
	
	return 0;
}