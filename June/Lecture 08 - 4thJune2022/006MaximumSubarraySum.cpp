#include<iostream>
#include<climits>

using namespace std;

int main() {

	int arr[] = {-1, -2, -3, -4, -5};
	int n = sizeof(arr) / sizeof(int);

	int maxSum = INT_MIN;

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			int sum = 0;
			for(int k=i; k<=j; k++) {
				sum += arr[k];
			}
			if(sum > maxSum) {
				maxSum = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum : " << maxSum << endl;
		

	return 0;

}