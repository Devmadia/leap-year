#include <iostream>

using namespace std;

int main()
{
	float weightInPounds, heightInInches;
	
	cout<< "Please enter your weight in pounds.\n";
	cin>> weightInPounds;
	cout<< "Please enter your height in inches.\n";
	cin>> heightInInches;
	cout<< "You entered: " << weightInPounds << " pounds.\n";
	cout<< "You entered: " << heightInInches << " inches.\n";

	float bmi = (weightInPounds * 703) / (heightInInches * heightInInches);
	
	cout<< "Your BMI is: " << bmi <<"\n";

	if(bmi < 18.5)
	{
	cout<< "Your BMI Value is Underweight.\n";
	}

	else if(bmi >= 18.5, bmi < 25.0)
	{
	cout<< "Your BMI Value is Normal.\n";
	}
	else if(bmi >= 25.0, bmi < 30.0)
	{
	cout<< "Your BMI Value is Overweight.\n";
	}
	else if(bmi >= 30)
	{
	cout<< "Your BMI Value is Obese.\n";
	}

	return 0;
}
