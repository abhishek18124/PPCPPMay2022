#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int p;
	cout << "Enter the value of p : ";
	cin >> p;

	float sqrt = 0;
	float inc = 1;

	for(int i=0; i<=p; i++) {

		while(sqrt*sqrt <= n) {
			sqrt = sqrt + inc;
		}

		sqrt = sqrt - inc;
		inc = inc/10;

	}

	cout << "sqrt(" << n << ") : " << sqrt << endl;

	

	return 0;
}