#include <iostream>
using namespace std;
int main (){
    long int a,b,min;
    cin>>a>>b>>min;
    float total=0;
    float total1=0;
    int price=3;
    int price1=2;
    a=a/1000000;
    b=b/1000000;
    bool cena=true;
   for (int i = 0; i < min ; i++)
   {
    if (min<=30)
    {   
         total=total+price;

    }
    else{
        total1=total1+price1;
    }
   }
   
   
    // if (min<=30)
    // {
    //     total=price*min;
    // }
    // else { 
    //     total=price1*min;
    // }
    float total3=total+total1;
    if (a==71||a==72||a==73&&b==71||b==72||b==73)
    {
        total3=total3*0.7;
    }
    else if (a==74||a==75||a==76&&b==74||b==75||b==76)
    {
        total3=total3*0.7;
    }
    

   cout<<total3;
    
    return 0;
}