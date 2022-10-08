/*

Snake and Ladders Game

*/

#include<iostream>
#include<map>
#include<list>
#include<unordered_set>
#include<queue>

using namespace std;

template <typename T>
class graph {
	map<T, list<T>> neighbourMap; // to store the graph representation

	public :

		void addEdge(T u, T v) {
			// insert a directed edge between vertex 'u' and 'v'
			neighbourMap[u].push_back(v);
		}

		void print() {
			for(pair<T, list<T>> vertex : neighbourMap) {
				T vertexLabel = vertex.first;
				list<T> neighbourList = vertex.second;
				cout << vertexLabel << " : ";
				for(T neighbour : neighbourList) {
					cout << neighbour << " ";
				}
				cout << endl;
			}
			cout << endl;
		}

		int bfs(T s, T d) {
			
			map<T, int> distMap; // to store the mapping between vertices &
			                     // their shortest dist from the src vertex
			distMap[s] = 0;

			map<T, T> parentMap; // to store the mapping between vertices &
			                     // their parents

			parentMap[s] = s;

			unordered_set<T> visited; // to keep track of visited vertices
			queue<T> q; // to keep track of visited & un-explored vertices

			// mark 's' as visited
			visited.insert(s);
			q.push(s);

			while(!q.empty()) {
				T front = q.front();
				q.pop();

				// explore 'front'

				list<T> neighbourList = neighbourMap[front];
				for(T neighbour : neighbourList) {
					if(visited.find(neighbour) == visited.end()) {
						// neighbour is not yet visited
						visited.insert(neighbour);
						q.push(neighbour);
						distMap[neighbour] = distMap[front]+1;
						parentMap[neighbour] = front;
					}
				}
				
			}

			T temp = d;
			while(parentMap[temp] != temp) {
				cout << temp << "<-";
				temp = parentMap[temp];
			}
			cout << temp << endl;
			
			return distMap[d];
		}

};

int minDiceThrows(int n, 
	              vector<pair<int,int>> snakes, 
	              vector<pair<int,int>> ladders) {
	
	int weightMap[n+1];
	memset(weightMap, 0, sizeof(weightMap));

	for(pair<int, int> snakePos : snakes) {
		int snakeHeadPos = snakePos.first;
		int snakeTailPos = snakePos.second;
		weightMap[snakeHeadPos] = snakeTailPos-snakeHeadPos; // -ve weight
	}

	for(pair<int, int> ladderPos : ladders) {
		int ladderStartPos = ladderPos.first;
		int ladderEndPos = ladderPos.second;
		weightMap[ladderStartPos] = ladderEndPos-ladderStartPos; // +ve weight 
	}

	graph<int> g;

	for(int u=1; u<n; u++) {
		for(int d=1; d<=6; d++) {
			int v = u+d;
			if(v <= n) {
				v += weightMap[v];
				g.addEdge(u, v);	
			}
		}
	}

	return g.bfs(1, n);

}

int main() {

	int n = 36;

	vector<pair<int, int>> snakes  = {{17, 4}, 
									  {20, 6}, 
									  {24, 16}, 
									  {32, 30}, 
									  {34, 12}};

	vector<pair<int, int>> ladders = {{2, 15}, 
	                                  {5, 7}, 
	                                  {9, 27}, 
	                                  {18, 29}, 
	                                  {25, 35}};
	
	cout << minDiceThrows(n, snakes, ladders) << endl;

	return 0;
}