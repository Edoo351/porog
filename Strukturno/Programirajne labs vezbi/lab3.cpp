#include <iostream>
using namespace std;
int main (){
        int broj;
        cin>>broj;
        int sumParni = 0 ;
        int sumNeparni = 0 ;
        int broajc = 0;
        for (int i = 0; i <= broj; i++)
        {
            
            int cifri=broj%10;
            broj/=10;
            if (broajc%2==0)
            {
                sumParni+=cifri;
            }
            else{
                sumNeparni+=cifri;
            }
            broajc++;
        }
        cout <<"Parni Broevi"<<sumParni<<endl;
        cout <<"Neparni Broevi"<<sumNeparni;
    return 0;
}