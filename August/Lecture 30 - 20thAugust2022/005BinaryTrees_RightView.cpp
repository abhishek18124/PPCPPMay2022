/*

given the pre-order traversal of a binary tree, output its right view.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 30 60 70
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

node* buildTree() {

	// 1. read the data of the root node
	int data;
	cin >> data;

	if(data == -1) {
		// construct an empty tree and return the pointer to its root
		return NULL;
	}

	// 2. construct the root node
	node* root = new node(data);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

void printRightView(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		if(!front) { // front == NULL
			if(!q.empty()) {
				q.push(NULL);
			}
		} else { // front != NULL
			if(!q.front()) { // new front of the queue is NULL
				cout << front->data << " ";
			}

			if(front->left) {
				q.push(front->left);
			}
			if(front->right) {
				q.push(front->right);
			}
		}
	}

}


int max_level = -1; // maximum level upto which we have printed the right-most node

void printRightViewRecursive(node* root, int level) {

	// base case
	if(!root) {
		return;
	}

	// recursive case

	if(level > max_level) {
		cout << root->data << " ";
		max_level = level;
	}
	printRightViewRecursive(root->right, level+1);
	printRightViewRecursive(root->left, level+1);

}

int main() {

	node* root = NULL;
	root = buildTree();
	// printRightView(root);
	printRightViewRecursive(root, 0);

	return 0;
}