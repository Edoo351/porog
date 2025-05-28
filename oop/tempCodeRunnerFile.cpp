// vashiot kod ovde
//
// Created by Edin Bekiroski on 19.4.24.
//
#include <iostream>
#include <cstring>
#include <ostream>
enum Gender {
    maski,
    zhenski
};
using namespace std;
class Ucesnik {
private:
    char *name;
    bool pol;
    int year;
    Gender gender;
public:
    Ucesnik(char const *name="",bool pol=true,int year=0)
        {
        this->name=new char [strlen(name)+1];
        strcpy(this->name, name);
        this->year=year;
        this->pol=pol;
    }
    Ucesnik(const Ucesnik& other) {
        this->name=new char [strlen(other.name)+1];
        strcpy(this->name,other.name);
        this->year=other.year;
        this->pol=other.pol;
    }
    bool operator>(const Ucesnik& other) {
        return year>other.year;
    }
    int get_year() const {
        return year;
    }

    friend ostream &operator<<(ostream &os,const Ucesnik &obj) {
        return os<< "Name: "<<obj.name<<"Pol: "<<(obj.pol==maski ? "maski":"zenski")<< "Years :"<<obj.year<<endl;
    }
    const char* get_name() const {
    return name;
    }
    ~Ucesnik() {
        delete [] name;
    }
};

class Maraton {
private:
    char location[100];
    Ucesnik *ucesnik;
    int broj;
public:
   Maraton(const char *location="" ) {
       strcpy(this->location,location);
       broj=0;
       ucesnik = new Ucesnik[0];
   }
Maraton& operator+=(const Ucesnik& u) {
    Ucesnik* temp = new Ucesnik[broj + 1];
    for (int i = 0; i < broj; ++i) {
        temp[i] = ucesnik[i];
    }
    temp[broj++] = u;
    delete[] ucesnik;  // Delete the original ucesnik array
    ucesnik = temp;
    return *this;
}

    double prosecnoVozrast() {
       if (broj==0) {
           return 0.0;
       }
       int sum=0;
        for (int i=0;i<broj;i++) {
            sum+= ucesnik[i].get_year();
        }
       return float(sum)/broj;
   }
    void pecatiPomladi(Ucesnik &u) {
       for (int i=0;i<broj;i++) {
           if (ucesnik[i].get_year()<u.get_year()) {
               cout<<ucesnik[i]<<endl;
           }
       }
   }
  ~Maraton() {
    for (int i = 0; i < broj; ++i) {
        delete[] ucesnik[i].get_name();
    }
    delete[] ucesnik;
    ucesnik = nullptr;
}
};

int main() {
    char ime[100];
    bool maski;
    int vozrast, n;
    cin >> n;
    char lokacija[100];
    cin >> lokacija;
    Maraton m(lokacija);
    Ucesnik **u = new Ucesnik*[n];
    for(int i = 0; i < n; ++i) {
        cin >> ime >> maski >> vozrast;
    	u[i] = new Ucesnik(ime, maski, vozrast);
        m += *u[i];
    }
	m.pecatiPomladi(*u[n - 1]);
    cout << m.prosecnoVozrast() << endl;
    for(int i = 0; i < n; ++i) {
        delete u[i];
    }
    delete [] u;
	return 0;
}
