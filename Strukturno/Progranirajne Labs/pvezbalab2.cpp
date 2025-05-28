#include "iostream"
using namespace std;
int numOfDigits(int number){
    int counter = 0;
    while(number>0){
        ++counter;
        number/=10;

    }
    return counter;

}
int main(){
    int x, n;
    cin>>x;
    while(cin>>n){
        if(numOfDigits(x)== numOfDigits(n)){
            cout<<n;
        }
    }
    return 0;
}