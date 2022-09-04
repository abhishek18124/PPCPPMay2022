
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	int arr[] = {10, 20, 10, 30, 10, 20, 10, 40, 40};
	int n = sizeof(arr) / sizeof(int);
	int k = 2;

	unordered_map<int, int> freqMap;
	for(int i=0; i<n; i++) {
		freqMap[arr[i]]++;
	}

	vector<vector<int>> v(n+1);
	for(pair<int, int> p : freqMap) {
		v[p.second].push_back(p.first);
	}

	bool flag = false; // abhi tak k most frequent elements nahi mile

	for(int i=n; i>=0; i--) {
		vector<int> temp = v[i];
		for(int j=0; j<temp.size(); j++) {
			cout << temp[j] << " ";
			k--;
			if(k == 0) {
				flag = true;
				break;
			}
		}

		if(flag) {
			// k most frequen elements mil gye ab rukh jao
			break;
		}
	}

	return 0;
}

