#include <iostream>
using namespace std;



int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c && (a!=b || a!=c))
    {
        cout<<"Najmala brojka ima brojot "<<a<<endl;

    }
    else if (b<=c && b<=a && (b!=a || b!=c))
    {
        cout<<"Najmala brojka ima brojot "<<b<<endl;
        
    }
    else if (c<=a && c<=b && (c!=a || c!=b))
    {
        cout<<"Najmala brojka ima brojot "<<c<<endl;
        
    }
    else if (a==b && a==c && b==c)
    {
        cout<<"Sajt tri ima isto vreme"<<endl;
    }
    
    return 0;

}