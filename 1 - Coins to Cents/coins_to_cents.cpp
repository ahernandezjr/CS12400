// Name: Alexander Hernandez
// Homework: 1 - Coins to Cents
// Compiled with GNU
// g++ -Wall .\coins_to_cents.cpp -o coins_to_cents.exe

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int qtyQuarters, qtyDimes, qtyNickles;
    cout << "This program will add up the inputted quarters. dimes, and nickles. (integers only)" << endl;

    cout << "Please enter the number of quarters: ";
    cin >> qtyQuarters;

    cout << "Please enter the number of dimes: ";
    cin >> qtyDimes;

    cout << "Please enter the number of nickles: ";
    cin >> qtyNickles;

    int cents = (25 * qtyQuarters) + (10 * qtyDimes) + (5 * qtyNickles);
    double total = (0.25 * (double)qtyQuarters) + (0.10 * (double)qtyDimes) + (0.05 * (double)qtyNickles);

    cout << "Monetary value in cents is: " << cents << endl;
    
    return 0;
}