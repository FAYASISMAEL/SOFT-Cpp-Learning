#include<iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter your marks: ";
    cin >> mark;

    if(mark < 0 || mark > 100) {
        cout << "Invalid mark. Please enter a mark between 0 and 100.";
    }
    else if(mark >= 40) {
        cout << mark << " exam passed !!! ";
    }
    else {
        cout << mark << " exam failed !!! ";
    }

    return 0;
}