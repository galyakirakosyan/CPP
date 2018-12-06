#include <iostream>
using namespace std;

template<typename T1, typename T2>
T1 Sum(T2 a, T1 b)
{
	return a + b;
}

template<typename T1, typename T2>
void Print(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

template<class T>
void F(T g)
{
	cout << g << endl;
}

int main()
{
	cout << Sum(5, 10) << endl;
	cout << Sum(5.2, 7.4) << endl;
	cout << Sum(7, 9.2) << endl;
	Print("ABC", 8.5);
	F("Galya");
}