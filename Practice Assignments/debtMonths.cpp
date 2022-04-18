// Name: Alexander Hernandez
// Homework: Practice Assignment
// Compiled with GNU
// g++ -Wall debtMonths.cpp -o debtMonths.exe

#include <iostream>
using namespace std;

int main()
{
    //This program assumes a constant rate of 1.02%
    double balance, endBalance, tempBalance;
    unsigned months = 0;

    cout << "Enter the inital balance to: ";
    cin >> balance;
    cout << "Enter the inital balance to: ";
    cin >> endBalance;


    tempBalance = balance;
    while(tempBalance < endBalance) {
        tempBalance *= 1.02;
        months++;
    }

    cout << "With an initial debt of " << balance << " and the desired debt of " << endBalance << ",\n"
         << "it takes " << months << " months accrue at an interest rate of 0.2%.";
}


    
    // double balance = 50;
    // int months = 0;

    // while(balance < 100) {
    //     balance = balance * 1.02;
    //     months++;
    // }

    // cout << "With an initial debt of 50 until a debt of 100,\n"
    //      << "it takes " << months << " months accrue.";