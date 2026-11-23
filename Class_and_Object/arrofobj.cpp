#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    void display(){
        cout << rollno << endl;
    }
};

int main(){
    Student s[3];   //3 object

    for (int i=0;i<3;i++){
        cin >> s[i].rollno;   //read each
    }
    for (int i=0;i<3;i++){
        s[i].display();   //show each
    }
    return 0;
}