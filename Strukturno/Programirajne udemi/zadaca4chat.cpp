#include <iostream>

using namespace std;

// Function to count the occurrence of a digit in a number
int countOccurrence(int number, int digit) {
    int count = 0;

    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }

    return count;
}

int main() {
    int m, n, p;
    cout << "Enter three numbers m, n, and p: ";
    cin >> m >> n >> p;

    int count = 0;
    int currentNumber = m + 1;

    while (count < 10) {
        if (countOccurrence(currentNumber, n) == p) {
            cout << currentNumber << endl;
            count++;
        }
        currentNumber++;
    }

    return 0;
}
