#include<iostream>
using namespace std;

int reverseNumber(int number)
{
    int tmp=0;
    while (number>0)
    {
        tmp=tmp*10+number%10;
        number/=10;
    }
    return tmp;
}

int sumOfDigits(int number){
    int tmp=0;
    while (number>0)
    {
          tmp=tmp+number%10;
    number/=10;
    }
    return tmp;
    
}

void printInterval(int a,int b){
    for (int i = a; i <= b; i++)
    {
        int reversed = reverseNumber(i);
        int sum = sumOfDigits (i);
        if (reversed % sum==0)
        {
            cout<<i<<endl;
        }
        
    }
    
}


int main(){
    int k,o;
    cin>>k>>o;
    printInterval(k,o);
    return 0;
}