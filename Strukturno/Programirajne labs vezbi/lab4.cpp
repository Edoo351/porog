#include <iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    
    double razlika= (a+b)/2.0;
    a+=razlika;
    b-=razlika;
    cout<<"Razlikata e: "<<a-b<<endl;
    return 0;
}