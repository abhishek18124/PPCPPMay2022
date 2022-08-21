/*

	Given a BST and a key, design an algorithm to search for the key in the BST.	

	Output "true" is key is found otherwise output "false".

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

bool search(node* root, int key) {

	// base case
	if(!root) { // root == NULL
		return false;
	}

	// recursive case

	if(root->data == key) {
		return true;
	} else if(key < root->data) {
		// search for the key in the leftSubtree which itself is a BST
		return search(root->left, key);
	} else {
		// search for the key in the rightSubtree which itself is a BST
		return search(root->right, key);
	}

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	int key = 14;

	search(root, key) ? cout << "true" << endl :
	                    cout << "false" << endl;
	
	return 0;
}


