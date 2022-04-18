// Name: Alexander Hernandez
// Assignment #1: Bank Account
// Compiled with GNU
// g++ -Wall Account.cpp -o Account.exe

#include <chrono>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;


// Create an 'account' class
class Account {
    string holder;
    string id;
    int balance;
    int year;
    unsigned month;
    unsigned day;

    public:
        Account() {
            chrono::system_clock::time_point now = chrono::system_clock::now();
            time_t tt = chrono::system_clock::to_time_t(now);
            tm local_tm = *localtime(&tt);
            year = static_cast<int>(local_tm.tm_year) + 1900;
            month = static_cast<unsigned>(local_tm.tm_mon) + 1;
            day = static_cast<unsigned>(local_tm.tm_mday);
        };
        string getAll();
        unsigned checkBalance();
        void setAll(string, string, int);
        void deposit(unsigned);
        void withdraw(unsigned);
};

// Prototypes for testing functions
void TestAccount();
void RunSimulation();

// Main function which calls test functions
int main() {
    TestAccount();

    RunSimulation();

    return 0;
}

// Start of functions relating to the 'Account' class

// Returns a string with all information of Account object
string Account::getAll() {
    return "Name: " + holder + " | ID: " + id + " | Cents: " + to_string(balance) + " | Day: " + to_string(day) + ", Month: " + to_string(month) + ", Year: " + to_string(year); 
}

// Returns the balance of the Account object
unsigned Account::checkBalance() {
    return balance;
}

// Modifies all identifying attributes of Account object
void Account::setAll(string newHolder, string newID, int newBalance) {
    holder = newHolder;
    id = newID;
    balance = newBalance;
}

// Modifies balance of Account object by increasing by the parameter
void Account::deposit( unsigned someAmt ) {
    balance += someAmt;
}

// Modifies balance of Account object by decreasing by the parameter
void Account::withdraw( unsigned someAmt ) {
    balance -= someAmt;
}

// Start of Homework Functions

// Example account set up to test the function
void TestAccount() {
    cout << "Running 'TestAccount' Function...\n";
    // Test if all variables can be set
    Account firstAccount;
    firstAccount.setAll("TestAccount Name", "01-23-45", 1000);

    // Use deposit and withdraw function, then test final balance
    firstAccount.deposit(1000);
    firstAccount.withdraw(500);

    assert( firstAccount.checkBalance() == 1500 );
    cout << firstAccount.getAll();
    cout << "\nFinishing 'TestAccount' Function.\n";
    cout << "---------------------------------\n";
}

// Function to run a simulation and test the Account variables and functions
void RunSimulation() {
    cout << "Running 'RunSimulation' Function...\n";

    // Creates file object and line 'pointer'
    ifstream f("SimulationData.txt");
    string line;

    Account simAccount;
    string initName; 
    int initBalance;
    unsigned totalIDsOfAccounts = 0;

    cout << "Obtaining name for account...\n";
    getline(f, line);
    initName = line;

    cout << "Obtaining balance for account...\n";
    getline(f,line);
    initBalance = stoi(line);

    cout << "Assigning name, balance, and creating ID for account...\n";
    totalIDsOfAccounts += 1;
    simAccount.setAll(initName, to_string(totalIDsOfAccounts), initBalance);

    cout << "Account information: \n" + simAccount.getAll() + "\n";

    // Obtains whether or deposit or withdraw and how much from file. *100 to supplement for '`' character
    cout << "Obtaining deposit or withdraw in cents from file...\n";
    while(getline(f, line)) {
        string determinant = line.substr(0,1);
        string strAmount = line.substr(1);
        unsigned unsAmount = (unsigned)stoi(strAmount);
        // Format line for deposit or withdraw
        if (determinant == "+") {
            cout << "+Depositing " + strAmount + "...\n";
            simAccount.deposit(unsAmount * 100);
        }
        else if (determinant == "-") {
            cout << "-Withdrawing " + strAmount + "...\n";
            simAccount.withdraw(unsAmount * 100);
        }
    }
    cout << "Ending deposit/withdraw...\n";
    cout << "Final Balance: " + to_string(simAccount.checkBalance()) + ".\n";

    cout << "Ending simulation.\n";
    cout << "----------------------------";
    }