// constrains : N <= 100

#include<iostream>

using namespace std;

int main() {

	int A[] = {1, 6, 5, 2, 4, 3};
	int N = sizeof(A) / sizeof(int);

	int freq[100] = {};
	// int freq[N];
	// memset(freq, 0, N*sizeof(int));

	freq[0] = 1;
	int cs = 0; // to keep track of cumulative sum

	for(int i=0; i<N; i++) {
		cs += A[i];
		freq[((cs%N)+N)%N]++;
	}

	// for(int i=0; i<N; i++) {
	// 	cout << freq[i] << " ";
	// }

	// cout << endl;

	int count = 0;
	for(int i=0; i<N; i++) {
		int x = freq[i];
		if(x >= 2) {
			count += x*(x-1)/2;
		}
	}

	cout << "Num. of good subarrays  : " << count << endl;





	return 0;
}