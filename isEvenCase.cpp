#include<iostream>
using namespace std;

int isEven(int n){
    return (n % 2 == 0);
}

int main(){
    cout << isEven(4) << endl;
}