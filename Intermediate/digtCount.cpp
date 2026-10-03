#include<iostream>
using namespace std;

int main(){
    int num, count = 0;

    cout << "Enter numbers: ";
    cin >> num;

    while(num != 0){
        num = num / 10;
        count++;
    }

    cout << "Number of digit: " << count;
    return 0;
}