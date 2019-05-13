#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	int i, fs1 = 0, fs2 = 1, f;
	const int num = 22;

	cout << "The Next 20 Fibonacci Seuqnce (After 0 and 1) is " << "\n";

	for (i = 0; i < num; i++)
	{
		if (i <= 1)f = i;
		else
		{
			f = fs2 + fs1;
			fs1 = fs2;
			fs2 = f;
		}

		cout << f << ",";

	}

	_getch();
	return 0;
}