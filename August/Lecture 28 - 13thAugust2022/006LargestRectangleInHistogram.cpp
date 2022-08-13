#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	stack<pair<int, int>> s1;
	vector<int> nsl_idx;
	for(int i=0; i<n; i++) {
		while(!s1.empty() and s1.top().first >= h[i]) {
			s1.pop();
		}

		if(s1.empty()) {
			nsl_idx.push_back(-1);
		} else {
			nsl_idx.push_back(s1.top().second);
		}

		s1.push({h[i], i});
	}

	// for(int i=0; i<n; i++) {
	// 	cout << nsl_idx[i] << " ";
	// }

	// cout << endl;

	stack<pair<int, int>> s2;
	vector<int> nsr_idx;

	for(int i=n-1; i>=0; i--) {
		while(!s2.empty() && s2.top().first >= h[i]) {
			s2.pop();
		}

		if(s2.empty()) {
			nsr_idx.push_back(n);
		} else {
			nsr_idx.push_back(s2.top().second);
		}

		s2.push({h[i], i});
	}

	// for(int i=0; i<n; i++) {
	// 	cout << nsr_idx[i] << " ";
	// }

	// cout << endl;

	reverse(nsr_idx.begin(), nsr_idx.end());

	int max_area = 0;
	for(int i=0; i<n; i++) {
		int w_i = nsr_idx[i] - nsl_idx[i] - 1;
		int a_i = h[i] * w_i;
		max_area = max(max_area, a_i);
	}

	cout << max_area << endl;


	return 0;
}