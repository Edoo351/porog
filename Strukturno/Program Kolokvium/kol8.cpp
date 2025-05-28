#include <iostream>
using namespace std;
int main(){
    int broj,tmp,max,pozicija,brojac,a=0,b=0,c=0,d=0,e=0;
    while (cin>>broj)
    {
        tmp=broj;
        max=0;
        while (tmp)
        {
            tmp = broj;
        max = 0;
        brojac = 0;
        while (tmp) {
            if (tmp % 10 > max) {
                max = tmp % 10;
                pozicija = brojac;
            }
            brojac++;
            tmp = tmp / 10;
        }
}
        if (pozicija==0)
        {
            a++;
        }
        else if (pozicija==1)
        {
            b++;
        }
        else if (pozicija==2)
        {
            c++;
        }
        else if (pozicija==3)
        {
            d++;
        }
         else if (pozicija==4)
        {
            e++;
        }
    }
    cout<<"0: "<<a<<endl;
      cout<<"1: "<<b<<endl;
        cout<<"2: "<<c<<endl;
          cout<<"3: "<<d<<endl;
            cout<<"4: "<<e<<endl;
    return 0;
}