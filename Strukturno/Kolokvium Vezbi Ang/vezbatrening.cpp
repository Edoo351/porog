#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxZbir=0;
    int brojSoNajgolemZbir=0;
    for (int i = 1; i < n; i++)
    {
        int zbir=1;
        for (int j = 2; j < i/2; i++)
        {
            if (j%n==0)
            {
                    zbir+=j;
            }
            if (zbir>maxZbir)
            {
                zbir+=maxZbir;
                brojSoNajgolemZbir=i;
            }
            
        }   
        cout<<brojSoNajgolemZbir<<endl;
    }
    
    return 0;
}