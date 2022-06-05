#include<iostream>

using namespace std;

bool isPrime(int); // function declaration

void printPrimes(int n) {

	for(int num=2; num<=n; num++) {
		if(isPrime(num)) {
			cout << num << " ";
		}
	}

	cout << endl;

}

bool isPrime(int num) {
	for(int i=2; i<num; i++) {
		if(num%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	printPrimes(10);

	return 0;
}

