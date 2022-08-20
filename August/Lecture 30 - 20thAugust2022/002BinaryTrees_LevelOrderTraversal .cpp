/*

given the pre-order traversal of a binary tree, output its level-order traversal.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 20 30 40 50 60 70
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

void printLevelOrder(node* root) {

	queue<node*> q; // to keep track of nodes which have been visited but not yet processed
	q.push(root);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		// process the front node
		cout << front->data << " ";

		if(front->left) {
			q.push(front->left);
		}

		if(front->right) {
			q.push(front->right);
		}
	}

	cout << endl;

}

int main() {

	node* root = buildTree();

	printLevelOrder(root);

	return 0;
}