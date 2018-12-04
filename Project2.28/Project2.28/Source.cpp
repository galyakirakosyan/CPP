#include <iostream>
using namespace std;

int main()
{
	int size;
	int i = 1;
	int j;

	cout << "Enter the size of quadrate: ";
	cin >> size;

	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (i == 1 || i == size || j == 1 || j == size)
				cout << "*";
			else
				cout << " ";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}