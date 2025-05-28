#include <iostream>
using namespace std;

bool isLeapYear(int godina) {
    return (godina % 400 == 0) || ((godina % 4 == 0) && (godina % 100 != 0));
}

bool isValidDate(int den, int mesec, int godina) {
    if (mesec < 1 || mesec > 12) {
        return false;
    }
    int daysInMonth;
    switch (mesec) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = isLeapYear(godina) ? 29 : 28;
            break;
        default:
            return false;
    }
    return den >= 1 && den <= daysInMonth;
}

int main() {
    int den, mesec, godina;
    cin >> den >> mesec >> godina;

    if (isValidDate(den, mesec, godina)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
