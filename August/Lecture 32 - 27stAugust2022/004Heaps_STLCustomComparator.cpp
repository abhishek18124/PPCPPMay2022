/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class myComparator {

	public :

		// return true when swap is needed

		// think of 'b' as the new value inserted into the heap
	    // and think of 'a' as its parent

		bool operator()(int a, int b) {
			// return b < a; // for minHeap
			return b > a; // for maxHeap
		}

};

int main() {

	priority_queue<int, vector<int>, myComparator> m; 
	
	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}