// Name: Alexander Hernandez
// Homework: 3 - Square Root
// Compiled with GNU
// g++ -Wall .\square_root.cpp -o square_root.exe

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double one = 1;
    double two = 2;
    double three = 3;
    double four = 4;
    double five = 5;

    cout << fixed;
    cout << "N\tSquare Root" << endl;
    cout << setprecision(0) << one << "\t";
    cout << setprecision(3) << sqrt(one) << endl;
    cout << setprecision(0) << two << "\t";
    cout << setprecision(3) << sqrt(two) << endl;
    cout << setprecision(0) << three << "\t";
    cout << setprecision(3) << sqrt(three) << endl;
    cout << setprecision(0) << four << "\t";
    cout << setprecision(3) << sqrt(four) << endl;
    cout << setprecision(0) << five << "\t";
    cout << setprecision(3) << sqrt(five) << endl;
    
    return 0;
}