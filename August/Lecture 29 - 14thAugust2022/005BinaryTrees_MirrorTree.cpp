/*

given the pre-order traversal of a binary tree, design a recursive 
algorithm to mirror it.

Example : Input  : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 10 30 60 -1 -1 -1 20 50 -1 70 -1 -1 40 -1 -1
                  
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


void printPreOrder(node* root) {

	// base case
	if(!root) { // root == NULL
		cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. process the root node
	cout << root->data << " ";

	// 2. do the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. do the preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}

node* mirrorTree(node* root) {

	// base case
	if(!root) { // root == NULL
		return root;
	}

	// recursive case

	// 3. swap the leftSubtree with rightSubtree
	swap(root->left, root->right);

	// 1. ask your friend to mirror the leftSubtree
	root->left = mirrorTree(root->left);

	// 2. ask your friend to mirror the rightSubtree
	root->right = mirrorTree(root->right);

	return root;
}

int main() {

	node* root = buildTree();
	root = mirrorTree(root);
	printPreOrder(root);

	return 0;
}