#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Your code here

class Museum {
protected:
    string name;
    string city;
    float price;
    int hours;
public:
    Museum(const string &name, const string &city, const float price, const int hours)
        : name(name),
          city(city),
          price(price),
          hours(hours) {
        this->name=name;
        this->city=city;
        this->price=price;
        this->hours=hours;
    }
    virtual void printDetails() const = 0;
    virtual double calculateTicketCost() const = 0;
    int hours1() const {
        return hours;
    }
};

class  ScientificMuseum :public Museum {
private:
    bool options;
    int presentation;
public:
    ScientificMuseum(const string &name, const string &city, const float price, const int hours, const bool options,
        const int presentation)
        : Museum(name, city, price, hours),
          options(options),
          presentation(presentation) {
        this->options=options;
        this->presentation=presentation;
    }
    double calculateTicketCost() const override {
        float totalprice=price;
        if (options) {
            totalprice*=1.12;
        }
        if (presentation>0) {
            for (int i=0; i < presentation ; i++) {
                totalprice+=6;
            }
        }
        return totalprice;
    }
    void printDetails() const override {
        cout<<name<<" - (Scientific) "<<city<<" "<<presentation<<" "<<calculateTicketCost()<<endl;
    }
};

class ArtMuseum : public Museum {
private:
    bool display;
    int nonrestavrated;
public:
ArtMuseum(const string &name, const string &city, const float price, const int hours, const bool display,
    const int nonrestavrated)
    : Museum(name, city, price, hours),
      display(display),
      nonrestavrated(nonrestavrated) {
    this->display=display;
    this->nonrestavrated=nonrestavrated;
}
    double calculateTicketCost() const override {
    float totalPrice=price;
    if (display) {
        totalPrice*=0.82;
    }
    if (nonrestavrated > 0) {
        for (int i = 0 ; i < nonrestavrated ; i++) {
            totalPrice+=3;
        }
    }
    return totalPrice;
}
    void printDetails() const override {
    cout<<name<<" - (Art) "<<city<<" "<<display<<" "<<calculateTicketCost()<<endl;
}
};

int findCheapestScientificMuseum(Museum **m, int n) {
    double min=999999;
    int index = -1;
    int hours=0;
    for (int i = 0 ; i< n ;i++) {
        Museum *baba = dynamic_cast<ScientificMuseum *>(m[i]);
        if (baba) {
            if (min>m[i]->calculateTicketCost()) {
                min=m[i]->calculateTicketCost();
                index = i;
            }
            if (min==m[i]->calculateTicketCost()&&hours<m[i]->hours1()) {
                min=m[i]->calculateTicketCost();
                index = i;
                hours=m[i]->hours1();
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

    Museum** m = new Museum*[n];

    for (int i = 0; i < n; ++i) {
        string name;
        string city;
        float base_price;
        int working_hours;

        cin >> type;
        cin.ignore();
        getline(cin, name);
        getline(cin, city);
        cin >> base_price;
        cin.ignore();
        cin >> working_hours;
        cin.ignore();

        if (type == 1) {
            bool interactive_shows;
            int multimedia_pres;

            cin >> interactive_shows >> multimedia_pres;
            cin.ignore();

            m[i] = new ScientificMuseum(name, city, base_price, working_hours, interactive_shows, multimedia_pres);
        } else {
            bool amateur_shows;
            int original_artwork;

            cin >> amateur_shows >> original_artwork;
            cin.ignore();

            m[i] = new ArtMuseum(name, city, base_price, working_hours, amateur_shows, original_artwork);
        }
    }

    if(testCase == 1){
        cout << "Abstract and child classes OK" << endl;
    }
    else if(testCase == 2){
        for(int i = 0; i < n; i++){
            cout << m[i]->calculateTicketCost() << endl;
        }
        cout << "calculateTicketCost method OK" << endl;
    }
    else if(testCase == 3){
        for(int i = 0; i < n; i++){
            m[i]->printDetails();
        }
        cout << "printDetail method OK" << endl;
    }
    else if(testCase == 4){
        int cheapest_sci_museum_index = findCheapestScientificMuseum(m, n);
        if(cheapest_sci_museum_index>=0){
            m[cheapest_sci_museum_index]->printDetails();
        }else{
            cout << "Scientific Museum not found in the array!"<<endl;
        }
        cout << "findCheapestOnlineOrder method OK" << endl;
    }


    for (int i = 0; i < n; ++i) {
        delete m[i];
    }

    delete[] m;

    return 0;
}
