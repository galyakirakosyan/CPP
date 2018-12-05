#include <iostream>
using namespace std;

int main()
{
	int number,
		first,
		last,
		forFirst = 10000;
	bool polindrome = true;

	cout << "Enter a number: ";
	cin >> number;

	while (number > 9)
	{
		first = number / forFirst;
		last = number % 10;
		if (first == last)
		{
			number = (number - first * forFirst) / 10;
			forFirst /= 100;
		}
		else
		{
			polindrome = false;
			break;
		}
	}
	if (polindrome)
		cout << "It is palindrome.\n";
	else
		cout << "It is not palindrome.\n";
	return 0;
}