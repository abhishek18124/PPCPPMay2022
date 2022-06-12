#include<iostream>

using namespace std;

int main() {

	// int x = 516;
	// cout << &x << endl;
	// char* chptr = (char *)&x;
	// cout << chptr << endl;

	char ch = 'A';
	cout << &ch << endl;
	int* xptr = (int*) &ch;
	cout << xptr << endl;

	return 0;
}