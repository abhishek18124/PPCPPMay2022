#include<iostream>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor of the customer class" << endl;
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

	customer c1; // default constructor is invoked automatically

	c1.age = 20;
	c1.gender = 'F';
	c1.credits = 0;
	strcpy(c1.name, "Samriddhi");

	c1.printCustomerInfo();

	return 0;
}

