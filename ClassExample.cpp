#include<iostream>
using namespace std;

class Student {
    public:
        string name;

        void introduce ()
        {
            count << 'Hi, I am ' << name << endl;
        }
};

int main() {
    Student s1;
    s1.name = "Fayas";
    s1.introduce();
    return 0;
}