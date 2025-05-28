#include <iostream>
#include <iomanip> // Include the <iomanip> header for formatting

using namespace std;

int main() {
    float laser, kanal, pad, padsometro,padcelokupno;
    cout << "Vnesi visina na laser pred kopajne" << endl;
    cin >> laser;
    cout << "Vnesi Dolzina Na Kanal" << endl;
    cin >> kanal;
    cout << "Vnesi Kolku Sakas Pad Na 1Metro od Kopajne Na Kanal" << endl;
    cin >> pad;

    for (int i = 0; i < kanal; ++i) {
        padsometro++;
        laser += pad;
        padcelokupno +=pad;
        cout << "Na Svekoja Tocka Odalecena Od " << padsometro << " Metro" << endl;
        cout << "Imas Za Kopajne " << fixed << setprecision(1) << laser << endl; // Display laser with 2 decimal places
     }
      cout << " Pad Naudolu Imas "<<padcelokupno<<" Cm Od Pocetok Na Kanal Do Kraj Na Kanal "<<endl;
    

    return 0;
}