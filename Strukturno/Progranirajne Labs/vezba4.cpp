#include <iostream>
using namespace std;

int main() {
    int vreme, pozicija;
    cin >> pozicija;
    vreme = 0;

    if (pozicija <= 24) {
        vreme = pozicija * 5;
    } else if (pozicija <= 36) {
        vreme = (pozicija * 5) + 30;
    } else if (pozicija <= 42) {
        vreme = (pozicija * 5) + 30;
    } else if (pozicija <= 48) {
        vreme = (pozicija * 5) + 60;
    } else if (pozicija <= 60) {
        vreme = (pozicija * 5) +60 ;
    } else {
        cout << "Studentot nema da bide usluzen" << endl;
        return 0;
    }

    cout << vreme / 60 << " Sati treba da ceka i " << vreme % 60 << " minuti" << endl;
    return 0;
}
