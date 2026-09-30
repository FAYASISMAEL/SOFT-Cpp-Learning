#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    if(num1 > num2){
        cout << num1 << " is greater than " << num2;
    }
    else{
        cout << num1 << " is less than " << num2;
    }
}