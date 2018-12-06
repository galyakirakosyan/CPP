#include <iostream>
using namespace std;

int main()
{
	double pi = 3.14159;
	int radius;

	cout << "Enter the radius: ";
	cin >> radius;

	cout << "Diameter\t\t" << radius * 2 << endl;
	cout << "Lenght\t\t" << 2 * pi*radius << endl;
	cout << "Square\t\t" << pi * radius*radius << endl;

	return 0;
}