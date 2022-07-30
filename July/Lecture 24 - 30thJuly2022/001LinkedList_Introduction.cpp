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

	// 1. create a new node with the given data dynamically
	node* n = new node(data);

	// 2. update the next field of the newly created node such that
	// it holds the address of the current head of the linked list
	n->next = head;

	// 3. make the newly created node as the head of the linkedlist
	head = n;

}

// node* insertAtHead(node* head, int data) {

// 	// 1. create a new node with the given data dynamically
// 	node* n = new node(data);

// 	// 2. update the next field of the newly created node such that
// 	// it holds the address of the current head of the linked list
// 	n->next = head;

// 	// 3. make the newly created node as the head of the linkedlist
// 	head = n;

// 	return head;

// }


void printLinkedList(node* head) {

	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
}

int main() {

	node* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	// head = insertAtHead(head, 50);
	// head = insertAtHead(head, 40);
	// head = insertAtHead(head, 30);
	// head = insertAtHead(head, 20);
	// head = insertAtHead(head, 10);

	printLinkedList(head);

	return 0;
}