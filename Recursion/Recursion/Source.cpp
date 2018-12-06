#include <iostream>
using namespace std;

/*int Foo(int a)
{
	if (a < 1)
	{
		return 0;
	}

	a--;
	cout << a << endl;
	return Foo(a);
}

int main()
{
	Foo(5);
}*/

int Fact(int n)
{
	if (n == 0 || n == 1)
		return 1;

	int ff = Fact(n - 1);
	//cout << n<<"\t"<<ff << endl;
	return n * ff;
}

int main()
{
	int N;
	cout << "Please enter a number: ";
	cin >> N;

	cout << "Factorial of the number is: "<<Fact(N) << endl;
}