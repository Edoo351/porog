#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

class NegativnaVrednost
{
public:
    void print()
    {
        cout << "Oglasot ima nevalidna vrednost za cenata i nema da bide evidentiran!" << endl;
    }
};

class Oglas
{
private:
    char naslov[50];
    char kategorija[50];
    char opis[100];
    double cena;

    void copy(const Oglas &other)
    {
        strcpy(this->naslov, other.naslov);
        strcpy(this->kategorija, other.kategorija);
        strcpy(this->opis, other.opis);
        this->cena = other.cena;
    }

public:
    Oglas(const char *naslov = "", const char *kategorija = "", const char *opis = "", double cena = 0)
    {
        strcpy(this->naslov, naslov);
        strcpy(this->kategorija, kategorija);
        strcpy(this->opis, opis);
        this->cena = cena;
    }
    Oglas(const Oglas &other)
    {
        copy(other);
    }
    Oglas &operator=(const Oglas &other)
    {
        if (this != &other)
        {
            copy(other);
        }
        return *this;
    }
    bool operator>(const Oglas &rhs)
    {
        return cena > rhs.cena;
    }
    friend ostream &operator<<(ostream &out, const Oglas &obj)
    {
        out << obj.naslov << endl;
        out << obj.opis << endl;
        out << obj.cena << " evra" << endl;
        return out;
    }
    const int getCena() const
    {
        return cena;
    }
    const char *getNaslov() const
    {
        return naslov;
    }
    const char *getOpis() const
    {
        return opis;
    }
    const char *getKategorija() const
    {
        return kategorija;
    }
};
class Oglasnik
{
private:
    char ime[20];
    Oglas *o;
    int brojoglasi;

    void copy(const Oglasnik &obj)
    {
        strcpy(ime, obj.ime);
        brojoglasi = obj.brojoglasi;
        o = new Oglas[obj.brojoglasi];
        for (int i = 0; i < obj.brojoglasi; i++)
        {
            o[i] = obj.o[i];
        }
    }

public:
    Oglasnik(const char *ime = "")
    {
        strcpy(this->ime, ime);
        brojoglasi = 0;
        o = nullptr;
    }
    Oglasnik(const Oglasnik &obj)
    {
        copy(obj);
    }
    Oglasnik &operator=(const Oglasnik &obj)
    {
        if (this != &obj)
        {
            delete[] o;
            copy(obj);
        }
        return *this;
    }
    Oglasnik &operator+=(const Oglas &other)
    {
        if (other.getCena() < 0)
        {
            throw NegativnaVrednost();
        }
        Oglas *temp = new Oglas[brojoglasi + 1];
        for (int i = 0; i < brojoglasi; i++)
        {
            temp[i] = o[i];
        }
        temp[brojoglasi++] = other;
        delete[] o;
        o = temp;
        return *this;
    }
    friend ostream &operator<<(ostream &out, Oglasnik &obj)
    {
        out << obj.ime << endl;
        for (int i = 0; i < obj.brojoglasi; i++)
        {
            out << obj.o[i].getNaslov() << endl;
            out << obj.o[i].getOpis() << endl;
            out << obj.o[i].getCena()<<" evra" << endl;
            out<< endl;
        }
        return out;
    }
    int getSize()
    {
        return brojoglasi;
    }
    ~Oglasnik()
    {
        delete[] o;
    }

    void oglasiOdKategorija(const char *k)
    {
        for (int i = 0; i < brojoglasi; i++)
        {
            if (strcmp(o[i].getKategorija(), k) == 0)
            {
                cout << o[i] << endl;
            }
        }
    }

    void najniskaCena()
    {
        if (brojoglasi == 0)
        {
            cout << "Nema dostapni oglasi" << endl;
        }
        int min = 9999999;
        int index = -1;
        for (int i = 0; i < brojoglasi; i++)
        {
            if (min > o[i].getCena())
            {
                min = o[i].getCena();
                index = i;
            }
        }
        cout << o[index] << endl;
    }
};

