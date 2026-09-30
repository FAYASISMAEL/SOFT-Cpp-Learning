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
    
    double percentage = (marks / 500) * 100;
	cout << "My marks percentage is: " << percentage << "%" << endl;
	
}