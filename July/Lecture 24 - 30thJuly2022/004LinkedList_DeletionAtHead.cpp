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

void deleteAtHead(node*& head) {

	if(!head) { // head == NULL
		// empty linkedList
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;

}

void printLinkedList(node* head) {
	
	while(head) { // head != NULL
		cout << head->data << " ";
		head = head->next;
	}
	
	cout << endl;
}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	printLinkedList(head);

	deleteAtHead(head);

	printLinkedList(head);


	return 0;
}