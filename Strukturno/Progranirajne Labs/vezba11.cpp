#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    double p5, p6;
    cin>>a>>b>>c>>d>>e>>f;
    p5=(a+b+c+d+e)/5.0;
    p6=(a+b+c+d+e+f)/6.0;
    if ( p6 > p5 )
    {
        cout<<"Enrolled 6 subjects."<<endl;
        if (p6 > 8.5)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    if ( p6 < p5 )
    {
        cout<<"Enrolled 5 subjects."<<endl;
        if (p5 > 8.5)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}