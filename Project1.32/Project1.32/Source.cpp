#include <iostream>
using namespace std;

int main()
{
	int var1, var2;
	cin >> var1 >> var2;
	if (var1 % var2 == 0 || var2 % var1 == 0)
		cout << "This numbers are multiple!\n";
	else
		cout << "This numbers are not multiple!\n";
	return 0;
}