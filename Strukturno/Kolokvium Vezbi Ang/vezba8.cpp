#include <iostream>
using namespace std;
int main(){
    
    int n,x;
    cin>>n>>x;
    int maxNum=0;
    n--;
    for (int i = n; i > 0; i--)
    {
        int tmpN=n;
        int tmpX=x;
       bool number=false;
        while (tmpX!=0)
        {
           int digitX=tmpX%10;
           tmpX=x;
         int tmpNr=tmpN;
           while (tmpN!=0)
           {
            int digitN=tmpN%10;
            if (digitN==digitX)
            {
                number=true;
            }
            tmpN/=10;
           }
           if (number)
           {
            break;
           }
           tmpN=tmpNr;

        }
        if (!number)
        {
            maxNum=i;
            break;
        }
        
    }
       cout<<maxNum;
       return 0;
}