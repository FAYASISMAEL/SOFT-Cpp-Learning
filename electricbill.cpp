#include<iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    double billAmount;

    if(units <= 100){
        cout << "Your bill amount is: " << units * 5 << endl;
    }
    else if(units > 100 && units <= 200){
        cout << "Your bill amount is: " << (100 * 5) + ((units - 100)*7) << endl;
    }
    else if(units > 200 && units <= 300){
        cout << "Your bill amount is: " << (100 * 5) + (100 * 7) + ((units - 200) * 10) << endl;
    }
    else if(units > 300){
        cout << "Your bill amount is: " << (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 20) << endl;
    }
    else{
        cout << "Invalid number of units" << endl;
    }
}