#include <iostream>
using namespace std;
int main (){
     float appels,rasperis,bananas;
     int karticka;
     cin>>appels>>rasperis>>bananas;
    cin>>karticka;
     float appelsprice=30;
     float rasperisprice=50;
     float bananasprice=40;
       float price=0;
     if (appels<=200)
     {
        price=price+((appels/100)*appelsprice)*0.7;
     }
       else if (appels>=500)
     {
        price=price+((appels/100)*appelsprice)*0.5;
     }
     if (rasperis<=200)
     {
        price=price+((rasperis/100)*rasperisprice)*0.7;
     }
    else if (rasperis>=500)
     {
        price=price+((rasperis/100)*rasperisprice)*0.5;
     }
     if (bananas<=200)
     {
        price=price+((bananas/100)*bananasprice)*0.7;
     }
    else if (bananas>=500)
     {
        price=price+((bananas/100)*bananasprice)*0.5;
     }
    if (karticka==1)
    {
        price=price-140;
    }
    
    cout<<price<<endl;
     
    return 0;
}