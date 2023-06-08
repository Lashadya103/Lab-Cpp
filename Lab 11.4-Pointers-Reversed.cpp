#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;
    int *pointer;

    cout << "Enter an integer: ";
    cin >> n;
    pointer=&n;

    while(*pointer != 0) {
        remainder = *pointer%10;
        reversedNumber = reversedNumber*10 + remainder;
        *pointer /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}

