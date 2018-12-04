#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int workTime;
	double fixedSellary;
	double totalSellary;

	cout << "Enter working hours (-1 if finished): ";
	cin >> workTime;

	while (workTime != -1)
	{
		cout << "Enter fixed sellary ($00.00): ";
		cin >> fixedSellary;

		if (workTime <= 40)
		{
			totalSellary = fixedSellary * workTime;
			cout << "Total sellary: " << setprecision(2) << fixed << totalSellary << endl << endl;
		}

		else
		{
			totalSellary = fixedSellary * (40 + 1.5*(workTime - 40));
			cout << "Total sellary: " << setprecision(2) << fixed <<totalSellary << endl << endl;
		}
			
			
		cout << "Enter working hours (-1 if finished): ";
		cin >> workTime;
	}
	return 0;
	system("pause");
}