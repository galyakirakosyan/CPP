#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 8;)
	{
		for (int j = 0; j < 16;)
		{
			if ((i % 2 || j % 2) && (!(i % 2) || !(j % 2)))
				cout << " ";
			else
				cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}