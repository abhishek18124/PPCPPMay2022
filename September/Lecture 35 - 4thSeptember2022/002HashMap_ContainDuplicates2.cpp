#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool checkDuplicate(vector<int> v, int k) {

	unordered_map<int, int> indexMap;
	for(int i=0; i<v.size(); i++) {
		if(indexMap.find(v[i]) != indexMap.end()) {
			// you've seen v[i] before

			if(abs(i-indexMap[v[i]]) <= k)  {
				return true;
			}

		}

		indexMap[v[i]] = i;
	}

	return false;

}

int main() {	

	int k = 2;

	vector<int> v = {1, 2, 1, 3, 1, 2, 3};

	checkDuplicate(v, k) ? cout << "true" << endl :
	                    cout << "false" << endl;
	
	return 0;
}