#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;

		customer(string n, int a, char g, double c) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			name = n;
			age = a;
			gender = g;
			credits = c;
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

	customer c("Vishal", 20, 'M', 0);

	// c.printCustomerInfo();

	// cout << c.name << endl;

	customer* cptr = &c;

	// cout << (*cptr).name << endl;
	// cout << (*cptr).age << endl;
	// cout << (*cptr).gender << endl;
	// cout << (*cptr).credits << endl;

	cout << cptr->name << endl;
	cout << cptr->age << endl;
	cout << cptr->gender << endl;
	cout << cptr->credits << endl;

	cptr->printCustomerInfo();

	return 0;
}