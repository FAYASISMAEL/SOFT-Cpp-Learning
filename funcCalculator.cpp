#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

int multiply(int a , int b){
    return a * b;
}

int divide(float a, float b){
    return a / b;
}

int main(){
    int a, b;
    char op;

    cout << "Enter your 1st number: ";
    cin >> a;

    cout << "Enter your 2nd number: ";
    cin >> b;

    cout << "Enter a operator: ";
    cin >> op;

    if(op == '+'){
        cout << "Answer: " << add(a, b);
    }
    else if (op == '-')
    {
        cout << "Answer: " << substract(a, b);
    }
    else if (op == '*')
    {
        cout << "Answer: " << multiply(a, b);
    }
    else if (op == '/')
    {
        if(b == 0){
            cout << "cannot divide by zero";
        }
        else{
            cout << "Answer: " << divide(a, b);
        }
    }
    else{
        cout << "invalid operators";
    }
    return 0;
    
    
    
}