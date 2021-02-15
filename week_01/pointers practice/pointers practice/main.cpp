#include <iostream>

using namespace std;

void main(){
	int x = 30;
	int*ptr;

	//& reference symbol: get me the memory address of varaible
	ptr = &x; //make ptr point to the memory address of x

	cout<<ptr<<endl; //outputs value in ptr (x's address)

	cout<<*ptr<<endl; //de-referenced, will get value of what its pointing at

	//if de-referenced, we can treat it like a normal int
	*ptr = *ptr+6; //or *ptr += 6; for short

	//since we're pointing at x, we're updating x's value
	cout<<x<<endl;

	int **pPtr; //is a pointer to a pointer of type int pointer

	pPtr = &ptr; //make it point to ptr's memory location

	cout<<pPtr<<endl; //outputs the memory address of ptr
	cout<<*pPtr<<endl; //dereferenced once, get value in ptr (memory address of x)
	cout<<**pPtr<<endl; //dereferenced twice, get value of what ptr points to (x's value)

	**pPtr = **pPtr + 6;//again, tweak x's values through pointer nonsense
	cout<<x<<endl;

	system("pause");
}