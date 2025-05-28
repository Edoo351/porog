
#include <iostream>
using namespace std;
int main() {
bool k;
int n, x=0,i,j;
cin>> n;
 for (i = 1; i < n; i++)
{
k = true;
for (j = 2; j <= i / 2; j++)
      if (i % j == 0)
         k = false;
if (k)
     {
      cout << i << endl;
       x++; }
}
cout << "\n Total " << x << " prim numbers\n";
return(0);

return 0;
}