#include <iostream>
using namespace std;

int maxPaliondrom(int a , int b)
{
    for (int i = b; i > a; i--)
    {
      int num=i;
      int reversed=0;
      while (num>0)
      {
       reversed=reversed*10+num%10;
       num/=10;
      }
        if (i==reversed)
        {
            return i;
        }
        
    }
    return -1;
}
int smallPalindron(int a,int b)
{
    for (int i = a; i < b; i++)
    {
      int num=i;
      int reversed=0;
      while (num>0)
      {
       reversed=reversed*10+num%10;
       num/=10;
      }
        if (i==reversed)
        {
            return i;
        }
        
    }
    return -1;
}

int main (){
    int a,b;
    cin>>a>>b;
    cout<<"Smallest Palindromic Number: "<< smallPalindron(a,b);
    cout<<endl;
   cout<<"Largest Palindromic Number: "<< maxPaliondrom(a,b);
    cout<<endl;
    return 0;
}