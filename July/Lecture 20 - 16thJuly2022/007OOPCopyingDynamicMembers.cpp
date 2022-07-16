#include<iostream>

using namespace std;

class customer {
	public :
		char* name; // it is allocated memory on the heap
		int age;
		char gender;
		double credits;

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = new char[100];
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		customer(customer& c) {
			cout << "\nI am inside the default copy constructor\n";
			// strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}
};

int main() {

	customer c1("Aishnee", 19, 'F', 200);
	c1.printCustomerInfo();

	customer c2 = c1; // default copy constructor is invoked
	
	return 0;
}

