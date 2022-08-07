#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	stack<int> s;
	vector<int> v;

	for(int i=n-1; i>=0; i--) {

		while(!s.empty() && s.top() <= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			v.push_back(-1);
			// cout << -1 << " ";
		} else {
			v.push_back(s.top());
			// cout << s.top() << " ";
		}

		s.push(A[i]);

	}

	reverse(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}