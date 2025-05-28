#include <iostream>
using namespace std;
int main(){
  char op = '+';
  int number, solution = 0;
  do
  {
     cin>>op;
     cin >> number;
     switch(op){
       case '+': solution += number; break;
       case '-': solution -= number; break;
       case '*': solution *= number; break;
       case '/': solution /= number; break;
} }
while((op = cin.get()) != '=');
cout << "The solution is " << solution; return 0;
}






