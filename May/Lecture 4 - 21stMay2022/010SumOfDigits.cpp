#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative number : ";
	cin >> n;

	int sum = 0; // to track the sum of digits

	while(n > 0) {
		int digit = n % 10;
		sum = sum + digit;
		n = n/10;
	}

	cout << "The sum of digits : " << sum << endl;


	return 0;
}