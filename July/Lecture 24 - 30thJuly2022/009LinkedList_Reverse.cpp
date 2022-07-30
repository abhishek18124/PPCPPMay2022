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

node* reverse(node* head) {

	node* cur = head;
	node* prev= NULL;

	while(cur) { // cur != NULL
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;

}

node* reverseRecursive(node* head) {

	// base case
	if(!head or !head->next) { // head == NULL or head->next == NULL
		return head;
	}

	// recursive case

	// ask your friend to reverse the sub-list that starts from the
	// node which comes after the head node
	node* revHead = reverseRecursive(head->next);
	
	node* revTail = head->next;
	revTail->next = head;
	head->next = NULL;

	return revHead;

}

int main() {

	node* head = NULL; // initially, linkedList is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	// head = reverse(head);
	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}