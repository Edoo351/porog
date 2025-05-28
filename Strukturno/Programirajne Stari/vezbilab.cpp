#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a 5-digit number: ";
    cin >> number;

    // Extract individual digits
    int fifth_digit = number % 10;
    number /= 10;
    int fourth_digit = number % 10;
    number /= 10;
    int third_digit = number % 10;
    number /= 10;
    int second_digit = number % 10;
    number /= 10;
    int first_digit = number % 10;

    // Check if it's a 5-digit number
    if (number < 1 || number >= 100000) {
        cout << "Invalid input. Please enter a valid 5-digit number." << endl;
        return 0;
    }

    // Check for division by zero
    if (second_digit + third_digit == 0) {
        cout << "The number is not special due to division by 0." << endl;
        return 0;
    }

    // Check if the digits are in strictly ascending order
    if (first_digit < third_digit && third_digit < fifth_digit) {
        // Check if the number is divisible by the sum of the second and third digits
        if (number % (second_digit + third_digit) == 0) {
            cout << "The number is special." << endl;
        } else {
            cout << "The number is not special." << endl;
        }
    } else {
        cout << "The number is not special.fffff" << endl;
    }

    return 0;
}