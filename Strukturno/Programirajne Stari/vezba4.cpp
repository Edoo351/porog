#include <iostream>
using namespace std;

int main(){
    int godini;
    cin>>godini;
   
   if (godini % 2 == 0)
   {
    if (godini%100!=0)
    {
        cout<<godini<<"prestapna"<<endl;

    }
    else{
        cout<<"ne e prestapna"<<endl;
    }
   }
   
    return 0;

}