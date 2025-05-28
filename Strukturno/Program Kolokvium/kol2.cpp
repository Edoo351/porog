#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<10)
    {
        cout<<"The number is invalid"<<endl;
        return 0;
    }
    for (int i = n-1; i >= 9; i--)
    {
        int reversed =0 ;
        int digits =0 ;
        int tmp=i;
        while (tmp>0)
        {
            reversed=reversed*10+tmp%10;
            tmp/=10;
            digits++;
        }
        if (reversed%digits==0)
        {
            cout<<i<<endl;  
            return 0;
        }
        
    }
    
    
   
    return 0;
    }

    
  
