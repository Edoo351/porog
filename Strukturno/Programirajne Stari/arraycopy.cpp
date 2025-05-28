#include<iostream>
using namespace std;
int main(){
    int array[100];
    int array1[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    int tmp=n;
    for (int i = 0; i < n; i++)
    {
        array[i]=array1[n-1-i];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

