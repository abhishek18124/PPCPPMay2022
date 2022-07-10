#include<iostream>

using namespace std;

int main() {

	int* xptr = new int;

	*xptr = 500;

	cout << *xptr << endl;

	delete xptr;

	xptr = new int; 

	return 0;
}