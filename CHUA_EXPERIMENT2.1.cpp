#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char letter;
	float hours;
	
	cout << "Purchased Package (A,B,C): "; 
	cin >> letter;

	switch (letter)
	{
	case 'a':
	case 'A':
		cout << "Package A is P995/mo with 10 hrs of access provided. Additional hours are P20/hr." << endl;
		cout << "Total time used (in hours): ";
		cin >> hours;
		if (hours > 10)
			cout << "Total Bill is P" << 995 + (hours - 10) * 20 << " only.";
		else
			cout << "Total Bill is P995 only.";
		break;

	case 'b':
	case 'B':
		cout << "Package B is P1495/mo with 20 hrs of access provided. Additional hours are P10/hr." << endl;
		cout << "Total time used (in hours): ";
		cin >> hours;
		if (hours > 20)
			cout << "Total Bill is P" << 1495 + (hours - 20) * 10 << " only.";
		else
			cout << "Total Bill is P1495 only.";
		break;

	case 'c':
	case 'C':
		cout << "Package C is P1995/mo with unlimited hours of access provided." << endl;
		cout << "Total Bill is P1995 only.";
		break;

	default: cout << "Enter package letter A, B or C only.";
	}
	_getch();
	return 0;
	
}