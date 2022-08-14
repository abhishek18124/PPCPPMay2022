/*

Given the pre-order traversal of a binary tree, design a recursive algorithm to 
compute the sum of nodes inside the binary tree

Example : Input  :10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 280
*/

#include<iostream>

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


node* buildTree() {

	int data;
	cin >> data;

	// base case

	if(data == -1) {
		// construct an empty tree and return pointer to its root node
		return NULL;
	}

	// recursive case

	// 1. construct the root data using the first value of the given preOrder traversal

	node* root = new node(data);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

int computeSumOfNodes(node* root) {

	// base case
	if(!root) { // root == NULL
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the sum of nodes in the leftSubtree
	int X = computeSumOfNodes(root->left);

	// 2. ask your friend to compute the sum of nodes in the rightSubtree
	int Y = computeSumOfNodes(root->right);

	return X+Y+root->data;

}

int main() {

	node* root = buildTree();

	cout << computeSumOfNodes(root) << endl;

	return 0;
}