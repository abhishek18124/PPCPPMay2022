#include<iostream>

using namespace std;

int main() {

	int no;
	cout << "Enter a positive number : ";
	cin >> no;

	int i = 2;
	while(i <= no-1) {
		if(no % i == 0) {
			cout << no << " is not prime" << endl;
			return 0;
		}
		i = i+1;
	}

	cout << no << " is prime " << endl;

	return 0;
}