#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxZbir=0;
    int brojSONajgolemZbir=0;
    for (int i = 1; i < n; i++)
    {
        int zbir=1;
        for (int j = 2; i < i/2; j++)
        {
            if (i%j==0)
            {
                zbir+=j;
            }
            
        }
        if (zbir>maxZbir)
        {
            maxZbir=zbir;
            brojSONajgolemZbir=i;
        }
        
    }
    cout<<brojSONajgolemZbir;
    return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxZbir=0;
    int brojSoNajgolemZbir=0;
    for (int i = 1; i < n; i++)
    {
        int zbir=1;
        for (int j = 2; j <= i /2; j++)
        {
            if (i%j==0)
            {
                zbir +=j;
            }
                
        }
        if (zbir>maxZbir)
        {
            maxZbir=zbir;
            brojSoNajgolemZbir=i;
        }
        
    }
    cout<<brojSoNajgolemZbir<<endl;

}*/