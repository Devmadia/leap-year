#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
// double getRadius();
// double square(double);

double getRadius()
{
	double rad;

	cout << "Enter the radius of the circle: ";
	cin >> rad;
	return rad;
}

double square(double number)
{
	return number * number;
}

int main()
{
	// Declare local variables/constants
	const double PI = 3.14159;
	double radius;
	double area;

	// Customize output formatting
	cout << fixed << showpoint << setprecision(2);

	// Get the radius of the circle
	radius = getRadius();

	// Calculate the area of the circle
	area = PI * square(radius);

	// Display area to user
	cout << "The area of a circle with a radius of " << radius << " is: " << area << "\n";

	// Exit the program
	return 0;
}
