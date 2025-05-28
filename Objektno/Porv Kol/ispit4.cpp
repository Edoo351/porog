#include <cstring>
#include <iostream>
using namespace std;

class Patnik
{
private:
    char name[100];
    int vagon;
    bool velosiped;

public:
    Patnik()
    {
    }
    Patnik(const char *name, int vagon, bool velosiped)
    {
        strcpy(this->name, name);
        this->vagon = vagon;
        this->velosiped = velosiped;
    }
    friend ostream &operator<<(ostream &out, const Patnik &obj)
    {
        out << obj.name << endl;
        out << obj.vagon << endl;
        out << (obj.velosiped ? "Има велосипед" : "Нема велосипед") << endl;
        return out;
    }

    int vagon1() const
    {
        return vagon;
    }
    bool getVelosiped() const
    {
        return velosiped;
    }
};

class Voz
{
private:
    char destinacija[100];
    Patnik *p;
    int numberp;
    int velosipedmax;

    void copy(const Voz &baba)
    {
        strcpy(destinacija, baba.destinacija);
        velosipedmax = baba.velosipedmax;
        numberp = baba.numberp;
        p = new Patnik[numberp];
        for (int i = 0; i < numberp; i++)
        {
            p[i] = baba.p[i];
        }
    }

public:
    Voz(const char *destinacija = "", int velosipedmax = 0)
    {
        strcpy(this->destinacija, destinacija);
        this->velosipedmax = velosipedmax;
        this->numberp = 0;
        this->p = nullptr; // Иницијализирај го p на nullptr
    }

    Voz(const Voz &baba)
    {
        copy(baba);
    }

    Voz &operator=(const Voz &baba)
    {
        if (this != &baba)
        {
            delete[] p;
            copy(baba);
        }
        return *this;
    }

    ~Voz()
    {
        delete[] p;
    }

    Voz &operator+=(const Patnik &other)
    {
        int brojVelo = 0;
        for (int i = 0; i < numberp; i++)
        {
            if (p[i].getVelosiped())
            {
                brojVelo++;
            }
        }
        if (other.getVelosiped() && brojVelo >= velosipedmax)
        {
            return *this;
        }

        Patnik *temp = new Patnik[numberp + 1];
        for (int i = 0; i < numberp; i++)
        {
            temp[i] = p[i];
        }
        temp[numberp] = other;
        delete[] p;
        p = temp;
        numberp++;
        return *this;
    }

    void patniciNemaMesto()
    {
        int count1 = 0, count2 = 0;
        for (int i = 0; i < numberp; i++)
        {
            if (p[i].getVelosiped())
            {
                if (p[i].vagon1() == 1)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
        }
        int ostanato = velosipedmax;
        int nemaMesto1 = 0, nemaMesto2 = 0;

        if (count1 <= ostanato)
        {
            ostanato -= count1;
        }
        else
        {
            nemaMesto1 = count1 - ostanato;
            ostanato = 0;
        }

        if (count2 > ostanato)
        {
            nemaMesto2 = count2 - ostanato;
        }

        cout << "Број на патници со велосипеди кои немаат место во возот од 1-ва класа: " << nemaMesto1 << endl;
        cout << "Број на патници со велосипеди кои немаат место во возот од 2-ра класа: " << nemaMesto2 << endl;
    }

    friend ostream &operator<<(ostream &os, const Voz &obj)
    {
        os << "Дестинација: " << obj.destinacija << endl;
        os << "Патници:" << endl;
        for (int i = 0; i < obj.numberp; i++)
        {
            os << obj.p[i] << endl;
        }
        return os;
    }
};

int main()
{
    char destinacija[100];
    int n, maxv;
    cin >> destinacija >> maxv;
    cin >> n;
    Voz v(destinacija, maxv);

    for (int i = 0; i < n; i++)
    {
        char ime[100];
        int klasa;
        bool velosiped;
        cin >> ime >> klasa >> velosiped;
        Patnik p(ime, klasa, velosiped);
        v += p;
    }

    cout << v;
    v.patniciNemaMesto();

    return 0;
}
