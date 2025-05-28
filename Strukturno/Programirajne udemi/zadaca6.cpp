#include<iostream>
using namespace std;


int countOccurence(int number,int digit)
{
    int brojac=0;
    while (number>0)
    {
       
        if (number%10==digit)
        {
            brojac++;
       
       
        }
      
        number/=10;
    }
    return brojac;
}

int main(){
    
    int m,n,p;
    cin>>m>>n>>p;
  
   int  brojac=0;
     
      int mbroj=m+1; 
   while (brojac<10)
   {
    if (countOccurence(mbroj,n)==p)
    {
     
        cout<<mbroj<<endl;
        brojac++;
    }
    mbroj++;
   }
    return 0;
}