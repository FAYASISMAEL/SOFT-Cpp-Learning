#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int square(int a){
    return a * a;
}

int isEven(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int findMax(int m1, int m2){
    if (m1 > m2)
    {
        return m1;
    }
    else
    {
        return m2;
    }
}

int factorial(int f){
    int fact = 1;

    for(int i = 1; i <= f; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    cout << "Total: " << add(5, 6) << endl; 
    cout << "Square: " << square(5) << endl;
    cout << "Even: " << isEven(4) << endl;
    cout << "Max: " << findMax(5, 7) << endl;
    cout << "fact: " << factorial(5) << endl;
}