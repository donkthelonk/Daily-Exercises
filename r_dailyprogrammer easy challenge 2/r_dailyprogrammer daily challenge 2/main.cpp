/*

Hello, coders! An important part of programming is being able to apply your programs, 
so your challenge for today is to create a calculator application that has use in your life. 
It might be an interest calculator, or it might be something that you can use in the classroom. 
For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!

*/

#include <iostream>
#include <fstream>
using namespace std;

double calcForce(double, double);
double calcMass(double, double);
double calcAcceleration(double, double);

int main()
{
	double force = 0; //store force
	double mass = 0; //store mass
	double acceleration = 0; //store acceleration

	char userChoice; //store user choice at the "menu"

	do { //loop until the user is done
		cout << "What would you like to calculate? Enter 'F' for Force, 'M' for mass, or 'A' for acceleration. (Enter X to exit)\n"; //prompt user
		cin >> userChoice; //receive user input
		
		cout << "\n---------------------------------------------------------------\n";

		switch (userChoice) //call a calculate function based on the user's choice
		{
		case 'f':
		case 'F':
			cout << "Enter Mass: ";
			cin >> mass;
			cout << "Enter Acceleration: ";
			cin >> acceleration;
			cout << "\nForce = " << calcForce(mass, acceleration) << endl << endl; //call calculate force function
			break;

		case 'm':
		case 'M':
			cout << "Enter Force: ";
			cin >> force;
			cout << "Enter Acceleration: ";
			cin >> acceleration;
			cout << "\nMass: " << calcMass(force, acceleration) << endl << endl; //call calculate mass function
			break;

		case 'a':
		case 'A':
			cout << "Enter Force: ";
			cin >> force;
			cout << "Enter mass: ";
			cin >> mass;
			cout << "\nAcceleration: " << calcAcceleration(force, mass) << endl << endl; //call calculate acceleration function
			break;

		case 'x':
		case 'X':
			break;

		default:
			cout << "\ninvalid option\n";
			break;

		}
	} while (userChoice != 'X' && userChoice != 'x');

	cout << "\n---------------------------------------------------------------\n";
	
	return 0;
}

//returns F = M * A
double calcForce(double mass, double acceleration)
{
	return mass * acceleration;
}

//returns M = F / A
double calcMass(double force, double acceleration)
{
	return force / acceleration;
}

//returns A = F / M
double calcAcceleration(double force, double mass)
{
	return force / mass;
}