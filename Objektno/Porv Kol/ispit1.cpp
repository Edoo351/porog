#include <cstring>
#include <iostream>
using namespace std;

enum tip
{
    Pop,
    Rok,
    Rap
};

class Pesna
{
private:
    char *ime;
    int minuti;
    tip kojtip;

public:
    Pesna() : ime(nullptr), minuti(0), kojtip(Pop) {}

    Pesna(const char *ime, int minuti, tip kojtip = Pop)
    {
        this->ime = new char[strlen(ime) + 1];
        strcpy(this->ime, ime);
        this->minuti = minuti;
        this->kojtip = kojtip;
    }

    Pesna(const Pesna &obj)
    {
        this->ime = new char[strlen(obj.ime) + 1];
        strcpy(this->ime, obj.ime);
        this->minuti = obj.minuti;
        this->kojtip = obj.kojtip;
    }

    Pesna& operator=(const Pesna &obj)
    {
        if (this != &obj) {
            delete[] ime;
            this->ime = new char[strlen(obj.ime) + 1];
            strcpy(this->ime, obj.ime);
            this->minuti = obj.minuti;
            this->kojtip = obj.kojtip;
        }
        return *this;
    }

    void pecati() const
    {
        cout << ime << " - " << minuti << "min" << endl;
    }

    ~Pesna()
    {
        delete[] ime;
    }

    int getMinuti() const
    {
        return minuti;
    }

    tip getTip() const
    {
        return kojtip;
    }
};

class CD
{
private:
    Pesna p[10];
    int broj;
    int vreme;

public:
    CD() : broj(0), vreme(0) {}

    CD(int vreme) : broj(0), vreme(vreme) {}

    CD(int vreme, Pesna pesni[], int broj)
    {
        this->vreme = vreme;
        this->broj = broj;
        for (int i = 0; i < broj; i++)
        {
            this->p[i] = pesni[i];
        }
    }

    bool dodadiPesna(Pesna pesna)
    {
        int totalMin = 0;
        for (int i = 0; i < broj; i++)
        {
            totalMin += this->p[i].getMinuti();
        }
        if (broj < 10 && (totalMin + pesna.getMinuti() <= vreme))
        {
            this->p[broj] = pesna;
            broj++;
            return true;
        }
        else
        {
            return false;
        }
    }

    void pecatiPesniPoTip(tip t)
    {
        for (int i = 0; i < broj; i++)
        {
            if (p[i].getTip() == t)
            {
                p[i].pecati();
            }
        }
    }

    int getBroj() const
    {
        return broj;
    }

    Pesna getPesna(int index) const
    {
        return p[index];
    }

    ~CD() {}
};
int main() {
	// se testira zadacata modularno
    int testCase;
    cin >> testCase;

	int n, minuti, kojtip;
	char ime[50];

	if(testCase == 1) {
        cout << "===== Testiranje na klasata Pesna ======" << endl;
        cin >> ime;
        cin >> minuti;
        cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
        Pesna p(ime,minuti,(tip)kojtip);
		p.pecati();
    } else if(testCase == 2) {
        cout << "===== Testiranje na klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<n; i++)
				(omileno.getPesna(i)).pecati();
	}
    else if(testCase == 3) {
        cout << "===== Testiranje na metodot dodadiPesna() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<omileno.getBroj(); i++)
				(omileno.getPesna(i)).pecati();
    }
    else if(testCase == 4) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }
    else if(testCase == 5) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }

return 0;
}
