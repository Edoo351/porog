#include <iostream>
#include <cstring>
#include <stdexcept>

using namespace std;

class BadInputException : public exception {
public:
    const char * what() const noexcept override {
        return "Greshna opisna ocenka";
    }
};

class StudentKurs {
protected:
    char ime[30];
    int ocenka;
    bool daliUsno;
    static int MAX;
    static int MINOCENKA;

public:
    StudentKurs(const char* ime, int finalenIspit) {
        strcpy(this->ime, ime);
        this->ocenka = finalenIspit;
        this->daliUsno = false;
    }

    virtual ~StudentKurs() {}

    char* getIme() {
        return ime;
    }

    bool getDaliUsno() const {
        return daliUsno;
    }

    virtual int ocenkaKurs() const {
        return ocenka;
    }

    static void setMAX(int max) {
        MAX = max;
    }

    static int getMINOCENKA() {
        return MINOCENKA;
    }

    friend ostream& operator<<(ostream& os, const StudentKurs& student) {
        os << student.ime << " --- " << student.ocenkaKurs();
        return os;
    }
};

int StudentKurs::MAX = 10;
int StudentKurs::MINOCENKA = 6;

class StudentKursUsno : public StudentKurs {
private:
    char* opisnaOcenka;

public:
    StudentKursUsno(const char* ime, int finalenIspit) : StudentKurs(ime, finalenIspit) {
        opisnaOcenka = nullptr;
        this->daliUsno = true;
    }

    StudentKursUsno(const StudentKursUsno& other) : StudentKurs(other) {
        opisnaOcenka = new char[strlen(other.opisnaOcenka) + 1];
        strcpy(opisnaOcenka, other.opisnaOcenka);
    }

    StudentKursUsno& operator=(const StudentKursUsno& other) {
        if (this != &other) {
            StudentKurs::operator=(other);
            delete[] opisnaOcenka;
            opisnaOcenka = new char[strlen(other.opisnaOcenka) + 1];
            strcpy(opisnaOcenka, other.opisnaOcenka);
        }
        return *this;
    }

    ~StudentKursUsno() {
        delete[] opisnaOcenka;
    }

    StudentKursUsno& operator+=(const char* opisna) {
        for (int i = 0; i < strlen(opisna); ++i) {
            if (!isalpha(opisna[i])) {
                throw BadInputException();
            }
        }

        delete[] opisnaOcenka;
        opisnaOcenka = new char[strlen(opisna) + 1];
        strcpy(opisnaOcenka, opisna);

        if (strcmp(opisnaOcenka, "odlicen") == 0) {
            ocenka = min(ocenka + 2, MAX);
        } else if (strcmp(opisnaOcenka, "dobro") == 0) {
            ocenka = min(ocenka + 1, MAX);
        } else if (strcmp(opisnaOcenka, "losho") == 0) {
            ocenka = max(ocenka - 1, 1);
        }

        return *this;
    }

    int ocenkaKurs() const override {
        return ocenka;
    }

    friend ostream& operator<<(ostream& os, const StudentKursUsno& student) {
        os << student.ime << " --- " << student.ocenkaKurs();
        return os;
    }
};

class KursFakultet {
private:
    char naziv[30];
    StudentKurs* studenti[20];
    int broj;

public:
    KursFakultet(const char* naziv, StudentKurs** studenti, int broj) {
        strcpy(this->naziv, naziv);
        for (int i = 0; i < broj; ++i) {
            if (studenti[i]->getDaliUsno()) {
                this->studenti[i] = new StudentKursUsno(*dynamic_cast<StudentKursUsno*>(studenti[i]));
            } else {
                this->studenti[i] = new StudentKurs(*studenti[i]);
            }
        }
        this->broj = broj;
    }

    ~KursFakultet() {
        for (int i = 0; i < broj; ++i) {
            delete studenti[i];
        }
    }

    void pecatiStudenti() const {
        cout << "Kursot " << naziv << " go polozile:" << endl;
        for (int i = 0; i < broj; ++i) {
            if (studenti[i]->ocenkaKurs() >= StudentKurs::getMINOCENKA()) {
                cout << *studenti[i] << endl;
            }
        }
    }

    void postaviOpisnaOcenka(const char* ime, const char* opisnaOcenka) {
        for (int i = 0; i < broj; ++i) {
            if (strcmp(studenti[i]->getIme(), ime) == 0) {
                StudentKursUsno* usnoStudent = dynamic_cast<StudentKursUsno*>(studenti[i]);
                if (usnoStudent) {
                    try {
                        *usnoStudent += opisnaOcenka;
                    } catch (const BadInputException& e) {
                        cout << e.what() << endl;
                        string correctedOpisna;
                        for (int j = 0; j < strlen(opisnaOcenka); ++j) {
                            if (isalpha(opisnaOcenka[j])) {
                                correctedOpisna += opisnaOcenka[j];
                            }
                        }
                        *usnoStudent += correctedOpisna.c_str();
                    }
                }
                break;
            }
        }
    }
};

int main() {
    StudentKurs** niza;
    int n, m, ocenka;
    char ime[30], opisna[10];
    bool daliUsno;
    cin >> n;
    niza = new StudentKurs*[n];
    for (int i = 0; i < n; ++i) {
        cin >> ime >> ocenka >> daliUsno;
        if (!daliUsno) {
            niza[i] = new StudentKurs(ime, ocenka);
        } else {
            niza[i] = new StudentKursUsno(ime, ocenka);
        }
    }

    KursFakultet programiranje("OOP", niza, n);
    for (int i = 0; i < n; ++i) {
        delete niza[i];
    }
    delete[] niza;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> ime >> opisna;
        programiranje.postaviOpisnaOcenka(ime, opisna);
    }

    StudentKurs::setMAX(9);

    programiranje.pecatiStudenti();

    return 0;
}
