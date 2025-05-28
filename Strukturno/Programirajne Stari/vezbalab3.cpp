#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a 6-digit number: ";
    cin >> num;

    if (num < 100000 || num > 999999) {
        cout << "Invalid input. Please enter a 6-digit number." << endl;
        return 1;
    }

    int originalNumber = num;  // Store the original number for comparison
    int reversedNumber = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << "The number is symmetric." << endl;
    } else {
        cout << "The number is not symmetric." << endl;
    }

    return 0;
}