#include <iostream>
using namespace std;
int main(){

    int edin=0;
    int bekiroski=0;
    cin>>edin>>bekiroski;
    int sum=0;
    for (int i = edin; i < bekiroski; i++)
    {
        if (i%2==0)
        {
            sum+=i*i;
        }

    }
    cout<<"The sum is: "<<sum;


    return 0;

}
