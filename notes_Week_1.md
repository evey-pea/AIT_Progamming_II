# Programming II - Week One Notes - Pointers

- [Programming II - Week One Notes - Pointers](#programming-ii---week-one-notes---pointers)
	- [Study](#study)
	- [Homework](#homework)
	- [Tutorial questions](#tutorial-questions)
		- [Question 1](#question-1)
			- [Solution 1](#solution-1)
		- [Question 2](#question-2)
			- [Solution 2](#solution-2)
		- [Question 3](#question-3)
			- [Integers](#integers)
				- [Integer Array Solution](#integer-array-solution)
			- [Doubles](#doubles)
				- [Doubles Array Solution](#doubles-array-solution)
			- [Strings](#strings)
				- [Strings Array Solution](#strings-array-solution)
	- [Single file contents for upload](#single-file-contents-for-upload)

## Study

* [x] Download and install Visual Studio with C++ language support (*required*)
* [x] Refresh knowledge on C++ by reading chapters 1 to 6 of C++ All-in-One for Dummies - Book 1 (*optional*)
* [x] Read chapter 7 of [C++ All-in-One for Dummies - Book 1](https://ebookcentral.proquest.com/lib/redhill-ebooks/detail.action?docID=1753609&query=C%2B%2B) (*required*)
* [x] Watch video on [Pointers](https://www.linkedin.com/learning/learning-c-plus-plus-3/pointers?contextUrn=urn%3Ali%3AlyndaLearningPath%3A56d799343dd559b764b88a89&u=79795722) (*required*)

## Homework

* [x] Download and read the 3 zip files
  * [x] Downloaded files
  * [x] Read first file
  * [x] Read second file
  * [x] Read third file
* [x] Do Tutorial 1 questions 1 and 2
* [x] John will send you Tutorial Question 3 via email
* [x] John will send you a list of dates/times for a 1 hour "catch-up lesson due to today's technology issues via email
* [x] Upload three tutorial solutions as a single .cpp file via Canvas

## Tutorial questions

### Question 1

Write a simple C++ program take your name, student id and print out as example below:

**Expected output**

```
Please enter your name: Kriss

Please enter your student id: 1234

1234 Kriss
```

#### Solution 1

```c++
#include <iostream>
#include <string>

using namespace std;

void main() {
	// Question 1
	cout << "Tutorial question 1" << endl;
	
	// Variable declarations
	int studentId;
	string firstName;

	//Prompt to input your name
	cout << "Please enter your first name:" << endl;
	cin >> firstName;

	//Prompt to input your student ID
	cout << "Please enter your student ID number:" << endl;
	cin >> studentId;

	//Print out your full name
	cout << studentId << " " << firstName << endl;
}
```

### Question 2

Write a simple C++ program condition as below:

* Prompt to input your name

* Prompt to input your family name

* Print out your full name

* Print out address of each variable, name and family name:

**Expected output**

```
Please enter your name:Steve

Please enter your family name:Job

Hello Steve Job

Address of name: 0012FF60

Address of  family name: 0012FC80
```

#### Solution 2

```c++
#include <iostream>
#include <string>

using namespace std;

void main() {
	// Question 1
	cout << "Tutorial question 2" << endl;
	
	// Variable declarations
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
	string *ptrFirstName; 
	string *ptrFamilyName;
	ptrFirstName = &firstName;
	ptrFamilyName = &familyName;

	// Output pointer values
	cout << "Address of first name: " << ptrFirstName << endl;
	//cout << ptrFirstName << endl;
	cout << "Address of family name: " <<  ptrFamilyName << endl;
}
```

### Question 3

#### Integers

- Define an array of 5 integers - assign them some arbitrary values.
- Display the value of each element, and the location (address) of each element.
- Based on these addresses, what is the length of each element ? (In both hex and decimal.)
- Is this what you expected ?

##### Integer Array Solution

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{   
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
    return 0;
}
```

The length of each integer element in decimal and hex is '4' bytes. This is cross confirmed with the use of the 'sizeof()' method and the incrementing of each of the memory addresses by 4 bytes in the output of the above code.

This is what I expected as the length of an integer memory space is 32 bits (4x bytes, each byte being 8 bits). Additionaly many C++ reference materials refer to a standard length integer as being 4 bytes; such as this one: https://www.geeksforgeeks.org/c-data-types/

#### Doubles

- Define an array of 5 doubles - assign them some arbitrary values.
- Display the value of each element, and the location (address) of each element.
- Based on these addresses, what is the length of each element ? (In both hex and decimal.)
- Is this what you expected ?

##### Doubles Array Solution

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{   
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
    
    return 0;
}
```

The length of each doubles element in decimal and hex is '8' bytes. This is cross confirmed with the use of the 'sizeof()' method and the incrementing of each of the memory addresses by 8 bytes in the output of the above code.

This is what I expected as the length of an doubles memory space is 64 bits (8x bytes, each byte being 8 bits).

#### Strings

- Define an array of 4 strings - assign them some arbitrary values.
- Display the value of each element, and the location (address) of each element.
- Based on these addresses, what is the length of each element ? (In both hex and decimal.)
- Is this what you expected ?

##### Strings Array Solution

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{   
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
	   
    return 0;
}
```

The length of each doubles element in decimal is 32 bytes and hex is '20'. This is cross confirmed with the use of the 'sizeof()' method and the incrementing of each of the memory addresses by 32 bytes in the output of the above code.

This is different to what I expected. I had been expecting each element to be the sum of the number of characters for each string element multiplied by 4 bytes, as each char has a size of 4 bytes. For the first element, I was expecting the element "Red" to be only 12 bytes; "Orange" and "Yellow" to be 24 bytes each "Green" to be 20 bytes.  

Since 12 + 24 + 24 + 20 = 80, it is well under the array size of 128 bytes (4 elements at 32 bytes each) reported by the 'sizeof()' method. This leads me to believe that since 32 is the lowest base 2 number above the largest element size of 24, the memory allowed for each element is 32 bytes. Should a single string element be above 32 bytes, then I would hypothesise that each array element will be afforded memory allocated in byte increments that allow for the largest element to be stored.

## Single file contents for upload

The below code snippet is the contents of the tutorial_01.cpp file that is to be submitted as the finished body of work.

```C++
// Tutorial One Single File Submission
// Student: Evelyn Paplauskas
// A full explanation of this file can be read online at: 
// https://github.com/evey-pea/AIT_Progamming_II/blob/main/notes_Week_1.md

#include <iostream>
#include <string>

using namespace std;

void questionOne(){
	// Question 1
	cout << endl << "Tutorial question 1" << endl;
	
	// Variable declarations for question 1
	int studentId;
	string studentName;

	//Prompt to input your name
	cout << "Please enter your first name:" << endl;
	cin >> studentName;

	//Prompt to input your student ID
	cout << "Please enter your student ID number:" << endl;
	cin >> studentId;

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
	(4x bytes, each byte being 8 bits).Additionaly many C++ reference materials
	refer to a standard length integer as being 4 bytes; such as this one: 
	https://www.geeksforgeeks.org/c-data-types/
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
	(8x bytes, each byte being 8 bits).
	*/
}

// Question 3 - String Array function; called in question3 function
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
	// Execute each question in order
	questionOne();	
	questionTwo();
	questionThree();

	return 0;
}
```