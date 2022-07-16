#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		void incrementAge() {
			age++;
		}
};

// void printCustomerInfo(customer c) {
// 	cout << "\nCustomer Information\n";
// 	cout << "Name : " << c.name << endl;
// 	cout << "Age : " << c.age << endl;
// 	cout << "Gender : " << c.gender << endl;
// 	cout << "Credits : " << c.credits << endl;
// }

int main() {

	customer c1; // object declaration

	c1.age = 20;
	c1.gender = 'F';
	c1.credits = 0;
	strcpy(c1.name, "Samriddhi");

	// cout << "\nCustomer Information\n";
	// cout << "Name : " << c1.name << endl;
	// cout << "Age : " << c1.age << endl;
	// cout << "Gender : " << c1.gender << endl;
	// cout << "Credits : " << c1.credits << endl;

	// printCustomerInfo(c1);

	c1.printCustomerInfo();

	c1.incrementAge();

	c1.printCustomerInfo();

	customer c2; // object declartion

	c2.age = 22;
	c2.gender = 'M';
	c2.credits = 100;
	strcpy(c2.name, "Aman Soni");

	// cout << "\nCustomer Information\n";
	// cout << "Name : " << c2.name << endl;
	// cout << "Age : " << c2.age << endl;
	// cout << "Gender : " << c2.gender << endl;
	// cout << "Credits : " << c2.credits << endl;

	// printCustomerInfo(c2);

	c2.printCustomerInfo();

	return 0;
}

