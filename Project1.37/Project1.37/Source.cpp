#include <iostream>
using namespace std;

int main()
{
	cout << "number\tsquare\tcube\n";
	for (int i = 0; i <= 10; i++)
	{
		cout << i << "     \t" << i * i << "    \t" << i * i * i << "\n";
	}
}
