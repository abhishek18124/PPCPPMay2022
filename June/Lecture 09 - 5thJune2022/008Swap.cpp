#include<iostream>

using namespace std;

void mySwap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;

}

int main() {

	int a = 10;
	int b = 20;

	cout << "Before swap a : " << a
	     << " b : " << b << endl;

	mySwap(a, b);

	cout << "After swap a : " << a
	     << " b : " << b << endl;


}