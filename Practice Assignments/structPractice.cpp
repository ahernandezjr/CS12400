// Name: Alexander Hernandez
// Homework: Struct Practice
// Compiled with GNU
// g++ -Wall structPractice.cpp -o structPractice.exe

#include <string>
#include <cassert>
#include <iostream>
using namespace std;

// Create an 'account' struct
/*
struct Account{
    string holder;
    string id;
    int balance;
};

int main() {
    // Test if we can store balance
    Account firstAccount{"Test Name", "012345", 500};

    assert( firstAccount.balance == 500 );
}

*/

// Create an 'account' class
class Account {
    string holder;
    string id;
    int balance;

    public:
        string getAll();
        unsigned checkBalance();
        void setAll(string, string, int);
        void deposit(unsigned);
        void withdraw(unsigned);
};

int main() {
    // Test if we can store balance
    Account firstAccount;
    firstAccount.setAll("Test Name", "012345", 1000);

    cout << firstAccount.getAll();

    // Use deposit and withdraw function, then test final balance
    firstAccount.deposit(1000);
    firstAccount.withdraw(500);

    assert( firstAccount.checkBalance() == 1500 );

    return 0;
}


string Account::getAll() {
    return holder + ", " + id + ", " + to_string(balance); 
}

unsigned Account::checkBalance() {
    return balance;
}

void Account::setAll(string newHolder, string newID, int newBalance) {
    holder = newHolder;
    id = newID;
    balance = newBalance;
}

void Account::deposit( unsigned someAmt ) {
    balance += someAmt;
}

void Account::withdraw( unsigned someAmt ) {
    balance -= someAmt;
}
