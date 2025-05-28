#include <iostream>
using namespace std;



int main(){
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    a+=b;
    c+=d;
    if (a%2==0&&c%2==1)
    {
        cout<<"1"<<endl;
    }
        else{
            cout<<"0"<<endl;
        }
    
    return 0;

}