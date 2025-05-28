#include <iostream>
#include <string>
using namespace std;
int main()
{
   char x;
   string num;
   cin>>x>>num;
   int dolzina = num.length();
   for (int i = 0; i < dolzina/2; i++)
   {
    swap(num[i],num[dolzina -i -1]);
   }
   for (int i = 0; i < dolzina; i+=2)
   {
        num[i]=x;
   }
   
    cout<<num;
    return 0;
}