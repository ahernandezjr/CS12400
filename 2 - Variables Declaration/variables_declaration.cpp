// Name: Alexander Hernandez
// Homework: 2 - Variables Declaration
// Compiled with GNU
// g++ -Wall .\variables_declaration.cpp -o variables_declaration.exe

#include <iostream>

using namespace std;

int main() {
    // int var1, var2, var3, var4, var5;

    cout << "Error when using uninitialized variable: .variables_declaration.cpp:16:13: warning: 'var1' is used uninitialized [-Wuninitialized]"
         << endl;

    int automobileSpeed = 60;
    double employeeHourly = 7.25;
    double scoreHighest = 95.6;

    cout << "A variable to hold the speed of an automobile: (int) automobileSpeed@" << automobileSpeed << endl;
    cout << "A variable to hold the speed of an automobile: (double) employeeHourly@" << employeeHourly << endl;
    cout << "A variable to hold the speed of an automobile: (double) scoreHighest@" << scoreHighest << endl;

    return 0;
}