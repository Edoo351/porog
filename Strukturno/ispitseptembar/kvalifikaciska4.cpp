#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i = 9999; i >=0 ; i--)
    {
        if (i%127==0&&i%2!=0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<endl;
    cout<<sum<<endl;
    return 0;
}
