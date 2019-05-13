#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;
int main()

{
	const double consumption = 1.10;
	double remaining, gallons, waterbill;
	
	cout << "Remaining Balance (Type 0 if Paid Already): "; 
	cin >> remaining;
	cout << "You have " << remaining << " pesos remaining balance to pay." << "\n" << endl;
	cout << "Gallons used this Month: "; 
	cin >> gallons;
	cout << "You have used " << gallons << " gallons this month." << "\n" << endl;

	if (remaining > 0)
	{
		waterbill = (consumption * gallons) + 35 + 20 + remaining;
		cout << setprecision(2) << fixed;
		cout << "Your Water Bill is " << waterbill << " Pesos only." << endl;
	}
	else
	{
		waterbill = (consumption * gallons) + 35;
		cout << setprecision(2) << fixed;
		cout << "Your Water Bill is " << waterbill << " Pesos only." << endl;
	}

	_getch();
	return 0;
}