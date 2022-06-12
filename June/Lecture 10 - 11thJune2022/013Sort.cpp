#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	sort(arr, arr+n);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	reverse(arr, arr+n);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}