#include<iostream>

using namespace std;

int main() {

	int num;
	cout << "Enter a non-negative number : ";
	cin >> num;

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	if(a == num || b == num) {
		cout << num << " is part of fibonacci seq." << endl;
		return 0;
	}

	while(true) {

		int c = a + b;
		if(c == num) {
			cout << num << " is part of fibonacci seq." << endl; 
			return 0;
		}

		if(c > num) {
			cout << num << " is not part of fibonacci seq." << endl;
			return 0;
		}

		a = b;
		b = c;

	}

	return 0;
}