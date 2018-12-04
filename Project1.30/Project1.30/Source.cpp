#include <iostream>
using namespace std;

int main()
{
	int min, max, var1, var2, var3, a;

	cout << "Please enter five numbers to determine min and max of them:\n";
	cin >> min >> var1 >> var2 >> var3 >> max;

	if (min > max)
	{
		a = min;
		min = max;
		max = a;
	}
	if (min > var1)
		min = var1;
	if (min > var2)
		min = var2;
	if (min > var3)
		min = var3;
	if (max < var1)
		max = var1;
	if (max < var2)
		max = var2;
	if (max < var3)
		max = var3;
	cout << "Min of numbers: "<<min << "\nMax of numbers: " << max<<endl;
}