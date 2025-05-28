#include <iostream>
using namespace std;

int main() {
    int note, a1, b, c, d, e;
    cout << "Poena" << endl;
    cin >> a1 >> b >> c >> d >> e;
    note = a1 + b + c + d + e;
   // KOntrolon a1 ka pike nese nuk ka mbaron ktu nuk shkon posht
    if (note < 1 || note > 100) {
        cout << "Nuk ke pike" << endl;
        return 1;}
    
    if (note <= 50) {
        cout << "Nuk ke kaluar" << endl;
    }
    //ktu dy her e kam be me 60 sepse nuk mundet vetem me nje
    else if (note <= 60) {
        cout << "Ke mar 6 " <<note<< endl;
        if (note == 60) {
            cout << "Ke Mundesi per note me te mire" << endl;
        }
        else {
            cout << "Nuk ke Mundesi" << endl;
        }
    }
    else if (note <= 70) {
        cout << "Ke mar 7" <<note<< endl;
        if (note == 70) {
            cout << "Ke Mundesi per note me te mire" << endl;
        }
        else {
            cout << "Nuk ke Mundesi" << endl;
        }
    }
    else if (note <= 80) {
        cout << "Ke kalu me 8 " <<note<< endl;
        if (note == 80) {
            cout << "Ke Mundesi per note me te mire" << endl;
        }
        else {
            cout << "Nuk ke Mundesi." << endl;
        }
    }
    else if (note <= 90) {
        cout << "Ke kalu me 8 " <<note<< endl;
        if (note == 90) {
            cout << "Ke Mundesi per note me te mire" << endl;
        }
        else {
            cout << "Nuk ke Mundesi." << endl;
        }
    }
    else if (note <= 100) {
        cout << "Ke Mar 10" <<note<< endl;
        if (note == 100) {
            cout << "Ke maksimum te pikeve" << endl;
        }
    }
    return 0;
}
