#include<iostream>

using namespace std;

int sumOfArray(int* arr, int n) {
	cout << sizeof(arr) << "B" << endl;
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i]; // *(arr+i);
	}
	return sum;
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	cout << sizeof(arr) << "B" << endl;

	cout << sumOfArray(arr, n) << endl; // sumOfArray(&arr[0], n);
	
	return 0;

}