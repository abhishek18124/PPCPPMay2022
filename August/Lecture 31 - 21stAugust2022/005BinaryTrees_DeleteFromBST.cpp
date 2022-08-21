/*

	Given a BST and a key,  design an algorithm to delete 
	the node with the given key, if present, from the BST.

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

void printInOrder(node* root) {
	if(root == NULL) {
		return;
	}

	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}

node* findMaximum(node* root) {
	if(!root) {
		return NULL;
	}

	while(root->right != NULL) {
		root = root->right;
	}

	return root;
}

node* findMinimum(node* root) {
	if(!root) {
		return NULL;
	}

	while(root->left != NULL) {
		root = root->left;
	}

	return root;
}

node* deleteFromBST(node* root, int key) {

	// base case
	if(!root) { // root == NULL
		// tree is empty
		return root;
	}

	// recursive case

	if(key < root->data) {
		// delete the key from the leftSubtree -> ask your friend
		root->left = deleteFromBST(root->left, key);
	} else if(key > root->data) {
		// delete the key from the rightSubtree -> ask your friend
		root->right = deleteFromBST(root->right, key);
	} else {
		// delete the root node
		if(!root->left and !root->right) {
			// delete the leaf node
			delete root;
			root = NULL;
		} else if(!root->left and root->right) {
			// delete a node with a right child
			node* temp = root->right;
			delete root;
			root = temp;
		} else if(root->left and !root->right) {
			// delete a node with a left child
			node* temp = root->left;
			delete root;
			root = temp;
		} else {
			// delete a node with two child nodes			
			node* temp = findMaximum(root->left);
			swap(root->data, temp->data);
			root->left = deleteFromBST(root->left, key);

			// node* temp = findMinimum(root->right);
			// swap(root->data, temp->data);
			// root->right = deleteFromBST(root->right, key);
		}
	}

	return root;

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left = new node(3);
	root->left->right= new node(7);
	root->left->right->left = new node(6);
	root->left->right->right= new node(9);
	root->left->right->right->left = new node(8);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	printInOrder(root);
	cout << endl;

	printLevelOrder(root);
	cout << endl;

	int key = 3;

	root = deleteFromBST(root, key);

	printInOrder(root);
	cout << endl;

	printLevelOrder(root);
	cout << endl;

	key = 5;

	root = deleteFromBST(root, key);

	printInOrder(root);
	cout << endl;

	printLevelOrder(root);
	cout << endl;

	key = 10;

	root = deleteFromBST(root, key);

	printInOrder(root);
	cout << endl;

	printLevelOrder(root);
	cout << endl;
	
	return 0;
}