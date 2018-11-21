#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(time(NULL));

	int const SIZE = 10;

	int arr[SIZE], min=1000000;

	for (int i = 0; i < SIZE;)
	{
		bool check = true;

		int a = rand() % 20;

		for (int j = 0; j <= i; j++)
		{
			if (arr[j] == a)
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			arr[i] = a;

			if (a < min)
			{
				min = a;
			}
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<<"\n";
	}
	cout << "Min of array: " << min << endl;
}