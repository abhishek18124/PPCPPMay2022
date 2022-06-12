#include<iostream>

using namespace std;

int countPairsEfficient(int* arr, int n, int t) {
	int count = 0;
		
	int i = 0;
	int j = n-1;

	while(i < j) {
		int sum = arr[i]+arr[j];
		if(sum == t) {
			count++;
			i++;
			j--;
		} else if(sum > t) {
			j--;
		} else {
			i++;
		}
	}

	return count;
}

int main() {	

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);
	int t = 6;

	cout << countPairsEfficient(arr, n, t) << endl;

	return 0;
}