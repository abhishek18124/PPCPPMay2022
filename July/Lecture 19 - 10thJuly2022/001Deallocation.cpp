#include<iostream>

using namespace std;

int* f() {

	// int x = 10;

	// return &x;

	int* xptr = new int;
	*xptr = 10;

	return xptr;
}

int main() {

	int* xptr = f();

	return 0;
}