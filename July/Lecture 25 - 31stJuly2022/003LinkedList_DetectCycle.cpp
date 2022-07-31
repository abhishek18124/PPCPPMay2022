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

bool isCyclePresent(node* head) {
	node* slow = head;
	node* fast = head;

	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			return true;
		}
	}

	return false;
}

node* removeCycle(node* head) {

	node* slow = head;
	node* fast = head;

	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			break;
		}
	}

	node* prev = head;
	while(prev->next != fast) {
		prev = prev->next;
	}

	slow = head;

	while(slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}

	// prev pointer is currently at the tail node of the linkedList
	prev->next = NULL;

	return head;

}

int main() {

	node* head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);
	head->next->next->next->next->next = new node(60);
	head->next->next->next->next->next->next = new node(70);
	head->next->next->next->next->next->next->next = new node(80);
	head->next->next->next->next->next->next->next->next = head->next->next->next;

	// isCyclePresent(head) ? cout << "cycle found!" << endl :
	//                        cout << "cycle not found!" << endl;

	if(isCyclePresent(head)) {
		head = removeCycle(head);
		printLinkedList(head);
	}

	return 0;
}