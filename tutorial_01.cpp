#include <iostream>
#include <string>

using namespace std;

void main() {
	// Question 1
	cout << "Tutorial question 1" << endl;
	
	// Variable declarations for question 1
	int studentId;
	string studentName;

	//Prompt to input your student ID
	cout << "Please enter your student ID number:" << endl;
	cin >> studentId;

	//Prompt to input your name
	cout << "Please enter your first name:" << endl;
	cin >> studentName;

	//Print out your full name
	cout << studentId << " " << studentName << endl;

	// Question 2
	cout << "Tutorial question 2" << endl;

	// Variable declarations for question 2
	string firstName;
	string familyName;

	//Prompt to input your name
	cout << "Please enter your first name:" << endl;
	cin >> firstName;

	//Prompt to input your family name
	cout << "Please enter your family name:" << endl;
	cin >> familyName;

	//Print out your full name
	cout << "Hello " + firstName + " " + familyName << endl;

	//Print out address of each variable, nameand family name :
	// Store pointer values
	string* ptrFirstName;
	string* ptrFamilyName;
	ptrFirstName = &firstName;
	ptrFamilyName = &familyName;

	// Output pointer values
	cout << "Address of first name: " << ptrFirstName << endl;
	//cout << ptrFirstName << endl;
	cout << "Address of family name: " << ptrFamilyName << endl;
}