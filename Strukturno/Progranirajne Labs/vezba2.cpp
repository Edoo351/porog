#include <iostream>
using namespace std;
int main()
{
   int vreme,pozicija;
   cin>>pozicija;
   vreme=0;
   for (size_t i = 0; i < count; i++)
   {
    /* code */
   }
   
   if (pozicija <=24)
   {
    vreme=pozicija*5;
   }
   else if (pozicija == 25 && pozicija <= 36)

   {
    vreme=(pozicija*5)+30; 
   }
   
    else if (pozicija <=37 && pozicija<=42)
    {
     vreme=(pozicija*5)+30; 
    }
    else if (pozicija==43 && pozicija <=48 )
    {
        vreme=(pozicija*5)+60; 
    }
    else if (pozicija==49 && pozicija<=73)
    {
        vreme=(pozicija*5)+60; 
    }
    else {
        cout<<"Studentot nema da bide usluzen "<<endl;
    }
    
    cout<<vreme/60<<"Sati treba da ceka i "<<vreme%60<<"minuti"<<endl;
    return 0;
}