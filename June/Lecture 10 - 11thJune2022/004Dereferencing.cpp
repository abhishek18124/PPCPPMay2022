#include<iostream>

using namespace std;

int main() {

	int x = 516;
	// int* xptr = &x;

	// cout << xptr << endl;
	// cout << *xptr << endl;

	char* chptr = (char *)&x;
	cout << (int)*chptr << endl;

	double* dptr = (double*) &x;
	cout << *dptr << endl;

	return 0;
}