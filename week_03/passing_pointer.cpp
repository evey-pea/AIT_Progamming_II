#include <iostream>
using namespace std;

int increment(int *);

int main(){
	int number = 10;
	cout << increment(&number) << endl;
	cout << number;
}

int increment(int *num){
	*num += 10;
	return(*num);
}