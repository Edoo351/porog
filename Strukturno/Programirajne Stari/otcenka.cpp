#include <iostream>
using namespace std;

int main() {
    int note,a,b,c,d,e;
    cout<<"Insert points"<<endl;
   cin>>a>>b>>c>>d>>e;
    note=a+b+c+d+e;
    if (note<=50)
    {
        cout<<"You didnt have pased "<<endl;
    }
    else if (note<=60)
     {
        cout<<"You have passed with 6"<<endl;
        if (note==60)
        {
            cout<<"You can have greater note"<<endl;
        }else{
            cout<<"You cannot have greater note"<<endl;
        }
        
     }
      else if (note<=70)
     {
        cout<<"You have passed with 7"<<endl;
        if (note==70)
        {
            cout<<"You can have greater note"<<endl;
        }else{
            cout<<"You cannot have greater note"<<endl;
        }
        else if (note<=80)
     {
        cout<<"You have passed with 8"<<endl;
        if (note==80)
        {
            cout<<"You can have greater note"<<endl;
        }else{
            cout<<"You cannot have greater note"<<endl;
        }
     }
     }
    return 0;
}