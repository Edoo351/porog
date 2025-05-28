#include <iostream>

using namespace std;

void printInInterval(float k, float o) {
    for (int i = k; i <= o; ++i) {
        float sumaBroj = sumDigits(i);
       
       
        float obratenBroj = reverseNumber(sumataNaBroj);

        if (reversedSum % digitSum == 0) {
            cout << i << endl;
       
       
        }
    }
}

float sumDigits(float number) {
    float sumataNaBroj = 0;

    while (number > 0) {
        sumataNaBroj =sumataNaBroj+number % 10;
        number /= 10;
    }

    return sumataNaBroj;
}

float reverseNumber(float number) {
    float obratenBroj = 0;

    while (number > 0) {
        obratenBroj = obratenBroj * 10 + number % 10;
        
        
        number /= 10;
   
   
    }
   
   
    cout<<obratenBroj<<endl;
    return obratenBroj;
}


int main() {
    float k, o;
    cin >> k >> o;

    printInInterval(k, o);

    return 0;
}
