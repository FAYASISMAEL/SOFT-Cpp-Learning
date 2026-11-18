#include<iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double b) {
        balance = b;
    }
    friend  void audit(BankAccount acc);
};

void audit(BankAccount acc){
    cout << "Account balance: " << acc.balance << endl;
}

int main(){
    BankAccount a(2500);
    audit(a);
    return 0;
}