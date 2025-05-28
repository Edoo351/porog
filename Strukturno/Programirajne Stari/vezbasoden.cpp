#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Put number of date in octomber"<<endl;
    cin>>a;
    if (a<=0)
    {
        cout<<"You have entered a wrong number please insert a proper number"<<endl;
    }
    else{
        cout<<"The date you puted is "<<a<<" and tomorrow date is "<<endl;
        a+=1;
        cout<<"Octomber"<<a<<endl;

    }
    return 0;
}