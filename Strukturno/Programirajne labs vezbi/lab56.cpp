#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int cift=0;
    int tek=0;

    for (int i = a+1; i <= b; i++)
    {
        if (i%2==0&&i%7==0)
        {
            cout<<i<<endl;
            cift++;
        }
        else if (i%2!=0&&i%3!=0)
        {
            cout<<i<<endl;
            tek++;
        }
    }
    if (cift==0&&tek==0)
    {
        cout<<"0";
    }else{
        int total=b-a;
        float precent=static_cast<float>((cift+tek)*100)/total;
        cout<<precent<<"%";
    }
    
    return 0;
}