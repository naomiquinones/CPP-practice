#include <iostream>
using namespace std;

int main() {
    int x = 124;
    int *ptr = &x;

    cout << "x = " << x << endl;
    cout << "The address of x is " << &x << endl;

    cout << "ptr points to " << ptr << endl;
    cout << "The value of ptr is " << *ptr << endl;

    cout << "ptr == &x? " << (ptr == &x) << endl;
    cout << "*ptr == x? " << (*ptr == x) << endl;

    cout << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of int*: " << sizeof(int*) << " bytes" << endl;
    cout << "Size of double*: " << sizeof(double*) << " bytes" << endl;
    cout << "Size of char*: " << sizeof(char*) << " bytes" << endl;

    return 0;
}