#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main() {

	int arr[] = {1, 4, 0, 1, 2, 3, 5};
	int n = sizeof(arr) / sizeof(int);
	int k = 4;

	int i = 0;     // to store the start of the window
	int j = 0;     // to store the end of the window
	deque<int> deq; // to store numbers of interest in a window
	vector<int> v; // to store the maximum element for each k-sized window
	
	// find the maximum element in the 1st window
	
	while(j < k) {
		while(!deq.empty() && deq.back() < arr[j]) deq.pop_back();
		deq.push_back(arr[j]);
		j++;
	}

	v.push_back(deq.front());
	
	// find the maximum element in the remaining windows
	
	while(j < n) {

		// slide the window
		if(deq.front() == arr[i]) deq.pop_front();
		i++;
		while(!deq.empty() && deq.back() < arr[j]) deq.pop_back();
		deq.push_back(arr[j]);
		
		v.push_back(deq.front());
		
		j++;

	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	return 0;
}

