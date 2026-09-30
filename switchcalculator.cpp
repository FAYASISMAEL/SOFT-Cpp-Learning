#include<iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter a operator: ";
    cin >> op;
    cout << "Enter 2nd number: "; 
    cin >> b;

    switch (op)
    {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;

        case '/':
            if(b == 0)
                cout << "Invalid number";
            else
                cout << a / b;
            break;

        default:
            cout << "Invalid operator";
    }
}