/* 
	
	Implementation of the disjoint set union data structure 
	by using union by rank and path compression heuristics.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents
	unordered_map<T, T> rankMap;   // to store a mapping b/w vertices & their ranks i.e. sizes
	
	public :

	void createSet(T x) {
		parentMap[x] = x;
		rankMap[x] = 1;
	}

	T findSet(T x) {
		// base case
		if(parentMap[x] == x) {
			// x is the leader
			return x;
		}

		// recursive case
		return parentMap[x] = findSet(parentMap[x]); // path compression
	}

	void unionSet(T x, T y) {
		
		T p_x = findSet(x); // leader of x
		T p_y = findSet(y); // leader of y

		if(p_x != p_y) {
			// perform the union
			if(rankMap[p_x] > rankMap[p_y]) {
				// connect p_y to p_x
				parentMap[p_y] = p_x;
				rankMap[p_x] += rankMap[p_y];
			} else {
				// connect p_x to p_y
				parentMap[p_x] = p_y;
				rankMap[p_y] += rankMap[p_x];
			}
		}

	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1); // {1}
	ds.createSet(2); // {2}
	ds.createSet(3); // {3}
	ds.createSet(4); // {4}

	ds.unionSet(1, 2); // {1, 2}, {3}, {4}
	ds.unionSet(2, 3); // {1, 2, 3}, {4}

	cout << ds.findSet(2) << endl;

	ds.unionSet(3, 4); // {1, 2, 3, 4}

	cout << ds.findSet(4) << endl;

	return 0;
}
