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

void deleteAtHead(node*& head) {

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;
}

node* getNode(node* temp, int j) {

	int k = 0;
	while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}

	return temp;

}

void deleteAtIndex(node*& head, int i) {

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	if(i == 0) {
		deleteAtHead(head);
		return;
	}

	// 1. get hold of the pointer at the (i-1)th index
	node* prev = getNode(head, i-1);

	if(!prev) { // prev == NULL
		// index is exceeding the length of the linkedList
		return;
	}

	// 2. get hold of the pointer at the ith index
	node* cur = getNode(head, i);

	if(!cur) { // cur == NULL
		// index is greater than or equal to the length of the linked list
		return;
	}

	// 3. update the next field of the previous node such that
	// it holds the address of the node that comes after the 
	// current node
	prev->next = cur->next;

	// 4. release the memory for the curretn node
	delete cur;

}

int main() {

	node* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	printLinkedList(head);

	deleteAtIndex(head, 4);

	printLinkedList(head);

	return 0;
}