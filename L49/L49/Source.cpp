#include <iostream>
using namespace std;

void Swap(int*pa, int*pb)
{
	int temp = *pa;

	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 5,
		b = 6;

	cout << "Enter numbers for a and b: ";
	cin >> a >> b;

	Swap(&a, &b);

	cout << "a =\t" << a << endl;
	cout << "b =\t" << b << endl;

	return 0;
}