int main()
{

    char naslov[50];
    char kategorija[30];
    char opis[100];
    float cena;
    char naziv[50];
    char k[30];
    int n;

    int tip;
    cin >> tip;

    if (tip == 1)
    {
        cout << "-----Test Oglas & operator <<-----" << endl;
        cin.get();
        cin.getline(naslov, 49);
        cin.getline(kategorija, 29);
        cin.getline(opis, 99);
        cin >> cena;
        Oglas o(naslov, kategorija, opis, cena);
        cout << o;
    }
    else if (tip == 2)
    {
        cout << "-----Test Oglas & operator > -----" << endl;
        cin.get();
        cin.getline(naslov, 49);
        cin.getline(kategorija, 29);
        cin.getline(opis, 99);
        cin >> cena;
        Oglas o1(naslov, kategorija, opis, cena);
        cin.get();
        cin.getline(naslov, 49);
        cin.getline(kategorija, 29);
        cin.getline(opis, 99);
        cin >> cena;
        Oglas o2(naslov, kategorija, opis, cena);
        if (o1 > o2)
            cout << "Prviot oglas e poskap." << endl;
        else
            cout << "Prviot oglas ne e poskap." << endl;
    }
    else if (tip == 3)
    {
        cout << "-----Test Oglasnik, operator +=, operator << -----" << endl;
        cin.get();
        cin.getline(naziv, 49);
        cin >> n;
        Oglasnik ogl(naziv);
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.getline(naslov, 49);
            cin.getline(kategorija, 29);
            cin.getline(opis, 99);
            cin >> cena;
            Oglas o(naslov, kategorija, opis, cena);
            try
            {
                ogl += o;
            }
            catch (NegativnaVrednost i)
            {
                i.print();
            }
        }
        cout << ogl;
    }
    else if (tip == 4)
    {
        cout << "-----Test oglasOdKategorija -----" << endl;
        cin.get();
        cin.getline(naziv, 49);
        cin >> n;
        Oglasnik ogl(naziv);
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.getline(naslov, 49);
            cin.getline(kategorija, 29);
            cin.getline(opis, 99);
            cin >> cena;
            Oglas o(naslov, kategorija, opis, cena);
            try
            {
                ogl += o;
            }
            catch (NegativnaVrednost i)
            {
                i.print();
            }
        }
        cin.get();
        cin.getline(k, 29);
        cout << "Oglasi od kategorijata: " << k << endl;
        ogl.oglasiOdKategorija(k);
    }
    else if (tip == 5)
    {
        cout << "-----Test Exception -----" << endl;
        cin.get();
        cin.getline(naziv, 49);
        cin >> n;
        Oglasnik ogl(naziv);
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.getline(naslov, 49);
            cin.getline(kategorija, 29);
            cin.getline(opis, 99);
            cin >> cena;
            Oglas o(naslov, kategorija, opis, cena);
            try
            {
                ogl += o;
            }
            catch (NegativnaVrednost i)
            {
                i.print();
            }
        }
        cout << ogl;
    }
    else if (tip == 6)
    {
        cout << "-----Test najniskaCena -----" << endl;
        cin.get();
        cin.getline(naziv, 49);
        cin >> n;
        Oglasnik ogl(naziv);
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.getline(naslov, 49);
            cin.getline(kategorija, 29);
            cin.getline(opis, 99);
            cin >> cena;
            Oglas o(naslov, kategorija, opis, cena);
            try
            {
                ogl += o;
            }
            catch (NegativnaVrednost i)
            {
                i.print();
            }
        }
        cout << "Oglas so najniska cena:" << endl;
        ogl.najniskaCena();
    }
    else if (tip == 7)
    {
        cout << "-----Test All -----" << endl;
        cin.get();
        cin.getline(naziv, 49);
        cin >> n;
        Oglasnik ogl(naziv);
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.getline(naslov, 49);
            cin.getline(kategorija, 29);
            cin.getline(opis, 99);
            cin >> cena;
            Oglas o(naslov, kategorija, opis, cena);
            try
            {
                ogl += o;
            }
            catch (NegativnaVrednost i)
            {
                i.print();
            }
        }
        cout << ogl;

        cin.get();
        cin.get();
        cin.getline(k, 29);
        cout << "Oglasi od kategorijata: " << k << endl;
        ogl.oglasiOdKategorija(k);

        cout << "Oglas so najniska cena:" << endl;
        ogl.najniskaCena();
    }

    return 0;
}
