#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int* xptr = &x;

	cout << xptr << endl;
	cout << xptr+1 << endl;
	cout << xptr+2 << endl;


	return 0;
}