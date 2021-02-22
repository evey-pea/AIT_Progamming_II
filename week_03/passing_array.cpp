#include <iostream>
using namespace std;
double average(double [], int);
int main() {
	double values[4] = { 1.0,2.0,8.0,6.7 };
	cout << average(values,4) << endl;
}
double average(double vals[], int size){
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += vals[i];
		
		// output the addition to the console
		cout << "vals[" << i << "]: " << vals[i];
		cout << " sum: " << sum << endl;
	}
	return(sum / size);
}