#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {
		// in the ith row, print (n-i+1) characters
		// in the inc. order starting with 'A'
		char ch = 'A';
		for(int j=1; j<=n-i+1; j++, ch++) {
			cout << ch << " ";
			// ch++;
		}

		// followed by (n-i+1) characters in the dec.
		// order starting with the last print char.

		ch--;

		for(int j=1; j<=n-i+1; j++, ch--) {
			cout << ch << " ";
			// ch--;
		}

		cout << '\n';
	}

	return 0;
}