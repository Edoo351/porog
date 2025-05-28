#include <iostream>
#include <cmath>
using namespace std;
int findNum(int arr,int k){
    int maxNum=0;//max num eshte per ti rujt numrat me tmadh se k
    int multiplaer=1;//eshte per tu zmadhu array per nje vend
    while (arr>0)
    {
        int digit=arr%10;
        if (digit>k)
        {
            maxNum+=digit*multiplaer;
            multiplaer*=10;
        }
        arr/=10;
    }
    return maxNum;
}
int findMaxArr(int arr[],int N,int k){
    int maxarr=0;
    //bejm memorie per te i krahasu me funksionin
    for (int i = 0; i < N; i++)
    {
        int findmax=findNum(arr[i],k);
        //nese findmax eshte me i vogel te e ndroje at ne memorie me ate qe eshte me tmadh
        if (maxarr<findmax)
        {
            maxarr=findmax;
        }

    }
    return maxarr;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
       cin>>arr[i];
    }
    int k;
    cin>>k;
    int maxArr=findMaxArr(arr,N,k);
    cout<<maxArr<<endl;
    return 0;
}
