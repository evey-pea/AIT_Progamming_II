#include <iostream>
#include <string>

using namespace std;

void main(){
	int x = 6; //creates an integer at some memory location, lets say 777

	int *ptr; //type *, means its a pointer of that type. ptr is a int pointer (points at int's)
			//pointers store the memory location of other variables

	ptr = &x; //reference symbol(&), is used to get the memory address of any variable. So ptr is now storing
				//the memory address of x

	cout<<ptr<<endl; //outputting ptr will output the value it is storing (the memory address of x)
	cout<<*ptr<<endl; //derefence symbol(* infront of a pointer) - looks up the memory address in the pointer
						//and gives back the value. So in this case, it see's ptr is holding the mem address for x,
						//so it outputs x's value (6)

	*ptr = *ptr + 17; //we can change x's values through the pointer, by derefencing
	cout<<x<<endl;

	int **pPtr; //pPtr is a pointer to a pointer. It points at int pointers (int *)
	pPtr = &ptr; //pointing to the address of pointer ptr
	cout<<"Pointer to a pointer:"<<endl;
	cout<<pPtr<<endl; //outputting as is, will output the value stored in pPtr(mem address of ptr)
	cout<<*pPtr<<endl; //dereferenced once, will get the value of what it points at (ptr's value, which is the mem
						//address of x)
	cout<<**pPtr<<endl; //derefenced twice, means it does the above, but then does a dereference from that point. So
						//we get the value of what ptr is pointing to (x's value, which is 23)

	//so if we want to change x's value through pPtr, we deref twice (the number of **'s when we first declared it)
	**pPtr = **pPtr + 10;
	cout<<x<<endl;
	
	//CHARACTER STUFF
	char *word = "Hello!"; //mem addresses found for each individual character, plus an extra '\0' character to
			//signify end of sentance/word. Then the mem address of the first character (H) is stored in our pointer

	cout<<word<<endl; //should output a set of characters starting at where word is pointing(H) until it hits a \0

	cout<<word[0]<<endl; //arrays and pointers are somewhat interchangeable
	cout<<word[1]<<endl; //[1] means: how many of this data type should I move up. In this case, 1 character at a time

	char *index = word; //copies the memory location word is storing into index pointer
	while(*index != '\0')
	{
		cout<<*index<<" ";
		index++; //moves my pointer up to point to the next letter (e.g W to E)
	}
	cout<<endl;


	cout<<sizeof(word)/sizeof(word[0])<<endl;

	char *cArr[3] = {"Super Man", "Bat Man", "Wonder Woman"}; //an array of char pointers
	cout<<cArr[0]<<endl; //outputs characters from slot 0
	cout<<cArr[1]<<endl; //etc
	cout<<cArr[0][0]<<endl; //outputs the first word's first letter (S)


	system("pause");
}