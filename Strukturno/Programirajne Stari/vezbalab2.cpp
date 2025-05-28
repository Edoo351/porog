#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a 5-digit number: ";
    cin >> num;
    
    if (num < 10000 || num > 99999) {
        cout << "Invalid input. Please enter a 5-digit number." << endl;
        return 1;
    }

    int digits[5];
    for (int i = 4; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }
    
    if (digits[0] < digits[2] && digits[2] < digits[4] && digits[0] < digits[4]) {
        int sum = digits[1] + digits[2];
        if (sum != 0 && digits[0] % sum == 0) {
            cout << "1 (Special)" << endl;
        } else {
            cout << "0 (Not Special)" << endl;
        }
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}

