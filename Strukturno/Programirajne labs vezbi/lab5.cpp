#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int zbir=0;
 if (a > 0 && b > 0 && c > 0 && a < 10 && b < 10 && c < 10) 
    {
        zbir=zbir*10+a;
        zbir=zbir*10+b;
        zbir=zbir*10+c;
    }
    cout<<zbir<<endl;
    cout<<zbir-a<<" "<<zbir-b<<" "<<zbir-c<<endl;
    return 0;
}