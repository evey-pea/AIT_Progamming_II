# Programming II - Week One Notes - Pointers

## Study

* [x] Download and install Visual Studio with C++ language support (*required*)
* [ ] Refresh knowledge on C++ by reading chapters 1 to 6 of C++ All-in-One for Dummies - Book 1 (*optional*)
* [ ] Read chapter 7 of [C++ All-in-One for Dummies - Book 1](https://ebookcentral.proquest.com/lib/redhill-ebooks/detail.action?docID=1753609&query=C%2B%2B) (*required*)
* [ ] Watch video on [Pointers](https://www.linkedin.com/learning/learning-c-plus-plus-3/pointers?contextUrn=urn%3Ali%3AlyndaLearningPath%3A56d799343dd559b764b88a89&u=79795722) (*required*)

## Homework

* [ ] Download and read the 3 zip files
  * [x] Downloaded files
  * [ ] Read first file
  * [ ] Read second file
  * [ ] Read third file
* [x] Do Tutorial 1 questions 1 and 2
* [x] John will send you Tutorial Question 3 via email
* [x] John will send you a list of dates/times for a 1 hour "catch-up lesson due to today's technology issues via email
* [ ] Upload three tutorial solutions as a single .cpp file via Canvas

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

	//Prompt to input your student ID
	cout << "Please enter your student ID number:" << endl;
	cin >> studentId;

	//Prompt to input your name
	cout << "Please enter your first name:" << endl;
	cin >> firstName;

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

#### Doubles
- Define an array of 5 doubles - assign them some arbitrary values.
- Display the value of each element, and the location (address) of each element.
- Based on these addresses, what is the length of each element ? (In both hex and decimal.)
- Is this what you expected ?

#### Strings

- Define an array of 4 strings - assign them some arbitrary values.
- Display the value of each element, and the location (address) of each element.
- Based on these addresses, what is the length of each element ? (In both hex and decimal.)
- Is this what you expected ?

**Solution**

## Single file contents for upload

```c++
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
```