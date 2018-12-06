#include <iostream>
using namespace std;

int main()
{
	int number,
		current,
		encoded = 0,
		i = 1;

	cout << "Enter the number to encode: ";
	cin >> number;

	cout << "Encoded number is: ";
	
	while (i <= 4)
	{
		current = number % 10;

		switch (i)
		{
		case 1:
		{
			encoded += (current + 7) % 10 * 100;
			i++;
			break;
		}
		case 2:
		{
			if ((current + 7) % 10 == 0)
				cout << 0;
			else
				encoded += (current + 7) % 10 * 1000;
			i++;
			break;
		}
		case 3:
		{
			encoded += (current + 7) % 10;
			i++;
			break;
		}
		case 4:
		{
			encoded += (current + 7) % 10 * 10;
			i++;
			break;
		}
		}

		number = number / 10;
	}
	
	cout << encoded << endl;
	return 0;	
}