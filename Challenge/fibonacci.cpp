#include<iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: " << endl;

    for(int i = 1; i <=n; i++){
        cout << a << endl;
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}