#include<iostream>
using namespace std;

int reverse(int number)
{
    int tmp=0;
    while (number>0)
    {
        tmp=tmp*10+number%10;
        number/=10;

    }
    return tmp;
}

bool isPalindron (int number)
{
    int reversedNum=reverse(number);

    return (number==reversedNum);
}

int findLargestPalindron(int start,int end)
{
    for (int i = end; i >= start; i--)
    {
        if (isPalindron(i))
        {
            return i;
        }
        
    }
    
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int largest=0;
    largest=findLargestPalindron(a,b);
    cout<<"Largest Poindrom is "<<largest<<endl;
    return 0;
}