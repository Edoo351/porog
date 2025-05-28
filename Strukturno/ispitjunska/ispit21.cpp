#include<iostream>
#include<algorithm>
using namespace std;
int transformArray(int arr[],int start,int end){
    // kur vjen ne midis te array atheres te mbaroj
    if (start>=end)
    {
        return 0;
    }
    int stwiches=0;
    int maxValue=max(arr[start],arr[end]);
    // max eshte kur prej filimi niset dhe i shof cili eshte me i madh a starti a end
    // dhe nese eshte starti hyn ke if i pare dhe changes ++
    if (arr[start]!=maxValue)
    {
        arr[start]=maxValue;
        stwiches++;
    }
     if (arr[end]!=maxValue)
    {
        arr[end]=maxValue;
        stwiches++;
    }
    return stwiches + transformArray(arr,start + 1 ,end - 1);
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    int stwiches=transformArray(arr,0,N-1);
    cout<<stwiches<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
