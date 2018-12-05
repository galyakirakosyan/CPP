#include <iostream>
using namespace std;

int main()
{
	int numberBi,
		numberDec = 0,
		powTwo = 1,
		current;

	cout << "Enter number in binary system: ";
	cin >> numberBi;

	while (numberBi > 0)
	{
		current = numberBi % 10;
		numberDec += powTwo * current;
		numberBi /= 10;
		powTwo *= 2;
	}
	cout << "Number in decimal system is: " << numberDec << endl;
	return 0;
}