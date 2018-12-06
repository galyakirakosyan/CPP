#include <iostream>
using namespace std;

int main()
{
	double a, b, c;

	cout << "Enter 3 sides: \n";
	cin >> a >> b >> c;

	if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
		cout << "It can be right triangle\n";
	else
		cout << "It can not be right triangle\n";

	return 0;
}