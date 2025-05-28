#include <iostream>
#include <cstring>
using namespace std;

class Library {
protected:
    string name;
    string city;
    float cost;
    bool wekend;

    Library(const string &name, const string &city, const float cost, const bool wekend)
        : name(name),
          city(city),
          cost(cost),
          wekend(wekend) {
        this->name = name;
        this->city = city;
        this->cost = cost;
        this->wekend = wekend;
    }

public:
    virtual void printDetail() const = 0;
    virtual double calculateMembershipCardCost() const =0;

    bool getWeek() const {
        return wekend;
    }
};

class AcademicLibrary:public Library{
private:
    bool exploring;
    int  colections;
public:
    AcademicLibrary(string &name, string &city, float cost, bool wekend, bool exploring,
        const int colections)
        : Library(name, city, cost, wekend),
          exploring(exploring),
          colections(colections) {
        this->exploring=exploring;
        this->colections=colections;
    }
    double calculateMembershipCardCost() const override {
        double totalprice=cost;
        if (exploring) {
            totalprice*=1.24;
        } if(colections>0) {
            for (int i=0;i<colections;i++) {
                totalprice+=6;
            }
        }
        return totalprice;
    }

    void printDetail() const override {
        cout<<name<<" - (Academic) "<<city<<" "<<colections<<" "<<calculateMembershipCardCost()<<endl;
    }

};

class NationalLibrary:public Library {
private:
    bool education;
    int rakopisi;
public:
    NationalLibrary(string &name, string &city, float cost, bool wekend, bool education,
        const int rakopisi)
        : Library(name, city, cost, wekend),
          education(education),
          rakopisi(rakopisi) {
    }
    double calculateMembershipCardCost() const override {
        double totalPrice=cost;
        if (education) {
            totalPrice-=cost*0.07;
        } if(rakopisi>0) {
            for (int i=0;i<rakopisi;i++) {
                totalPrice+=15;
            }
        }
        return totalPrice;
    }
    void printDetail() const override {
        cout<<name<<" - (National) "<<city<<" "<<rakopisi<<" "<<calculateMembershipCardCost()<<endl;
    }

};
int findMostExpensiveNationalLibrary(Library **l, int n) {
int index = -1;
    double max = -99999;
    for (int i = 0; i < n; i++) {
    NationalLibrary *baba = dynamic_cast<NationalLibrary*>(l[i]);
    if(baba) {
        if (l[i]->calculateMembershipCardCost() >= max) {
            max = l[i]->calculateMembershipCardCost();
            index = i;
            if (max == l[i]->calculateMembershipCardCost() && l[i]->getWeek()) {
                    max = l[i]->calculateMembershipCardCost();
                    index = i;
            }
        }
    }
}
    if (index == -1) {
        return -1;
    }

    return index;
}

int main() {
    int n, testCase, type;
    cin >> testCase >> n;
    cin.ignore();

    Library** m = new Library*[n];

    for (int i = 0; i < n; ++i) {
        string name;
        string city;
        float base_price;
        bool weekend_working;

        cin >> type;
        cin.ignore();
        getline(cin, name);
        getline(cin, city);
        cin >> base_price;
        cin.ignore();
        cin >> weekend_working;
        cin.ignore();

        if (type == 1) {
            bool open_cooperation;
            int specialized_articles;

            cin >> open_cooperation >> specialized_articles;
            cin.ignore();

            m[i] = new AcademicLibrary(name, city, base_price, weekend_working, open_cooperation, specialized_articles);
        } else {
            bool cultural_program;
            int national_articles;

            cin >> cultural_program >> national_articles;
            cin.ignore();

            m[i] = new NationalLibrary(name, city, base_price, weekend_working, cultural_program, national_articles);
        }
    }

    if(testCase == 1){
        cout << "Abstract and child classes OK" << endl;
    }
    else if(testCase == 2){
        for(int i = 0; i < n; i++){
            cout << m[i]->calculateMembershipCardCost() << endl;
        }
        cout << "calculateMembershipCardCost method OK" << endl;
    }
    else if(testCase == 3){
        for(int i = 0; i < n; i++){
            m[i]->printDetail();
        }
        cout << "printDetail method OK" << endl;
    }
    else if(testCase == 4){
        int most_expensive_nat_lib_index = findMostExpensiveNationalLibrary(m, n);
        if(most_expensive_nat_lib_index>=0){
            m[most_expensive_nat_lib_index]->printDetail();
        }else{
            cout << "National Library not found in the array!"<<endl;
        }
        cout << "findMostExpensiveNationalLibrary method OK" << endl;
    }


    for (int i = 0; i < n; ++i) {
        delete m[i];
    }

    delete[] m;

    return 0;
}
