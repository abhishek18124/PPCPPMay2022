/*

    Given k sorted linked list, merge them and print the sorted output.

    k = 3
    Input : 1->3->5
            2->4->6 
            0->8->7
        
    Output: 0->1->2->3->4->5->6->7->8

*/

#include<iostream>
#include<queue>
#include<vector>

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

class nodeComparator {

    public :

    // return 'true' when swap is needed otherwise return false
    // think 'b' as the new node added to minHeap and 'a' as 
    // its parent

    bool operator()(node* a, node* b) {
        if(b->data < a->data) {
            // we need a swap
            return true;
        } else {
            // we don't need a swap
            return false;
        }
        // return b->data < a->data;
    }

};

node* mergeKSortedLinkedList(vector<node*> v) {

    node* head = new node(0); // dummy/sentinel node
    node* temp = head;

    priority_queue<node*, vector<node*>, nodeComparator> minHeap;
    for(node* ptr : v) {
        minHeap.push(ptr);
    }

    while(!minHeap.empty()) {

        node* minNode = minHeap.top();  minHeap.pop();
        temp->next = minNode;
        temp = temp->next;
        if(minNode->next) { // minNode->next != NULL
            minHeap.push(minNode->next);
        }

    }

    head = head->next; // skip the dummy node
    return head;


}

int main() {

    node* head1 = NULL; 

    insertAtHead(head1, 7);
    insertAtHead(head1, 4);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    node* head2 = NULL; 

    insertAtHead(head2, 8);
    insertAtHead(head2, 5);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    node* head3 = NULL; 

    insertAtHead(head3, 9);
    insertAtHead(head3, 6);
    insertAtHead(head3, 3);

    printLinkedList(head3);

    vector<node*> v = {head1, head2, head3};

    node* head = mergeKSortedLinkedList(v);

    printLinkedList(head);

    return 0;
}
