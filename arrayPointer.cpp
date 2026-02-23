#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};

    cout << endl << "Printing with an index:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl << "Printing with a pointer: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << *(numbers + i) << " ";
    }
    cout << endl;

    return 0;
}