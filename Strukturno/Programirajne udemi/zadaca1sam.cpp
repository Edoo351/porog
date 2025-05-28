#include <iostream>
using namespace std;

bool appears(int first, int second) {
    int firstDigit[10] = {0};
    int tmp = second;

    while (tmp > 0) {
        firstDigit[tmp % 10]++;
        tmp /= 10;
    }

    tmp = first;

    while (tmp > 0) {
        if (firstDigit[tmp % 10] == 0) {
            return false;
        }
        tmp /= 10;
    }

    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (appears(a, b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
