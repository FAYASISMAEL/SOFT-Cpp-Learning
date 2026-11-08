#include<iostream>
using namespace std;

class Student{
    public:
        int rollNo;
        string name;

        void display(){
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }
};

int main(){

    Student S1;
    Student S2;

    S1.rollNo = 25;
    S1.name = "Fayas Ismael";

    S2.rollNo = 04;
    S2.name = "Abhinav R S";

    S1.display();
    S2.display();

return 0;
}