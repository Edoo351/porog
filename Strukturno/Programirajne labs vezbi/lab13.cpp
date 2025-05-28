#include <iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    int first=a/10000;
    int second=a%10;
    int ostanat=(a%10000)/10;
    int sum=first+second;
    cout<<ostanat<<endl;
    cout<<sum<<endl;
    return 0;
}