#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
class Boy
{
private:
char name[80];
int age;
public:
    Boy(){}
    Boy(const char *name,int age){
        strcpy(this->name, name);
        this->age=age;
    }

    Boy(const Boy & other){
        strcpy(this->name,other.name);
        this-> age=other.age;
    }
    void print(){
        cout<<"Boys name: "<<name<<" Boys years: "<<age<<endl;
    }
     int getAge() const{
        return age;
    }
     const char *getname(){
        return name;
    }

};
class Girl
{
private:
char name[80];
int age;
public:
    Girl(){}
    Girl(const char *name,int age){
        strcpy(this->name, name);
        this->age=age;
    }

    Girl(const Girl & other){
        strcpy(this->name,other.name);
        this-> age=other.age;
    }
     void print(){
        cout<<"Girl name: "<<name<<" Girl years: "<<age<<endl;
    }
    const char *getname(){
        return name;
    }
    int getAge() const{
        return age;
    }

};
class Sredba
{
private:
   Boy boy;
   Girl girl;
public:
    Sredba(){}
    Sredba(Boy _boy,Girl _girl){
        boy=_boy;
        girl=_girl;
    }
    Sredba(const Sredba & sredba){
         boy=sredba.boy;
         girl=sredba.girl;
    }
    void print(){
        cout<<"Date between: "<<endl;
        boy.print();
        cout<<"and"<<endl;
        girl.print();
    }
    void isMatch(){
        int diff =abs(boy.getAge() - girl.getAge());
        if (diff<=5)
        {
            cout<<"Match"<<endl;
        }
        else{
            cout<<"Miss Match"<<endl;
        }

    }
};

int main (){
    Boy b("Edin" ,18);
    Girl g("Tea", 10);
    Sredba s (b,g);
    s.print();
    s.isMatch();
    return 0;
}
