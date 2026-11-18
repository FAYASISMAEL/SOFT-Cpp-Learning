#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    string name;

    Student(){
       rollno = 0;
        name = 'Not assigned';
        cout << 'Student object created' << endl;
    }
};

int main(){
    Student s1;
    Student s2;
    cout << s1.rollno << " " << s1.name << endl;
    return 0;
}