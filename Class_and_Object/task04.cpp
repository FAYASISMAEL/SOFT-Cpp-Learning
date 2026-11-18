#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    string name;

    Student(int r, string n){
        rollno = r;
        name = n;
    }
    void display(){
        cout << rollno << " " << name << endl;
    }
};

int main(){
    Student s1(101, "Asha");
    Student s2(102, "Rahul");
    s1.display();
    s2.display();
return 0;
}