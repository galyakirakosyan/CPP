#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int fixedSellary = 200;
	double sellsAmount;

	cout << "Enter sells amount in dollars (-1 if input is finished): ";
	cin >> sellsAmount;

	while (sellsAmount != -1)
	{
		cout << "Profit: " << setprecision(2) << fixed << fixedSellary + sellsAmount * 0.09 << endl << endl;

		cout << "Enter sells amount in dollars (-1 if input is finished): ";
		cin >> sellsAmount;
	}
	return 0;
}