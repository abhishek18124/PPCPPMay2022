/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

#define ll long long

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

bool checkBST(node* root, ll lo, ll hi) {

	// base case
	if(!root) {
		// empty tree is a BST 
		return true;
	}

	// recursive case

	return (root->data > lo and root->data < hi) &&
 	        checkBST(root->left, lo, root->data)  &&
	        checkBST(root->right, root->data, hi);

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	ll lo = (ll)INT_MIN-1;
	ll hi = (ll)INT_MAX+1;

	checkBST(root, lo, hi) ? cout << "true" << endl :
	                         cout << "false" << endl;

	return 0;
}