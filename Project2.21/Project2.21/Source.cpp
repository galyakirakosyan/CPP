#include<iostream>
using namespace std;

int main()
{
	cout << "N\t\t10*N\t\t100*N\t\t1000*N\n\n\n";
	for (int i = 1; i < 6; i++)
	{
		cout <<i<< "\t\t"<<10*i<<"\t\t"<<100*i<<"\t\t"<<1000*i<<"\n";
	}
	return 0;
}