#include <iostream>
using namespace std;
int main() {
    int A, B;
    int sum = 0;

    // Marr Vlerat
    cout << "Vlera e a ";
    cin >> A;
    cout << "Vlera e b ";
    cin >> B;

    // me for i kontrolon krejt te mundshmet qe jan 
    for (int num = A; num < B; num++) {
      // me ket if kontrolohen a jane te ndarme me 2 
       if (num%2!=0)
       {
        /* code */
       }
       // ktu e shof a eshte dnahet me tre
       else if (num % 3 == 0) {
            sum += num;
        }
    }
    // Print the sum
    cout << "Prej a " << A << "deri ne b" << B << " eshte " << sum << endl;

    return 0;
}
