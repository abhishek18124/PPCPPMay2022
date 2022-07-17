#include<iostream>

using namespace std;

class customer {

		string name;
		int age;
		char gender;
		double credits;
		const int id;

	public :
	
		customer(int id, string name, int age, char gender, double credits) : id(id) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			// this->id = id; // error
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		// void setAge(int age) const {
		// 	this->age = age;
		// }

		string getName() const {
			return name;

		}

		int getAge() const {
			return age;
		}

		char getGender() const {
			return gender;
		}

		double getCredits() const {
			return credits;
		}
};


int main() {

	customer c(101, "Tanishq", 20, 'M', 500);

	c.printCustomerInfo();

	cout << c.getAge() << endl;

	// c.setAge(100);

	const customer c1(201, "Samriddhi", 20, 'F', 100);

	return 0;
}
