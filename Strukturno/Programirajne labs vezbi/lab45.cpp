#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;
    int xCount=0;
    while (x!=0)
    {
        x/=10;
        xCount++;
    }
    int b;
    while (cin>>b)
    {
        int bCount=0;
        int copyb=b;
        while (b!=0)
        {
            b/=10;
            bCount++;

        }
        if (bCount==xCount)
        {
            cout<<copyb<<endl;
        }
        
    }
    
    return 0;
}