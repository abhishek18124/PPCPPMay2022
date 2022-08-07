#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> stockSpan(int* A, int n) {

	stack<pair<int, int>> s; // <element_value, element_idx>
	vector<int> v;

	for(int i=0; i<n; i++) {

		// find the span of stock for the ith day

		while(!s.empty() && s.top().first <= A[i]) {
			s.pop();
		}

		// int j;

		// if(s.empty()) {
		// 	j = -1;
		// } else {
		// 	j = s.top().second;
		// }

		int j = s.empty() ? -1 : s.top().second;

		v.push_back(i-j);

		s.push({A[i], i});

	}

	return v;

}

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	vector<int> span = stockSpan(A, n);

	for(int i=0; i<span.size(); i++) {
		cout << span[i] << " ";
	}

	cout << endl;

	return 0;
}