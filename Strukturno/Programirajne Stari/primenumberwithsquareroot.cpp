#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int i, j, n, x = 0;
 bool k;
 cout << "Enter a number ";
 cin >> n;
 cout << "Prime numbers smaller than " << n << " are\n";
for (i = 1; i < n; i+=2)
 {
 for (k = true, j = 2; (k = i % j) && j <= sqrt(i); j++);
 if (k)
 {
 cout << i << endl;
 x++;
 }
 }
 cout << "\n Total " << x << " prim numbers\n";
 return(0);
    

}