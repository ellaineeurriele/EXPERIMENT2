#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num, number, sum;

	cout << "Input any number: ";
	cin >> num;

	do
	{
		sum = 0;
		for (number = 1; number <= num; number++)
		{
			sum += number;
		}
		cout << "The sum of all whole numbers from 1 to " << num << " is " << sum << "." << endl;
		cout << "Input any number: ";
		cin >> num;

	} while (num > 0);
	cout << "Thank you!" << endl;

	_getch();
	return 0;
}


