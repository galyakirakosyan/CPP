#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double petrol, 
		distance,
		milePerGallon,
		totalDistance = 0, 
		totalPetrol = 0;

		cout << "Enter volume of used petrol (-1, if input is complete): ";
		cin >> petrol;

	while (petrol != -1)
	{
		cout << "Enter passed distance: ";
		cin >> distance;
		
		cout << "For this volume it is " << setprecision(6) << fixed << distance / petrol << " mile per gallon.\n\n";

		totalDistance += distance;
		totalPetrol += petrol;

		cout << "Enter volume of used petrol (-1, if input is complete): ";
		cin >> petrol;		
	} 
	if (totalDistance != 0)
		cout << "\nAverage waste of petrol is equal to " << setprecision(6) << fixed 
			<< totalDistance / totalPetrol << endl;
	else
		cout << "There is no entered data.\n";

	return 0;
}