#include <iostream>
using namespace std;

int main()
{
	int passes = 0,
		failures = 0,
		studentCounter = 1,
		result;

	while (studentCounter <= 10)
	{
		cout << "Enter the result (1=pass, 2=failure): ";
		cin >> result;

		switch (result)
		{
		case 1:
		{
			passes++;
			studentCounter++;
			break;
		}
		case 2:
		{
			failures++;
			studentCounter++;
			break;
		}
		default:
			cout << "Enter valid result" << endl;
		}
	}
	cout << "Passes: " << passes << endl;
	cout << "Failes: " << failures << endl;

	if (passes > 8)
		cout << "Increase the fee for course" << endl;
	
	return 0;
}