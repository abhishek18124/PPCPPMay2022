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

node* mergeSortedLinkedList(node* head1, node* head2) {

	// base case
	if(!head1) { // head1 == NULL
		return head2;
	}

	if(!head2) { // head2 == NULL
		return head1;
	}

	// recursive case

	node* head = NULL;

	if(head1->data < head2->data) {
		head = head1;
		node* headFromFriend = mergeSortedLinkedList(head1->next, head2);
		head->next = headFromFriend;
	} else {
		head = head2;
		node* headFromFriend = mergeSortedLinkedList(head1, head2->next);
		head->next = headFromFriend;
	}

	return head;

}

int main() {

	node* head1 = NULL;

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

	printLinkedList(head1);

	node* head2 = NULL;

	insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);

	printLinkedList(head2);

	node* head = mergeSortedLinkedList(head1, head2); 

	printLinkedList(head);

	return 0;
}