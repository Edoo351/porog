#include <iostream>
using namespace std;

int main() {
    int todayDate;
    cin >> todayDate;
    int todayDay = todayDate / 1000000;
    int todayMonth = (todayDate / 10000) % 10;
    int todayYear = todayDate % 10000;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int dob = 0;
        cin >> dob;
        int dobDay = dob / 1000000;
        int dobMonth = (dob / 10000) % 10;
        int dobYear = dob % 10000;

        if ((todayYear - dobYear > 18) || (todayYear - dobYear >= 18 && (todayMonth > dobMonth || (todayMonth == dobMonth && todayDay >= dobDay)))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
