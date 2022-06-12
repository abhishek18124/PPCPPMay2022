#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int* xptr = &x;
	int** xxptr = &xptr;

	cout << x << endl;
	cout << *xptr << endl;
	cout << **xxptr << endl;

	return 0;
}