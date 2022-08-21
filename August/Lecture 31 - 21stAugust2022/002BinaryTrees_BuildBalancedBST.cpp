/*

	Given a inOrder traversal of a BST, design an algorithm to build a balanced BST.

*/

#include<iostream>
#include<queue>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->data << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}
}

node* buildBBST(int* A, int s, int e) {

	// base case
	if(s > e) {
		return NULL;
	}

	// recursive case

	// 1. construct the root node with the data present in the middle of the array
	int m = s+(e-s)/2;
	node* root = new node(A[m]);

	// 2. recursively build the leftSubtree using the sorted subarray A[s...m-1]
	root->left = buildBBST(A, s, m-1);

	// 3. recursively build the rightSubtree using the sorted subarray A[m+1...e]
	root->right = buildBBST(A, m+1, e);

	return root;
}


int main() {

	int A[] = {3, 5, 7, 10, 13, 15, 17};
	int n = sizeof(A) / sizeof(int);

	node* root = buildBBST(A, 0, n-1);

	printLevelOrder(root);

	cout << endl;
	
	return 0;
}