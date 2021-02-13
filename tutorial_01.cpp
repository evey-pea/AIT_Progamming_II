// Tutorial One Single File Submission
// Student: Evelyn Paplauskas
// A full explanation of this file can be read online at: https://github.com/evey-pea/AIT_Progamming_II/blob/main/notes_Week_1.md

#include <iostream>
#include <string>

using namespace std;

void questionOne(){
	// Question 1
	cout << endl << "Tutorial question 1" << endl;
	
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
	cout << studentId << " " << studentName << endl << endl;
}

void questionTwo(){
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
	cout << "Address of family name: " << ptrFamilyName << endl << endl;
}

// Question 3 - Integer Array function; called in question3 function
void integerArray(){
    // Integer Array
	int a[5] = { 10, 20, 30, 40, 50 };
	
	// Output to console that this is an array of integers
	cout << "Integer Array " << endl << endl;
	
	// Iterate through integer array displaying properties
	for (int i = 0; i < 5 ; i++ ){
		cout << "Index       : "<< i << endl;
		cout << "Value       : "<< a[i] << endl;
		cout << "Address     : "<< &a[i] << endl;
		cout << "Value Size  : "<< sizeof(a[i])  << endl << endl;
	}
	/*
	The length of each integer element in decimal and hex is '4' bytes. This is
	cross confirmed with the use of the 'sizeof()' method and the incrementing of
	each of the memory addresses by 4 bytes in the output of the above code.
	
	This is what I expected as the length of an integer memory space is 32 bits
	(4x bytes, each byte being 8 bits). Additionaly many C++ reference materials
	refer to a standard length integer as being 4 bytes; such as this one: https://www.geeksforgeeks.org/c-data-types/
	*/
}

// Question 3 - Doubles Array function; called in question3 function
void doublesArray(){
    // Integer Array
	double b[5] = { 10.5, 20.5, 30.5, 40.5, 50.5 };
	
	// Output to console that this is an array of integers
	cout << "Doubles Array " << endl << endl;
	
	// Iterate through integer array displaying properties
	for (int i = 0; i < 5 ; i++ ){
		cout << "Index       : "<< i << endl;
		cout << "Value       : "<< b[i] << endl;
		cout << "Address     : "<< &b[i] << endl;
		cout << "Value Size  : "<< sizeof(b[i])  << endl << endl;
	}
	/*
	The length of each doubles element in decimal is '8' bytes and in hex '08'
	bytes. This is cross confirmed with the use of the 'sizeof()' method and the
	incrementing of each of the memory addresses by 8 bytes in the output of the
	above code.

	This is what I expected as the length of an doubles memory space is 64 bits
	(8x bytes, each byte being 8 bits). Additionaly many C++ reference materials
	refer to a standard length integer as being 4 bytes; such as this one: https://www.geeksforgeeks.org/c-data-types/
	*/
}

void stringArray(){
    // String Array initialisation
	std::string colour[4] = { "Red", "Orange", "Yellow", "Green" };
	
	// Output to console that this is an array of integers
	cout << "String Array " << endl << endl;
	
	// Iterate through integer array displaying properties
	for (int i = 0; i < 4 ; i++ ){
		cout << "Index       : "<< i << endl;
		cout << "Value       : "<< colour[i] << endl;
		cout << "Address     : "<< &colour[i] << endl;
		cout << "Value Size  : "<< sizeof(colour[i])  << endl << endl;
	}
	/* 
    The length of each doubles element in decimal is 32 bytes and hex is '20'.
	This is cross confirmed with the use of the 'sizeof()' method and the
	incrementing of each of the memory addresses by 32 bytes in the output of the
	above code.
	
    This is different to what I expected. I had been expecting each element to be
	the sum of the number of characters for each string element multiplied by 4
	bytes, as each char has a size of 4 bytes. For the first element, I was
	expecting the element "Red" to be only 12 bytes; "Orange" and "Yellow" to be
	24 bytes each "Green" to be 20 bytes.  
    
    Since 12 + 24 + 24 + 20 = 80, it is well under the array size of 128 bytes (4
	elements at 32 bytes each) reported by the 'sizeof()' method. This leads me
	to believe that since 32 is the lowest base 2 number above the largest
	element size of 24, the memory allowed for each element is 32 bytes. Should a
	single string element be above 32 bytes, then I would hypothesise that each
	array element will be afforded memory allocated in byte increments that allow
	for the largest element to be stored.
    */
}

void questionThree(){
	// Question 3
	cout << endl << "Tutorial question 3" << endl;

	// Execute each array section from question 3 as a seperate function
	integerArray();
	doublesArray();
	stringArray();
}

int main() {
	
	questionOne();	
	questionTwo();
	questionThree();

	return 0;
}