#include<iostream>
#include<vector>

using namespace std;

void findDuplicates(vector<int> v) {

	int n = v.size();

	for(int i=0; i<n; i++) {
		int el = v[i]%n;
		v[el] += n;
	}

	
	for(int i=0; i<n; i++) {
		if(v[i]/n > 1) {
			cout << i << " ";
		}
	}

	cout << endl;

} 

int main() {

	vector<int> v = {1, 0, 1, 2, 2};

	findDuplicates(v);
	
	return 0;
}