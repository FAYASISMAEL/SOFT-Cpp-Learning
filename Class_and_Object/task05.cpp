#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    
    Student(int r){
        rollno = r;
    }
    Student(const Student &s){
        rollno = s.rollno;
        cout << "copy constructor called" << endl;
    }
};

int main (){
    Student s1(101);
    Student s2 = s1;  //copy 1
    Student s3(s1);  //copy 2
    cout << s1.rollno << " " << s2.rollno << " " << s3.rollno << endl;
return 0;
}