#include<iostream>
#include<set>

using namespace std;

int main() {

	set<int> s = {10, 0, 1, 2, 1};
	// multiset<int> s = {10, 0, 1, 2, 1};

	// s.insert(40);
	// s.insert(30);
	// s.insert(20);
	// s.insert(10);
	// s.insert(0);

	cout << "size : " << s.size() << endl;

	cout << "count(10) : " << s.count(10) << endl;
	cout << "count(100) : " << s.count(100) << endl;

	if(s.find(10) != s.end()) {
		cout << "10 is present!" << endl;
	} else {
		cout << "10 is absent!" << endl;
	}

	// for(int x : s) {
	// 	cout << x << " ";
	// }

	for(auto x : s) {
		cout << x << " ";
	}

	cout << endl;

	for(auto it=s.begin(), end=s.end(); it != end; it++) {
		cout << *it << " ";
	}

	cout << endl;

	s.erase(10);

	cout << "size : " << s.size() << endl;

	for(auto x : s) {
		cout << x << " ";
	}

	cout << endl;

	s.clear();

	cout << "size : " << s.size() << endl;

	return 0;
}