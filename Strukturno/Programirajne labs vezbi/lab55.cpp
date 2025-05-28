#include <iostream>
using namespace std;

int main() {
    int a,sum=0,num;
    for (int i = 0; i < 7; i++)
    {
        cin>>num;
       sum=sum*10+num%10;
    }
    int num1;
    cin>>num1;
    int sum1=0;
    while (num1>=1&&num<=90)
    {
        sum=sum+num1;
        cin>>num1;
    }
    
      cout << sum << endl;
    return 0;
}