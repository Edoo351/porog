#include <iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    int broj1=a/1000;
    int broj2=(a/100)%10;
    int broj3=(a/10)%10;
    int broj4=a%10;
    if (broj1<broj2&&broj2<broj3&&broj3<broj4)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    
    return 0;

}
