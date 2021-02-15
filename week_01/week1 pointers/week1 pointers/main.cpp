#include <iostream>

using namespace std;

void main(){
	//when we declare a variable, its memory gets created somewhere which has an address(eg 1234)
	//and then the value is stored there (e.g at memory location 1234 we store the value 56)
	int x = 56;

	//pointers point at memory addresses. To declare a pointer, you have to specify what type it is
	//and give it a variable name. eg int *ptr will create an integer pointer
	int *ptr;

	//the & symbol is called the reference symbol. If you put this infront of any variable, 
	//it will give you back that variables memory address.
	//Pointers point to the memory address of things, so we can make ptr point to x, by doing this:
	ptr = &x;

	//if i output the value in ptr, it will be the memory address of x
	cout<<ptr<<" = "<<&x<<endl;
	//to output the value of what ptr is pointing at, we need to de-reference it. To de-reference
	//a pointer, put the * symbol in front. Basically its saying 'hey you, you're pointing at this
	//memory address, but I want to see the value at that address'
	cout<<*ptr<<" = "<<x<<endl;

	//after de-referencing a pointer, it acts like a regular int. Except we're technically changing
	//the value in x
	*ptr = *ptr+234;
	cout<<*ptr<<" = "<<x<<endl;

	//pointerToPointer is a pointer to a pointer of type int. so we give it 
	//the memory address of ptr
	//basically. pointerToPointer points at something that points to something else
	int **pointerToPointer = &ptr;

	//lots to output with pointerToPointer:
	//the value stored in our pointer to a pointer is the memory  address of an int pointer
	cout<<pointerToPointer<<" = "<<&ptr<<endl;
	//de-referenced, we get the value of what its pointing at. Which whatever address is stored in ptr
	cout<<*pointerToPointer<<" = "<<ptr<<endl;
	//de-referencing it twice will first get the value in ptr, then get the value that ptr points to, which is x
	cout<<**pointerToPointer<<" = "<<x<<endl;

	char *charArray[5] = {"Bruce", "asdf sdfsd", "Sdf", "LOOP", "REWGG"};
	cout<<charArray[0]<<endl; //actually outputs full string in slot 0 e.g Bruce. outputs till '\0'
	cout<<*charArray[0]<<endl; //de-referenced: gets the first letter in Bruce here :S

	system("pause");
}