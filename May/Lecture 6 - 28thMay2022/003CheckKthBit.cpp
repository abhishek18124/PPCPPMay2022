#include<iostream>

using namespace std;

int main() {

	int n = 36;
	int k = 3;
	// cout << (1<<2) << endl;

	// cout << ((n>>k)&1) << endl;

	// if((n>>k)&1) {
	// 	cout << k << "th bit is set" << endl;
	// } else {
	// 	cout << k << "th bit is not set" << endl;
	// }

	if((1<<k)&n) {
		cout << k << "th bit is set" << endl;
	} else {
		cout << k << "th bit is not set" << endl;
	}


	return 0;
}