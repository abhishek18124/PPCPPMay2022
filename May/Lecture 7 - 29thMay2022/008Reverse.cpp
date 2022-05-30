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

	int i = 0;
	int j = n-1;

	while(i < j) {
		swap(A[i], A[j]);
		i++;
		j--;
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
	
	return 0;
}