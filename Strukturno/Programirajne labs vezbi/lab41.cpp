#include <iostream>
using namespace std;

int main() {
    int vite, kategori, cmimi;
    cmimi = 0;
    cin >> kategori >> vite;

    //Sepse nuk ka kusht tjeter vetem kategorin ce qmimi i njejt
    if (kategori == 1) {
        cmimi = 8;
    } else if (kategori == 2) {
        //Ktu kontrolohen brenda ciklusit mos ben problem me mir eshte kshu sepse nese eshte lart do mund te e qes gabim
        //Mund mos e plotson kushtin
        if (vite <= 12) {
            cmimi = 8;
        } else {
            cmimi = 12;
        }
    } else if (kategori == 3) {
        if (vite <= 12) {
            cmimi = 10;
        } else {
            cmimi = 15;
        }
    } else if (kategori == 4) {
        if (vite <= 17) {
            cmimi = 15;
        } else {
            cmimi = 18;
        }
    }

    cout << "Price: " << cmimi <<"$"<< endl;

    return 0;
}
