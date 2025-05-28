#include<iostream>
using namespace std;
class human
{
private:
    int age;
    int height;
    int weight;
public:
    human(int _age=1,int _height=1,int _weight=1){
        age=_age;
        height=_height;
        weight=_weight;
    }
    const int getage(){
        return age;
    }
    const int getheight(){
        return height;
    }
     const int getweight(){
        return weight;
    }
    void read(){
        cin>>age>>height>>weight;
    }
     void prit(){
        cout<<age<<" "<<height<<" "<<weight<<endl;
    }
    ~human() {}

};

int main (){
    human person;
    person.read();
    person.prit();
    return 0;
}
