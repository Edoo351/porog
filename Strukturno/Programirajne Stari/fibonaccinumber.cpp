#include <iostream>
using namespace std;

int main(){
    int n,c1,c2,c3;
    cin>>n;
    c1=c2=1;
    cout<<c1;
    do
    {
        cout<<c2<<"\t";
        c3 = c1+c2 ;
        c1 = c2 ;
        c2 = c3 ;
    } while (c2<n);
    return 0;
}