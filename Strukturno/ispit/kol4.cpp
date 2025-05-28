#include <iostream>
using namespace std;

int compare(int num, int c) {
    int tmp = num;
    int counter = 0;
    int position=1;
    while (tmp > 0) {
        if ( position%2==0 && tmp%10 == c) {
            counter++;
        }
        tmp /= 10;
        position++;
      
    }
    return counter;
}

void printMax(int a, int b, int c) {
    if (compare(a, c) >= compare(b, c)) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
}

int main() {
    int a, b, c;
 while( cin >> a >> b >> c){
            printMax(a, b, c);
  
 }
    return 0;
}
