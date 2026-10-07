// Problem code
#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}



// Solution code 01
#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
} 


int main(){
    int num1, num2;

    cout << "Enter 1st number: ";
    cin >> num1;
    
    cout << "Enter 2nd number: ";
    cin >> num2;

    int result = add(num1, num2);
    cout << "sum: " << result;
    return 0;
}



// Solution code 02
#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    cout << add(5, 7) << endl;
    return 0;
}
