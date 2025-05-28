#include <iostream>
using namespace std;
int main (){
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int sum=a+b;
   int sum1=c+d;
   if (sum%2==0&&sum1%2==1)
   {
    cout<<"1"<<endl;
   }
   else{
    cout<<"0"<<endl;
   }
   
    return 0;
}