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

node* getNode(node* temp, int j) {

	int k = 0;
	while(k < j and temp != NULL) {
		temp = temp->next;
		k++;
	}

	return temp;


}

void insertAtIndex(node*& head, int i, int data) {

	if(i == 0 or head == NULL) {
		insertAtHead(head, data);
		return;
	}

	// 1. create a new node with the given data on the heap memory
	node* n = new node(data);

	// 2. get hold of the pointer at the (i-1)th index
	node* prev = getNode(head, i-1);

	if(prev == NULL) {
		// index supplied by the user exceeds the length of the linked list
		return;
	}

	// 3. update the next field of the newly created node such
	// that it holds the address of the node that comes after
	// the previous node
	n->next = prev->next;

	// 4. update the next field of the previous node such that
	// it holds the address of the newly created node
	prev->next = n;

}

void printLinkedList(node* head) {

	while(head) { // head != NULL
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
	
	printLinkedList(head);

	insertAtIndex(head, 2, 25);

	printLinkedList(head);

	return 0;
}