#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double ID,
		startBalance,
		spendings,
		incomes,
		limit,
		currentBalance;

	cout << "Enter ID of credit (-1, if input is complete): ";
	cin >> ID;

	while (ID != -1)
	{
		cout << "Enter start balance: ";
		cin >> startBalance;

		cout << "Enter total of spendings: ";
		cin >> spendings;

		cout << "Enter total incomes: ";
		cin >> incomes;

		cout << "Enter limit of credit: ";
		cin >> limit;

		currentBalance = startBalance + spendings - incomes;

		if (currentBalance >limit)
			cout << "Credit NO: " << ID<< "\nLimit of credit: "<<setprecision(2) << fixed <<limit
			<<"\nBalance: " << setprecision(2) << fixed << currentBalance << "\nCredit limit is exceeded\n";

		cout << "\nEnter ID of credit (-1, if input is complete): ";
		cin >> ID;
	}
	return 0;
}