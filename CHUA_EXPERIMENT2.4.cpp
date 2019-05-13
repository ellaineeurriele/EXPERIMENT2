#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{

	int count, counter;
	counter = 1;

	for (count = 1; count <= 10; count++)
	{
		cout << counter << ",";
		counter++;
	}

	for (counter = 12; counter <= 30;)
	{
		cout << counter << ",";
		counter += 2;
	}
		
	_getch();
	return 0;

}