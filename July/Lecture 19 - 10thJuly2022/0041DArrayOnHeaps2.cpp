#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int* a = new int[n];

	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}