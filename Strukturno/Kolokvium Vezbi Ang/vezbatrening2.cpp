#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<=9)
    {
        cout<<"Brojot ne e validen"<<endl;
    }
    for (int i = n-1; i >8; i--)
    {
        int digits=0;
        int reversedNum=0;
        int tmp=i;
        while (tmp>0)
        {
            reversedNum= reversedNum *10 + tmp%10;
            tmp /=10;
            digits++;
        }
        if (reversedNum%digits==0)
        {
            cout<<i<<endl;
            return 0;
        }
        
    }
    
    return 0;
}