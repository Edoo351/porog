#include <iostream>
using namespace std;
int main(){
    int N, n, array[100],counter=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>n;
        counter=0;
        if(n%2==1) counter++;
        for(int j=0; j<n; j++){
            cin>>array[j];
        }
        for(int j=0, end=n-1; j<n/2; j++, end--){
            if(array[j]==array[end]){
                counter+=2;
            }
        }
        double procent=(counter*100.0)/n;
        cout<<procent<<"%"<<endl;

    }
}