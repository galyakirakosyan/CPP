#include <iostream>
using namespace std;

void main()
{
	char a;
	int num, type, i=1;

	cout << "Enter the symbol:";
	cin >> a;

	cout << "Enter number of symbols: ";
	cin >> num;

	cout << "Enter type of line: 1 for horizontal, 2 for vertical\n";
	cin >> type;

	switch (type)
	{
	case 1:
		while (i <= num)
		{
			cout << a;
			i++;
		}
		
		break;

	case 2:
		while (i <= num)
		{
			cout << a << "\n";
			i++;
		}
	
		break;

	default:
		cout << "Line type error!\n";
	}
}