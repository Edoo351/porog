#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int maxsum=-1;
    int maxnum=-1;
   for (int i = 0; i < n; i++)
   {
    int number;
    cin>>number;
    int digits =(number/100)+((number/10)%10)+(number%10);
    if (digits%2==0&&digits>maxsum)
    {
        maxsum=digits;
        maxnum=number;
    }
    
   }
   if (maxnum!=-1)
   {
    cout<<maxnum;
   }
   
    
 
    return 0;
}