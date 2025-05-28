#include<iostream>
using namespace std;
int main(){
    int n=17;
    int sum=0;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
     cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>0)
       {
        sum+=arr[i];
       }

    }
    cout<<sum;
    return 0;
}
