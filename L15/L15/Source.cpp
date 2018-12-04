#include <iostream>
using namespace std;

void main()
{
	int startPoint, finishPoint, sum = 0;
	cout << "Enter the range \n";
	cin >> startPoint >> finishPoint;

	if (startPoint % 2 == 0)
	{
		startPoint += 1;
	}
	do
	{
		sum += startPoint;
		startPoint += 2;
	} 
	while (startPoint <= finishPoint);
	cout << sum << "\n";
}