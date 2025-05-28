#include<iostream>
using namespace std;
void transformArr(int arr[],int n)
{
int i=0;
    while (i<n-1)
    {
        if (arr[i]==arr[i+1])
        {
            arr[i]=arr[i]*2;
            arr[i+1]=0;
            i++;
        }
        i++;
    }


}
void sortArr(int arr[],int n){
   int  index=0;
    for (int i = 0; i < n; i++)
    {
       if (arr[i]!=0)
       {
         swap(arr[i],arr[index]);
         index++;
       }

    }

}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


 for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
