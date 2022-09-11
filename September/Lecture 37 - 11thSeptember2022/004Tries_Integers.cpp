/*

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

*/

#include<iostream>

using namespace std;

class node {

public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};


class trie {
	
	node* root;

	public :

		trie() {
			root = new node();
		}

		void insert(int n) {
			node* cur = root;
			for(int i=31; i>=0; i--) {
				int bit = (n>>i)&1;
				if(bit) {
					// ith bit of 'n' is set, check if cur node has a right child
					if(cur->right == NULL) {
						cur->right = new node();
					}
					cur = cur->right;
				} else {
					// ith bit of 'n' is not set, check if the cur node has a left child
					if(cur->left == NULL) {
						cur->left = new node();
					}
					cur = cur->left;
				}
			}
		}

		bool search(int n) {
			node* cur = root;
			for(int i=31; i>=0; i--) {
				int bit = (n>>i)&1;
				if(bit) {
					// ith bit is set, check if cur has right child
					if(cur->right == NULL) {
						return false;
					}
					cur = cur->right;
				} else {
					// ith bit is unset, check if cur has a left child
					if(cur->left == NULL) {
						return false;
					}
					cur = cur->left;
				}
			}
			return true;
		}
};

int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	trie t;
	for(int i=0; i<n; i++) {
		t.insert(arr[i]);
	}

	int brr[] = {1, 2, 5, 10, 25, 0};
	int m = sizeof(brr) / sizeof(int);

	for(int i=0; i<m; i++) {
    	t.search(brr[i]) ? cout << brr[i] << " is present" << endl :
    	                   cout << brr[i] << " is absent" << endl;
    }

    cout << endl;

	return 0;
}