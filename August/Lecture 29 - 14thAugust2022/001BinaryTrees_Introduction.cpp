#include<iostream>

using namespace std;

class node {

	public :

		int data;
		node* left;
		node* right;

		node(int data) {
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}

};

void printPreOrder(node* root) {

	// base case
	if(!root) { // root == NULL
		cout << "-1 ";
		return;
	}

	// recursive case

	// 1. process the data of the root node
	cout << root->data << " ";

	// 2. ask your friend to print the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. ask your friend to print he preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}

void printInOrder(node* root) {

	// base case
	if(!root) { // root == NULL
		cout << "-1 ";
		return;
	}

	// recursive case

	// 1. ask your friend to print the inOrder traversal of the leftSubtree
	printInOrder(root->left);

	// 2. process the data of the root node
	cout << root->data << " ";

	// 3. ask your friend to print he inOrder traversal of the rightSubtree
	printInOrder(root->right);

}

void printPostOrder(node* root) {

	// base case
	if(!root) { // root == NULL
		cout << "-1 ";
		return;
	}

	// recursive case

	// 1. ask your friend to print the postOrder traversal of the leftSubtree
	printPostOrder(root->left);

	// 2. ask your friend to print he postOrder traversal of the rightSubtree
	printPostOrder(root->right);

	// 3. process the data of the root node
	cout << root->data << " ";


}

int main() {

	node* root = NULL;

	root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);
	root->left->right->left = new node(70);

	printPreOrder(root);

	cout << endl;

	printInOrder(root);

	cout << endl;

	printPostOrder(root);

	cout << endl;
	
	return 0;
}