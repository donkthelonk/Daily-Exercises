/*

Hello, coders! An important part of programming is being able to apply your programs, 
so your challenge for today is to create a calculator application that has use in your life. 
It might be an interest calculator, or it might be something that you can use in the classroom. 
For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!

EXTRA EXTRA CREDIT: put all output into a log file

*/

#include <iostream>
#include <fstream>
using namespace std;

void calcForce();
void calcMass();
void calcAcceleration();

int main()
{
	ofstream log; //outputs to a log file

	log.open("log.txt"); //open output stream to log.txt
	log << "log.txt\n\n";

	float force;
	float mass;
	float acceleration;

	char userChoice;

	do { //loop until the user is done
		cout << "What would you like to calculate? Enter 'F' for Force, 'M' for mass, or 'A' for acceleration. (Enter X to exit)\n"; //prompt user
		cin >> userChoice; //receive user input

		switch (userChoice)
		{
		case 'F':
			calcForce();
			break;

		case 'M':
			calcMass();
			break;

		case 'A':
			calcAcceleration();
			break;

		default:
			break;

		}
	} while (userChoice != 'X');

	
	
	return 0;
}

void calcForce()
{
	return;
}

void calcMass()
{
	return;
}

void calcAcceleration()
{
	return;
}