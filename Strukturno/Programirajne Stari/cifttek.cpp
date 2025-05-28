#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter the number: "; cin >> a;
  /* logic */

while (a % 2 == 0 )
  {
    cout << "The given number is EVEN" << endl;
    return 0;
  } 

 while (a % 2 == 1)
  {
    cout << "The given number is ODD" << endl;
    return 0;
  }


  return 0;
}