#include <iostream>
using namespace std;
int main (){
    float a=0.0;
    cin>>a;
    float area=0;
    const float pi=3.14;

    area=a*pi*2;
    cout<<"Perimetar: "<<area<<endl;
    a=a*a*pi;
    cout<<"Plostina: "<<a;
    return 0;
}