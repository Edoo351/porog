#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    
    double p5=(a+b+c+d+e)/5.0;
    double p6=(a+b+c+d+e+f)/6.0;
    if (p6>p5)
    {
        cout<<"Enroled in 6 subject "<<endl;
        if (p6>8.5)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"0";
        }
    }
    else if (p6<p5)
    {
        cout<<"Enroled in 5 subject "<<endl;
        if (p6>8.5)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"0";
        }
    }
    
    return 0;


}