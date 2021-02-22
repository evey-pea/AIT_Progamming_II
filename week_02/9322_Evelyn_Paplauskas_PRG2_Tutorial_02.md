# C++ Programming Week 2 – Dynamic Memory Allocation

## Task 1

Predict the output of the following C++ program. Write your predictions down on
paper and then build and run the program to test your predictions

```cpp
// rememb-o-matic
#include <iostream>
using namespace std;
int main ()
{
 int i,n;
 int * p;
 cout << "How many numbers would you like to type? ";
 cin >> i;
 p= new (nothrow) int[i];
 if (p == 0)
 cout << "Error: memory could not be allocated";
 else
 {
 for (n=0; n<i; n++)
 {
 cout << "Enter number: ";
 cin >> p[n];
 }
 cout << "You have entered: ";
 for (n=0; n<i; n++)
 cout << p[n] << ", ";
 delete[] p;
 }
 system(“pause”);
 return 0;
}
```
### Prediction Task 1

### Result Task 1

## Task 2

Predict the output of the following C++ program. Write your predictions down on
paper and then build and run the program to test your predictions

```cpp
using namespace std;
typedef int *IntPtrType;
int main()
{
    IntPtrType ptr_a, ptr_b, *ptr_c;

    ptr_a = new int;
    *ptr_a = 3;
    pt _b = ptr_a;
    cout << *ptr_a << " " << *ptr_b << "\n";

    ptr_b = new int;
    *ptr_b = 9;
    cout << *ptr_a << " " << *ptr_b << "\n";

    *ptr_b = *ptr_a;
    cout << *ptr_a << " " << *ptr_b << "\n";

    delete ptr_a;
    ptr_a = ptr_b;
    cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";

    ptr_c = &ptr_a;
    cout << *ptr_c << " " << **ptr_c << "\n";

    delete ptr_a;
    ptr_a = NULL;
    system(“pause”);
    return 0;
}
```

### Prediction Task 2

### Result Task 2

## Challenge Task

Write a simple C++ program to create dynamic memory allocation for multiple
arrays. Your program specification as below:

- Ask user for number of name
- Prompt to get input for each name
- Print out your array address
- Print out first character of each name
- Print out name

### Example

```
How many name you want to store? 5
Please enter name 1: Kriss
Please enter name 2: Steve
Please enter name 3: Tony
Please enter name 4: Peter
Please enter name 5: Robert
First address of array is: 00345C8
First character of name 1 is: K
First character of name 2 is: S
First character of name 3 is: T
First character of name 4 is: P
First character of name 5 is: R
Kriss
Steve
Tony
Peter
Robert
```

### HINTS/CHEATS/SPOILERS

```cpp
string *strArray = new string[5]; //make an array of string dynamically
cout<<strArray; //memory location of strArray
cout<<strArray[0];//the value stored (eh "Matt") in our first string in our string
array
cout<<strArray[0][0];//the first value stored in our array and the first character
of that string (eg 'M');
```
Use for loops :D

## Submission
- Each task should be named as ```<student_id>_<student_name>_tut2_task<task_number>```. E.g.
```1234_Kriss_tut2_task1```

- Compress your entire project folder and name it as ```<student_id>_<student_name>_tut2.zip``` E.g. ```1234_Kriss_tut2.zip``` then upload
- Due date is Week 3