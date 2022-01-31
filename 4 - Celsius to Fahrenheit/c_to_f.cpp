// Name: Alexander Hernandez
// Homework: 4 - Celsius to Fahrenheit
// Compiled with GNU
// g++ -Wall .\c_to_f.cpp -o c_to_f.exe

#include <iostream>

using namespace std;

int main() {
    double c = 20;
    double f;
    f = (9/5) * c + 32.0;

    cout << "What value is assigned to f: " << f << endl;
    cout << "This is because (9/5) is two integers that normally equal 1.8," << endl;
    cout << "but two integers multiplied equals another integer." << endl;
    cout << "To fix this, the proper formula is: 1.8 * c + 32.0" << endl;

    f = (1.8) * c + 32.0;

    cout << "The improved formula gives f a new value: " << f << endl;

    return 0;
}