#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	double number,
		largest;

	cout << "Enter 10 numbers to find the largest\n\n";
	cin >> largest;

	while (counter < 10)
	{
		cin >> number;
		if (number > largest)
			largest = number;

		counter++;
	}
	cout << "The largest number is: " << largest << endl;

	return 0;
}
