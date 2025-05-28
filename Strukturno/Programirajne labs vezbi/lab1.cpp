#include <iostream>
using namespace std;
int main ()
{
    float a,b,c,d,e;
    float average=0 ;
    cin>>a>>b>>c>>d>>e ;
    average=static_cast<float>(a+b+c+d+e)/5.0;
    cout<<"Average is " << average<<endl;
    return 0;
}
