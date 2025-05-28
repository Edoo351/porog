#include <iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int broj1=a/1000;
    int broj2=(a/100)%10;
    int broj3=(a/10)%10;
    int broj4=a%10;
    int sum1=broj1+broj2+broj3+broj4;
    int broj1b=(b/100);
    int broj2b=(b/10)%10;
    int broj3b=b%10;
    int sum=broj1+broj2+broj3+broj4;
    int suma1=broj1b+broj2b+broj3b;
    if (sum>suma1) 
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;

}
