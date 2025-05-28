#include <iostream>
using namespace std;
int main(){
    int arr[17];
    int n=17;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       if (i%2==0)
       {
        cout<<arr[i]<<" ";
       }

    }

    return 0;
}
