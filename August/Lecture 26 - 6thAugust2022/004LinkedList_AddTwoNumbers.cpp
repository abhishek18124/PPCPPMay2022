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
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

// node* sumOfLinkedList(node* head1, node* head2) {

// 	node* head = NULL;
// 	int carry  = 0;

// 	while(head1 && head2) { // head1 != NULL &&  head2 != NULL

// 		int d1 = head1->data;
// 		int d2 = head2->data;
// 		int sum = d1+d2+carry;

// 		node* n = new node(sum%10);
// 		carry = sum/10;
		
// 		// if(!head) { // head == NULL
// 		// 	head = n;
// 		// } else {
// 		// 	n->next = head;
// 		// 	head = n;
// 		// }

// 		n->next = head;
// 		head = n;

// 		head1 = head1->next;
// 		head2 = head2->next;

// 	}

// 	while(head1) { // head1 != NULL

// 		int d1 = head1->data;
// 		int sum = d1+carry;

// 		node* n = new node(sum%10);
// 		carry = sum/10;
		
// 		n->next = head;
// 		head = n;

// 		head1 = head1->next;
		
// 	}

// 	while(head2) { // head2 != NULL

// 		int d2 = head2->data;
// 		int sum = d2+carry;

// 		node* n = new node(sum%10);
// 		carry = sum/10;
		
// 		n->next = head;
// 		head = n;

// 		head2 = head2->next;
		
// 	}

// 	if(carry) { // carry == 1
// 		node* n = new node(carry);
// 		n->next = head;
// 		head = n;
// 	}

// 	return head;

// }


node* sumOfLinkedList(node* head1, node* head2) {

	node* head = NULL;
	int carry  = 0;

	while(head1 || head2 || carry) {

		int d1 = head1 ? head1->data : 0;
		int d2 = head2 ? head2->data : 0; 
		int sum = d1+d2+carry;

		node* n = new node(sum%10);
		carry = sum/10;
		
		n->next = head;
		head = n;

		head1 = head1 ? head1->next : head1;
		head2 = head2 ? head2->next : head2;

	}

	return head;

}


int main() {

	node* head1 = NULL;

	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);

	printLinkedList(head1);
\
	node* head2 = NULL;

	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);

	printLinkedList(head2);

	node* head = sumOfLinkedList(head1, head2);

	printLinkedList(head);

	return 0;
}