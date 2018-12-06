#include <iostream>
using namespace std;

int main()
{
	int number,
		current,
		decoded = 0,
		i = 1;

	cout << "Enter the number to encode: ";
	cin >> number;

	while (i <= 4)
	{
		current = number % 10;

		switch (i)
		{
		case 1:
		{
			decoded += (current + 3) % 10 * 100;
			i++;
			break;
		}
		case 2:
		{
			decoded += (current + 3) % 10 * 1000;
			i++;
			break;
		}
		case 3:
		{
			decoded += (current + 3) % 10;
			i++;
			break;
		}
		case 4:
		{
			decoded += (current + 3) % 10 * 10;
			i++;
			break;
		}
		}

		number = number / 10;
	}

	cout << "Encoded number is: "<< decoded << endl;
	return 0;
}