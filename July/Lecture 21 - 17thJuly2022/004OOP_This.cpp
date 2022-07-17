#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;

		customer() {
			cout << "\ninside default constructor of \'customer\' class\n";
		}

		customer(string name, int age, char gender, double credits) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << this->name << endl;
			cout << "Age : " << this->age << endl;
			cout << "Gender : " << this->gender << endl;
			cout << "Credits : " << this->credits << endl;
		}


		bool isSameObject(customer* cptr) {
			return this == cptr;
		}

};


int main() {

	customer c("Dikshant", 21, 'M', 200);
	customer c2("Parth", 22, 'M', 0);

	c.printCustomerInfo();

	// c.isSameObject(&c2) ? cout << "true" << endl :
	//                      cout << "false" << endl;

	return 0;
}
