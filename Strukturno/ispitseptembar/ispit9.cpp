#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int uplata;
    cin >> uplata;
    cin.ignore();
    char maxlivce[10];
    char livce[10];
    int maxtip = -1;
    float maxkvota = -1;
    float maxkalkulacija = 1.0;
    float totalkvota=1.0;
    while (true)
    {
         if (!(cin >> livce)) break;
        if (livce[0] == '#')
        {
            break;
        }
        int tip;
        float kvota;
        cin >> tip >> kvota;
        cin.ignore();
        int kalkulacija = uplata * kvota;
        if (kalkulacija > maxkalkulacija)
        {
            maxtip = tip;
            maxkvota = kvota;
            strcpy(maxlivce, livce);
            maxkalkulacija = kalkulacija;
        }
        totalkvota*=kvota;
    }
    cout << maxlivce << " " << maxtip << " " << maxkvota << " " << endl;
    cout << uplata*totalkvota << endl;
    return 0;
}
