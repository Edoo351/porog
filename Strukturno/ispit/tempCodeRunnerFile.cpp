#include<iostream>
using namespace std;
bool check(int arr[],int size){
    if (arr[0]%2!=0)
    {
        if (arr[size-1]%2==0)
        {
           return true;
        }

    }
 return false;
}
int main(){
    int N;
    cin>>N;
    bool found=false;
    int arr[100];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
 for (int i = 0; i < N; i++)
    {
       if (check(arr,N))
       {
        cout<<arr[i]<<" ";
        found=true;
       }
    }
    if (!found)
    {
       cout<<"No such elements!";
    }

    return 0;
}
