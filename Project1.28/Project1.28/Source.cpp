#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		if (i == 1 || i == 9)
			cout << "*********\t   ***  \t  *  \t      *    \n";
		else if (i == 2)
			cout << "*       *\t *     * \t *** \t     * *   \n";
		else if (i == 3)
			cout << "*       *\t*       *\t*****\t    *   *  \n";
		else if (i == 4 || i == 6)
			cout << "*       *\t*       *\t  *  \t   *     * \n";
		else if (i == 5)
			cout << "*       *\t*       *\t  *  \t  *       *\n";
		else if (i == 7)
			cout << "*       *\t*       *\t  *  \t    *   *  \n";
		else
			cout << "*       *\t *     * \t  *  \t     * *   \n";		
	}
	return 0;
}