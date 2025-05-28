#include <iostream>
using namespace std;

int main() {
    int number1, number2, minutes, price, total;
    total = 0;
    price = 3;

    cout << "Number to dial " << endl;
    cin >> number1 >> number2;

    cout << "Minutes for speaking: " << endl;
    cin >> minutes;

    // Check if the call duration is greater than or equal to 30 minutes to change the price.
    if (minutes >= 30) {
        price = 2;
    }

    // Check the first two digits of the numbers to apply a discount.
    if ((number1 / 1000000 == 71 || number1 / 1000000 == 72 || number1 / 1000000 == 73)&&(number2 / 1000000 == 74 || number2 / 1000000 == 75 || number2 / 1000000 == 76)) {
        total = (minutes * price * 0.7);
    } else {
        total = minutes * price;
    }

    cout << "Total Price Is " << total << " units." << endl;

    return 0;
}
