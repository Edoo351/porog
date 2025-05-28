#include <iostream>
#include<cmath>
using namespace std;

int reverse(int number) {
    int savenumber=0;

     int reversedNum;
     while (number>0)
     {
        savenumber=savenumber*10+number%10;
        number/=10;
     }
     

    return savenumber;
}

bool isPalindrom (int number) {
    int reverseNumber = reverse(number);


    std::cout << "Original number: " << number << std::endl;
    std::cout << "Reversed number: " << reverseNumber << std::endl;

    return (number == reverseNumber);

}




int findLargest(int start, int end) {

    for (int i = end; i >= start; i--){
           if(isPalindrom(i)){
                cout << i << endl;
                return i;
           }

    }

    return 0;
}


int main(){

    int a,b;

    cin >> a >> b;

    int largest = 0;
    largest = findLargest(a, b);


    cout << "Largest Palindrom is: " << largest;
    return 0;
}