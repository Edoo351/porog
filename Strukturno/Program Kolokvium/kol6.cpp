#include <iostream>
using namespace std;

int main() {
    int a, b, x;

    cin >> x;

    int countpar = 0;
    int zsum = 0;

    while (true) {
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        if (x == (a + b)) {
            zsum++;
        }

        countpar++;
    }

    cout << "Vnesovte " << zsum << " parovi chij zbir e " << x << endl;

    if (countpar > 0) {
        float percentage = (static_cast<float>(zsum) / countpar) * 100;
        cout << "Procentot na parovi so zbir " << x << " e " << percentage << "%" << endl;
    } else {
        cout << "Nemate vneseno parovi" << endl;
    }

    return 0;
}
