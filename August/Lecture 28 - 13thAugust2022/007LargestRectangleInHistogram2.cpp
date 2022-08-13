#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	deque<pair<int, int>> s;
	vector<int> nsl_idx;
	for(int i=0; i<n; i++) {
		while(!s.empty() and s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			nsl_idx.push_back(-1);
		} else {
			nsl_idx.push_back(s.back().second);
		}

		s.push_back({h[i], i});
	}

	// for(int i=0; i<n; i++) {
	// 	cout << nsl_idx[i] << " ";
	// }

	// cout << endl;

	s.clear();

	vector<int> nsr_idx;

	for(int i=n-1; i>=0; i--) {
		while(!s.empty() && s.back().first >= h[i]) {
			s.pop_back();
		}

		if(s.empty()) {
			nsr_idx.push_back(n);
		} else {
			nsr_idx.push_back(s.back().second);
		}

		s.push_back({h[i], i});
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