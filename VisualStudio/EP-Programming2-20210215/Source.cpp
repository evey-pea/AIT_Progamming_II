#include <iostream>

using namespace std;

int main() {

	int x = 6;

	int* p1;

	p1 = &x;

	x = x + 51;

	*p1 = *p1 + 10;

	return 0;
}
