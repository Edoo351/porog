#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a<=0||b<=0)
    {
        cout<<"Invalid input"<<endl;
    }
    if (a<b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    while (b!=0)
    {
        if (a%100/10==b%10)
        {
            b/=10;
            a/=100;
            continue;
        }
        cout<<"NE"<<endl;
        return 0;
    }
    cout<<"PAREN"<<endl;
    return 0;
}