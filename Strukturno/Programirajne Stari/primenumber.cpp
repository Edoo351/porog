#include <iostream>
using namespace std;
int main()
{
int i, j, n, x = 0;
 bool k;
 cout << "Enter a number ";
 cin >> n;
 cout << "Primе numbers smaller than " << n << " are\n";
for (i = 1; i < n; i++)
 {
 k = true;
 for (j = 2; j <= i / 2; j++)
 if (i % j == 0)
 k = false;
 if (k)
 {
 cout << i << endl;
 x++;
 }
 }
 cout << "\n Total " << x << " prim numbers\n";
 return(0);
}