#include<iostream>

using namespace std;

int main() {

	int* a = new int[5];

	*a = 10;
	*(a+1) = 20;
	*(a+2) = 30;
	*(a+3) = 40;
	*(a+4) = 50;

	// a[0] = 10;
	// a[1] = 20;
	// a[2] = 30;
	// a[3] = 40;
	// a[4] = 50;

	for(int i=0; i<5; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	delete[] a;

	return 0;
}