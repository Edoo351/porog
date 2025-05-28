#include <iostream>
using namespace std;
int main(){
    
    int a,b;
    cin>>a>>b;
    int sum=0;
    for (int i = a; i < b; i++)
    {
        if (a%2==0)
        {
            sum+=i*i;
        }
        
    }
    cout<<"The sum is: "<<sum;
    
    
    return 0;

}