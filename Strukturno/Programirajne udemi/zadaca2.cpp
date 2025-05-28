#include <iostream>
#include<cmath>
using namespace std;

float calculateAbsoluteSum(float first, float secound, float third){

   return abs(first-secound)+ abs(secound-third);
}


int main(){
    int n;

    cin >> n;


    int lowerSum = 1000000000;
    for(float i =0; i<n; i++){
        float first, secound, third;
        float sum = 0;
        cin >> first >> secound >> third;


        sum = calculateAbsoluteSum(first, secound, third);


        if(sum <= lowerSum){
            lowerSum = sum;
        }

    }


    cout<<lowerSum<<endl;

    return 0;
}