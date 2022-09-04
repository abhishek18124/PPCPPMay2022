#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

bool checkDuplicate(vector<int> v) {

	// unordered_map<int, int> freqMap;
	// for(int i=0; i<v.size(); i++) {
	// 	freqMap[v[i]]++;
	// }

	// for(pair<int, int> p : freqMap) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	// for(pair<int, int> p : freqMap) {
	// 	if(p.second > 1) {
	// 		return true;
	// 	}
	// }

	unordered_set<int> seen;

	for(int i=0; i<v.size(); i++) {
		if(seen.find(v[i]) != seen.end()) {
			// you've found a duplicate
			return true;
		}
		seen.insert(v[i]);
	}

	return false;

}

int main() {

	vector<int> v = {1, 2, 3, 1};

	checkDuplicate(v) ? cout << "duplicate found!" << endl :
	                    cout << "duplicate not found!" << endl;
	
	return 0;
}