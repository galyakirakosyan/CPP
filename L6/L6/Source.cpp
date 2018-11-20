#include <iostream>
using namespace std;

int main()
{

	int Var1, Var2, Var3;

	cout << "Please enter three numbers" << endl;

	cin >> Var1 >> Var2>>Var3;

	cout << "You have entered these three numbers: "<<Var1<<", "<<Var2<<" and "<<Var3<<"\n";
	cout << "Sum of numbers is: " << Var1 + Var2 + Var3 << "\n";
	cout << "Multiplication of numbers is: " << Var1 * Var2*Var3 << "\n";
	cout << "Average of numbers is: " << (double)(Var1 + Var2 + Var3) / 3 << "\n";

	system("pause");
}