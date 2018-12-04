#include <iostream>
using namespace std;

void main()
{
	float a, b;
	cout << "Enter 2 numbers: \n";
	cin >> a >> b;
	
	cout << "Enter operator: ";
	char op;
	cin >> op;

	switch (op)
	{
	case '+':
		cout << "Adding... Result is: " << a + b << "\n";
		break;

	case '-':
		cout << "Subtracting... Result is: " << a - b << "\n";
		break;
		
	case '*':
		cout << "Multiplying... Result is: " << a * b << "\n";
		break;

	case '/':
		cout << "Deviding... Result is: " << (float)a / b << "\n";
		break;

	default:
		cout << "Operator error!\n";
	}
}