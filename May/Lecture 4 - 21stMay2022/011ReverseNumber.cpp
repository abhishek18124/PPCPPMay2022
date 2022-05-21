#include<iostream>

using namespace std;

int main() {

	int num;
	cout << "Enter a positive number : ";
	cin >> num;

	int reversed = 0; // to store the reversed number

	while(num > 0) {
		int digit = num%10;
		reversed = reversed*10 + digit;
		num = num/10;
	}

	cout << "Reversed num : " << reversed << endl;



	return 0;
}