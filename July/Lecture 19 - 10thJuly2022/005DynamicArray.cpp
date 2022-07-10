#include<iostream>

using namespace std;

int* resize(int* a, int c) {
	cout << "Incresing capacity from " << c*4 << "B to " << 2*c*4 << "B" << endl;
	int* b = new int[2*c];
	for(int i=0; i<c; i++) {
		b[i] = a[i];
	}
	delete[] a;
	return b;
}

int main() {

	int* a = new int[1];
	int c = 1; // capacity
	int i = 0; // size

	int x; // to read an integer value from the user

	while(true) {

		cout << ">> ";
		cin >> x;

		if(x == -1) {
			break;
		}

		if(i == c) {
			// you've exhaused the capacity of the array
			a = resize(a, c);
			c *= 2;
		}

		a[i] = x;
		i++;

	}

	for(int j=0; j<i; j++) {
		cout << a[j] << " ";
	}

	cout << endl;


}