#include <iostream>
using namespace std;

void changeValue(int& num) {
    num = 100;
}
void wontChange(int num) {
    num = 99;
}
int main() {
    int myNum = 10;
    cout << "Original value: " << myNum << endl;

    changeValue(myNum);
    cout << "Value after calling changeValue: " << myNum << endl;

    wontChange(myNum);
    cout << "Value after calling wontChange: " << myNum << endl;

    return 0;
}