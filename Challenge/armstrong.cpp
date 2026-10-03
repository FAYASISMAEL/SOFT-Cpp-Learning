#include<iostream>
using namespace std;

int main (){
    int num, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0){
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == original){
        cout << "Armstrong number";
    }
    else{
        cout << "Not an Armstrong number";
    }
    return 0;

}