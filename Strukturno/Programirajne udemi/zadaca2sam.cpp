#include <iostream>
#include<cmath>
using namespace std;

int absolute_diff(int a,int b,int c)
{
   return abs(a-b)+(b-c);


}



int main(){
    int n;
    cin>>n;
        float largest=10000000;
    for (int i = 0; i <n ; i++)
    {
        float first,second,third;
        float sum=0;
        cin>>first>>second>>third;
        sum=absolute_diff(first ,second, third);
        if (sum<largest)
        {
            largest=sum;

        }
        
    }
    cout<<largest<<endl;
    return 0;
}