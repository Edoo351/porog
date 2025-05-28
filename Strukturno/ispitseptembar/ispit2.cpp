#include <iostream>
using namespace std;

int mostSegnificantDigit(int num){
    while (num>=10)
    {
        num/=10;
    }
    return num;
}

int main(){
    while (true)
    {
        int N;
        cin>>N;
        if (N==0)
        {
        break;

        }
        int numbers[100];
        for (int i = 0; i < N; i++)
        {
            cin>>numbers[i];
        }
        int maxDigit=-1;
        int resut=0;
        for (int i = 0; i < N; i++)
        {
        int digit=mostSegnificantDigit(numbers[i]);
        if (digit>maxDigit)
        {
            maxDigit=digit;
            resut=numbers[i];
        }

        }
        cout<<resut;

    }


    return 0;
}
