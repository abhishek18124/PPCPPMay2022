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

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
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


node* mergeSort(node* head) {

	// base case
	if(!head or !head->next) { // head == NULL or head->next == NULL
		return head;
	}

	// recursive case

	node* head1 = head;

	// 1. divide the linked list into two sub-lists around the midPoint
	
	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 2. recursively sort the two sub-lists
	head1 = mergeSort(head1);
	head2 = mergeSort(head2);

	// 3. merge the two sorted sub-lists such that the merged list is also sorted
	head = mergeSortedLinkedList(head1, head2);

	return head;

}


int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = mergeSort(head);

	printLinkedList(head);

	return 0;
}