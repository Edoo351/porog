#include <iostream>
using namespace std;
int main(){
    int m , n;
    cin>>m>>n;
    int mildNumber=-1;
    bool mild;
    for (int i = m; i < n; i++)
    {
       mild=true;
       int tmp=i;
       while (tmp>0)
       {
            int broj=tmp%10;
            if (broj%2!=0)
            {
                mild=false;
                break;
            }
           
            tmp/=10;
       }
             if (mild)
            {
                mildNumber=i;
                break;
            }
    }
        if (mildNumber!=-1)
            {
                cout<<mildNumber<<endl;
            }
            else {
                cout<<"NE"<<endl;
            }
            
          
    
    return 0;
}