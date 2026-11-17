#include <iostream>
using namespace std;

class BankAccount {
public:
    int acc;
    float balance;

    void read() {
        cin >> acc >> balance;
    }
};

class SavingsAccount : public BankAccount {
public:
    void interest() {
        balance = balance + balance * 0.05;
    }
};

class CurrentAccount : public BankAccount {
public:
    void withdraw(float amount) {
        balance -= amount;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    cout << "Enter savings account number and balance: ";
    s.read();
    s.interest();
    cout << "Savings Balance: " << s.balance << endl;

    cout << "Enter current account number and balance: ";
    c.read();

    float amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    c.withdraw(amount);
    cout << "Current Balance: " << c.balance;

    return 0;
}
