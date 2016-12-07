/*

r/dailyprogrammer [easy] challenge #1

create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:

	your name is (blank), you are (blank) years old, and your username is (blank)

for extra credit, have the program log this information in a file to be accessed later.

*/

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ofstream log;

	int age;
	std::string name;
	std::string username;

	log.open("log.txt"); //open output to file

	log << "log.txt\n\n"; //write the name of the file to the top of the file because why not

	std::cout << "Enter name: "; //ask user name
	std::cin >> name; //receive name

	std::cout << "Enter age: "; //ask user age
	std::cin >> age; //receive age

	std::cout << "Enter username: "; //ask user username
	std::cin >> username; //receive username

	std::cout << "\nYour name is " << name << ", you are " << age << " years old, and your username is	" << username << "."; //output to console
	log << "Your name is " << name << ", you are " << age << " years old, and your username is	" << username << "."; //write to file to be accessed later

	log.close(); //close output to file

	return 0;
}