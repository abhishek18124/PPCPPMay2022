#include<iostream>

using namespace std;

bool isPrime(int num) {
	for(int i=2; i<num; i++) {
		if(num%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	isPrime(5) ? cout << "true" << endl :
	             cout << "false" << endl;

	return 0;
}