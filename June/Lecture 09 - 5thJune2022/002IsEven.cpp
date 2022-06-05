#include<iostream>

using namespace std;

void isEven(int n) {

	if(n%2 == 0) {
		cout << n << " is an even number" << endl;
	} else {
		cout << n << " is an odd number" << endl;
	}

	return; // optional

}

int main() {

	cout << "inside main() : before isEven()" << endl;

	isEven(12);

	cout << "inside main() : after isEven()" << endl;

	return 0;
}