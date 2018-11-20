#include <iostream>
using namespace std;

void main()
{
	int a, b;

	cout << "Enter the length of regtangular: ";
	cin >> a;

	cout << "Enter the width of regtangular: ";
	cin >> b;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	system("pause");
}