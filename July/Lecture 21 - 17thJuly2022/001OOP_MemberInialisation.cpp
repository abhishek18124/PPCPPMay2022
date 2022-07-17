#include<iostream>

using namespace std;

class creditCard {

	public :

		string cardNumber;
		string bankName;

		creditCard() {
			cout << "\ninside default constructor of \'creditCard\' class\n";
		}


		creditCard(string cn, string bn) {
			cout << "\ninside parameterised constructor of \'creditCard\' class\n";
			cardNumber = cn;
			bankName = bn;
		}

};

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;
		creditCard cc; // member object

		customer(string n, int a, char g, double c, string cn, string bn) : name(n), age(a), gender(g), credits(c), cc(cn, bn) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			// name = n;
			// age = a;
			// gender = g;
			// credits = c;
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

	customer c("Vishal", 20, 'M', 0, "12345678", "SBI");

	c.printCustomerInfo();
		
	return 0;
}

