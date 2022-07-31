#include<iostream>

using namespace std;

class node {
public:

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

	while(head) { // head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;

}

node* getMidPoint(node* head) {

	if(!head) { // head == NULL
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast && fast->next) { // fast != NULL and fast->next != NULL
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	node* midPoint = getMidPoint(head);

	midPoint ? cout << midPoint->data << endl :
	           cout << "linkedList is empty!" << endl;
	
	return 0;
}