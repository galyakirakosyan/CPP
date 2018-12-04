#include <iostream>
using namespace std;

int main()
{
	int N, n = 5, i = 10000;

	cout << "Enter a number: ";
	cin >> N;

	while (n != 0)
	{
		cout << N / i << "\t";
		N = N % i;
		i = i / 10;
		n--;
	}
	return 0;
}