#include <iostream>
using namespace std;

int main()
{ 
    int n, max(0);
    cin >> n;
    while (!cin.fail()){
        int print=n, sum=max;
        max = 0;
        while (n!=0)
        {
            if (n%10 >max)
            {
                max= n%10;
            }
            sum+= n%10;
            n/=10;
        }
        cout<<print<<";"<<sum<<endl;
        cin>>n;
    }
    return 0;
}