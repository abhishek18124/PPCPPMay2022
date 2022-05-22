#include<iostream>

using namespace std;

int main() {

	int no;
	cout << "Enter a positive number : ";
	cin >> no;

	int i;

	for(i=2; i<=no-1; i++) {
		if(no%i == 0) {
			// given no. is not a prime no
			break;
		}
	}

	// if(i == no) {
	// 	cout << no << " is prime" << endl;
	// } else {
	// 	cout << no << " is not prime" << endl;
	// }

	i == no ? cout << no << " is prime" << endl :
	          cout << no << " is not prime " << endl;
	
	return 0;
}