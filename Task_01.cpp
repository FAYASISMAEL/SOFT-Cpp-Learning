// // Program to display personal details
// #include <iostream>
// using namespace std;

// int main() {
// 	cout << "Fayas Ismael" << endl;
// 	cout << "Al-Azhar English Medium High School" << endl;
// 	cout << "Jain University" << endl;
// 	cout << "BCA FullStack + AI" << endl;

// 	return 0;
// }


// example 01
#include<iostream>
using namespace std;

class bio {
	public:
		string name, school, college, course; 

		void intro() {
			cout << name << endl;
			cout << school << endl;
			cout << college << endl;
			cout << course << endl;
		}
};

int main() {
	bio b1 ;

	b1.name = "Fayas Ismael";
	b1.school = "Al-Azhar English Medium High School";
	b1.college = "Jain University";
	b1.course = "BCA FullStack + AI";

	b1.intro();

	return 0;
}


// example 02
#include<iostream>
using namespace std;

int age;
double marks;

int main() {

	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Enter your marks: ";
	cin >> marks;
	
	// cout << "You are " << age << " years old" << " and my mark is " << marks << "." << endl;
    cout << "You are " << age << " years old ";
    cout << "and my marks is " << marks << ".";
}


// example 03
#include<iostream>
using namespace std;

int main() {
	string name;
	int age;
	double marks;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your marks: ";
	cin >> marks;

	cout << "My name is: " << name << endl;
	cout << "My age is : " << age << endl;
	cout << "My marks are: " << marks << endl;
	
}