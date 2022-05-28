#include<iostream>

using namespace std;

int main() {

	int n = 4;
	
	// 1st Part

	for(int i=1; i<=n; i++) {
		// in the ith row, print (n-i) spaces
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		// followed by 2*i-1 stars
		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}

		cout << endl;
	}

	// 2nd Part

	for(int i=1; i<n; i++) {
		// in the ith row, print i spaces
		for(int j=1; j<=i; j++) {
			cout << " ";
		}

		// followed by 2*(n-i)-1 stars
		for(int j=1; j<=2*(n-i)-1; j++) {
			cout << "*";
		}

		cout << endl;
	}


	return 0;
}