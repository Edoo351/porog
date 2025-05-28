
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct President
{
    char firstName[40];
    char lastName[40];
    char party[40];
    void read(){
        cin>>firstName>>lastName>>party;
    }
    void print(){
        cout<<"President :"<<firstName<<lastName<<"("<<party<<")"<<endl;
    }
};
struct City
{
    char name[40];
    int population;
      void read(){
        cin>>name>>population;
    }
    void print(){
        cout<<"City : "<<name<<" Population: "<<population<<endl;
    }
};

struct  Country{
    char countryName[40];
     int population;
    President president;
    City city;
 void read(){
        cin>>countryName>>population;
        president.read();
        city.read();
    }
    void print(){
        cout<<"Country : "<<countryName<<" Population : "<<population<<endl;
        president.print();
        city.print();
    }

};
Country max(Country *countries, int n) {
    Country maxCountry = countries[0];
    for (int i = 1; i < n; i++) {
        if (countries[i].city.population > maxCountry.city.population) {
            maxCountry = countries[i];
        }
    }
    return maxCountry;
}

int main (){
    Country country [100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
     country[i].read();
    }


    max(country,n).print();
    return 0;
}
