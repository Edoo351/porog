#include <iostream>
using namespace std;

int main()
{
    int otcenka;
    cin>>otcenka;
    if (otcenka<=49)
    {
      cout<<"Vie ne ste polozile na ispit potrudetese podobro slednata sesija"<<endl;
    }
    
     else if (otcenka<=50)
    {
        cout<<"vie imate otcenka 5";
    }
    else if(otcenka<=60)
       {cout<<"vie imate 6ka";
    }
    else if(otcenka<=70)
       {cout<<"vie imate 7ka";}
    
    else if(otcenka<=80)
       {cout<<"vie imate 8ka";} 
    
    else if(otcenka<=90)
       {cout<<"vie imate 9ka";} 
    
    else if (otcenka<=100)
       {cout<<"vie imate 10ka";} 
    
    
    
    return 0;

}