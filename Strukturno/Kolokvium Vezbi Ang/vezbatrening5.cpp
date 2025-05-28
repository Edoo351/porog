#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b+c==180&&a>0&&b>0&&c>0)
    {
        cout<<"YES"<<endl;
     if (a==90||b==90||c==90)
    {
        cout<<"RIGHT"<<endl;
    }
    else if (a<90||b<90||c<90)
    {
        cout<<"ACUTE"<<endl;
    }
    else {
        cout<<"OBTUSE"<<endl;
    }
    }
   else {
    cout<<"NO"<<endl;

   }
    
    
    return 0;

}