#include <iostream>

/* Make a leap year tool to help people identify if the year they entered is considered a leap year. */

/* Then ask the user if they'd like to ask about another year, and another year, until they say no. */

using namespace std;

int main()
{
	int yearProvided;
	char answerProvided;

/* DO WHILE contain the repeated block of code with the 'DO' preceding and the '} WHILE' following the code block */

do { 
	cout<<"What year have you picked?\n"; 
	cin>> yearProvided;
	cout<<"You entered: " << yearProvided << "\n";

	int remainder = yearProvided % 4;

		if(remainder > 0)
		{
		cout<<"This is not a leap year.\n";
		}

		else
		{
		cout<<"This is a leap year.\n";
		}

/* CHAR statements are 'y' single letter only, strings have double quotations surrounding them, such as "word", and you cannot cross an INT with a CHAR. */	

	cout<<"Would you like to select another year? (Y/N) \n";
	cin>> answerProvided;
	
	} while (answerProvided == 'Y' || answerProvided == 'y');
	cout<<"Thank you.\n";
		
	return 0;
}
