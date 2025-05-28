#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b&&b==c&&c==a)
    {
       cout<<"Site tri broja imaat ista vrednost"<<endl;
    }
    else{
       int man=999999;
       if (a<man)
       {
        man=x;
       }
       if (b<man)
       {
        man=x;
       }
       if (c<man)
       {
        man=c;
       }
       
        cout<<"Najmala broj ima "<<man<<endl;
    }
    return 0;
}