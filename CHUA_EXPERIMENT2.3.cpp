#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double V;
	int x, y;
	const double z = 2.5;
	
	cout << "Input x value:";
	cin >> x;
	cout << "Input y value:";
	cin >> y;

	switch (x)
	{

	case 1:

		if (y >= 1 && y < 5)
		{
			V = x*y*z;
		}

		else if (y >= 5)
		{
			V = x+(y/z);
		}

		else
		{
			V = x+y+z;
		}
		cout << setprecision(2) << fixed;
		cout << "\n" << "V is equal to " << V << endl;
		break;

	case 2:

		if (y <= 5)
		{
			V = abs((x-y)/z);
		}

		else if (y > 5)
		{
			V = x-sqrt(y+z);
		}

		else
		{
			V = x+y+z;
		}
		cout << setprecision(2) << fixed;
		cout << "\n" << "V is equal to " << V << endl;
		break;

	default:
		V = x+y+z;
		cout << "\n" << "V is equal to " << V << endl;
	}
	_getch();
	return 0;
}