#include<iostream>

using namespace std;

class node {

	public :

		int data;
		node* next;

		node(int data) {
			this->data = data;
			this->next = NULL;
		}

};


void insertAtHead(node*& head, int data) {
	
	node* n = new node(data);
	n->next = head;
	head = n;

}

void printLinkedList(node* head) {
	
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	
	cout << endl;

}

int lengthIterative(node* head) {
	int count = 0;
	while(head) { // head != NULL;
		count++;
		head = head->next;
	}
	return count;
}

int lengthRecursive(node* head) {
	// base case
	if(!head) { // head == NULL
		return 0;
	}

	// recursive case

	// ask your friend for the length of the sub-list that starts
	// from the node which comes after the head node

	int X = lengthRecursive(head->next);

	return 1 + X;
}

int main() {

	node* head = NULL; // initially, linkedList empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	cout << lengthIterative(head) << " " << lengthRecursive(head) << endl;

	return 0;
}