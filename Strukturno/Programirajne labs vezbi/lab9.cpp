#include <iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int tmp1=0;
    int tmp2=0;
    tmp1=tmp1*10+a%10;
    a/=100;
    tmp1=tmp1+a%10;
     tmp2=tmp2*10+b%10;
    b/=100;
    tmp2=tmp2+b%10;
    float rezultat=0;
    rezultat=tmp1+tmp2;
    rezultat=rezultat/4.0;
    cout<<rezultat;
    return 0;
}