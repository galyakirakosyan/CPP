#include <iostream>
using namespace std;

int main()
{
	int counter = 2;
	double number,
		largest,
		prelargest;

	cout << "Enter 10 numbers to find 2 largest\n\n";
	cin >> prelargest;

	cin >> number;
	
	if (number < prelargest)
	{
		largest = prelargest;
		prelargest = number;
	}
	else
	{
		largest = number;
	}

	while (counter < 10)
	{
		cin >> number;

		if (number > prelargest&&number < largest)
		{
			prelargest = number;
		}
		else if (number >= largest)
		{
			largest = prelargest;
			prelargest = number;
		}

		counter++;
	}
	cout << "The largest number is: " << largest << endl;
	cout << "The prelargest number is: " << prelargest << endl;


	return 0;
}
