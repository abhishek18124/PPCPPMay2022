#include<iostream>

using namespace std;

int main() {

	int A[100];

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	int t;
	cout << "Enter the target : ";
	cin >> t;

	int i;

	for(i=0; i<n; i++) {
		if(A[i] == t) {
			cout << t << " found at index " << i << endl;
			break;  
		}
	}

	if(i == n) {
		cout << t << " not found!" << endl;
	}

	return 0;
}