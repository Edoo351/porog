#include <iostream>
using namespace std;
int main(){
    int poeniIspit, casoj;
    cin>>poeniIspit>>casoj;
    if (poeniIspit<0||poeniIspit>100||casoj<0)
    {
        cout<<"Nevalidni vlezni podatoci";
        return 0;
    }
    if (poeniIspit>=60&&casoj>0.8)
    {
        cout<<"Odlicna otcenka"<<endl;
    }else if (poeniIspit>=50&&casoj>0.7)
    {
        cout<<"Zadovolna Otcenka"<<endl;
    }
    else{
        cout<<"Porsecen rezulat";
    }
    
    return 0;
}