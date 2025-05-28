#include <iostream>
using namespace std;

int main() {
    int number1,number2,minuts,price,secondprice,total;
    total=0;
    secondprice=2;
    cout<<"Number to dial"<<endl;
    cin>>number1>>number2;
    cout<<"Minutes for speaking"<<endl;
    cin>>minuts;
    number1=number1/1000000;
    number2=number2/1000000;
    if (minuts >=30)
    {
      price=secondprice;
    }
    else {
        price=3;
    }
    
    if (number1==071||number1==072||number1==073)
    {
        total=(minuts*price)*0.7;
    }
    else if (number2==074||number2==075||number2||076)
    {
        total=(minuts*price)*0.7;
    }
    else {
        total=minuts*price;
    }
    cout<<" Total Price Is "<<total<<endl;
    
    return 0;
}