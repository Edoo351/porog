#include <iostream>
using namespace std;
int main(){
    int a, sum=0, c=0;
   for (int i = 0; i < 7; i++){
       cin >> a;
   
      if (c < 7)
      {
        sum= sum * 10;
        sum= sum + a % 10;
      c++;
      }
   }
   sum+=1;
    cout<< sum <<endl;
return 0;
}

/*#include <iostream>
using namespace std;

int main() {
    int a, sum = 0, c = 0;

    for (int i = 0; i < 7; i++) {
        cin >> a;
        
        if (c < 7) {
            sum = sum * 10;
            sum = sum + a % 10;
            c++;
        }
    }

    cout << sum << endl;

    return 0;
}*/