/*

	Implementation of HashMap/HashTable

*/

#include<iostream>

using namespace std;

class node {

	public :

		int K;
		int V;
		node* next;

		node(int K, int V) {
			this->K = K;
			this->V = V;
			this->next = NULL;
		}

};

class HashMap {
	int N; //  to store the hash table capacity
	int M; //  to store the hash table size
	double L; // to store the load factor threshold

	node** T; // to store the pointer to the  dynamic
	          // array that represents the hash table

	int hashFn(int K) {
		// transform K into a hash index
		return K%N;
	}

	void transfer(node* head) {
		// 1. rehash (K, V) pairs present in the linkedList represented 
		//    by "head" pointer to the updated hashMap
		node* temp = head;
		while(temp) { // temp != NULL
			insert(temp->K, temp->V);
			temp = temp->next;
		}
		
		// 2. release memory allocated for the linkedList represented
		//    by "head" pointer
		while(head) { // head != NULL
			temp = head->next;
			delete head;
			head = temp;
		}
	}

	void rehash() {

		// 1. save pointer to the current hashMap and its capacity
		node** oldT = T;
		int oldN = N;
		
		// 2. create a hashMap with double capacity
		N *= 2;
		T = new node*[N];
		for(int i=0; i<N; i++) {
				T[i] = NULL;
		}
		M = 0;

		// 3. transfer (K, V) pairs from old hashMap to the updated hashMap
		for(int i=0; i<oldN; i++) {
			transfer(oldT[i]);
		}

		// 4. release the memory allocated to the old hashMap
		delete [] oldT;

	}

	public :

		HashMap(int N=5, double L=0.7) {
			this->N = N;
			this->M = 0;
			this->L = L;

			T = new node*[N];
			for(int i=0; i<N; i++) {
				T[i] = NULL;
			}
		}

		void insert(int K, int V) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. create a node with the given (K, V) pair and insert it at
			//    head of the linkedList stored at the hash index
			node* n = new node(K, V);
			n->next = T[hashIdx];

			// 3. update the pointer to the head of the linkedList stored at 
			//    the hash index such that it holds the address of the newly
			//    created node
			T[hashIdx] = n;
			M++;

			// 4. rehash, if loadFactor exceeds the loadFactor Threshold
			float loadFactor  = M/(N*1.0);
			if(loadFactor > L) {
				cout << "rehashing : " << loadFactor << endl;
				rehash();
			}
		}

		node* find(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. search for the node with the given key in the  linkedList 
			//    stored at the hash index
			node* temp = T[hashIdx];
			while(temp) { // temp != NULL
				if(temp->K == K) {
					return temp;
				}
				temp = temp->next;
			}
			return temp;

		}

		void erase(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. delete the node with the given key from the linkedList 
			//    stored at the hash index
			node* temp = T[hashIdx];
			if(temp && temp->K == K) { // temp != NULL && temp->K == K
				// delete the head node
				T[hashIdx] = temp->next;
				delete temp;
				M--;
			} else {
				node* prev = NULL;
				while(temp) { // temp != NULL
					if(temp->K == K) {
						prev->next = temp->next;
						delete temp;
						M--;
						break;
					}
					prev = temp;
					temp = temp->next;
				}
			}

		}

		void printLinkedList(node* head) {
			while(head) { // head != NULL
				cout << "(" << head->K << ", " << head->V << ") ";
				head = head->next;
			}
			cout << endl;
		}

		void printHashMap() {
			// iterate over buckets in the hashMap
			for(int i=0; i<N; i++) {
				// print the linkedList stored ith bucket of the hashMap
				cout << i << " : ";
				printLinkedList(T[i]);
			}
			cout << endl;
		}

		int& operator[](int K) {
			node* temp = find(K);
			if(!temp) { // temp == NULL i.e. K doesn't exist
				int garbage;
				insert(K, garbage);
				temp = find(K);
			}

			return temp->V;			
		}
};

int main() {
	
	// without rehashing ...

	// HashMap hashMap;

	// hashMap.insert(0, 0);
	// hashMap.insert(7, 49);
	// hashMap.insert(8, 64);
	// hashMap.insert(6, 36);
	// hashMap.insert(2, 4);

	// hashMap.printHashMap(); cout << endl;

	// int key = 0;

	// hashMap.erase(key);

	// hashMap.printHashMap();

	// node* n = hashMap.find(key);
	// n ? cout << n->V << endl : cout << key << " doesn't exist" << endl; 

	// with rehashing ... 

	HashMap hashMap;

	hashMap.insert(0, 0);
	hashMap.insert(7, 49);
	hashMap.insert(8, 64);

	hashMap.printHashMap(); cout << endl;

	hashMap.insert(6, 36);

	hashMap.printHashMap(); cout << endl;

	hashMap[12] = 144;  // or hashMap.operator[](12) = 144 or hashMap.insert(12, 144);
	
	hashMap.printHashMap();

	hashMap[12] = 0;

	hashMap.printHashMap();

	
	return 0;	
}