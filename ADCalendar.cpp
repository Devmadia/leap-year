#include <iostream>

/* Since Day 1 of AD Calendar, how many days have passed since then and the year the User provides. */

using namespace std;

int main()
{
	int yearProvided;

	cout<<"What year did you pick?\n"; 
	cin>> yearProvided;
	cout<<"You entered: " << yearProvided << "\n";

	cout<<"The difference in years is: " << yearProvided << "\n";

	int leapyears = yearProvided / 4;

	cout<<"There are " << leapyears << " leap years to consider.\n";

	int dayspassed = (yearProvided * 365) + leapyears;

	cout<<"Since Day 1 of the Gregorian calendar, there have been " << dayspassed << "days from then to " << yearProvided << " AD.\n";

return 0;
}
