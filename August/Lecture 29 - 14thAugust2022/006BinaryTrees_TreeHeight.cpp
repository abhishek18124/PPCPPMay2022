/*

given the pre-order traversal of a binary tree, design a recursive algorithm to 
compute its height
	 
	  height of a binary tree is equal to the height of the root node which is 
	  equal to the length of the longest path from the root node to a leaf node.

Example : Input  :10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output :3

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

int computeHeight(node* root) {

	// base case
	if(!root) {
		// compute height of an empty tree
		return -1;
	}

	// recursive case

	// 1. ask your friend to compute the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend to compute the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);
}

int main() {

	node* root = buildTree();

	cout << computeHeight(root) << endl;

	return 0;
}