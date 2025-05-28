#include <cctype>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char inputText[1000];
    char filter[1000];
    int numberCounter = 0;
    int filterIndex = 0;

    while (cin.getline(inputText, 1000)) {
        if (strchr(inputText, '#'))
        {
            break;
        }
        int numbers=0;
        char digits[100];
        int digitIndex=0;
        const int len=strlen(inputText);
        for (int i = 0; i < len; i++)
        {
            if (isdigit(inputText[i]))
            {
                numbers++;
                digits[digitIndex++]=inputText[i];
            }

        }
        sort(digits,digits+digitIndex);
        digits[digitIndex]='\0';

        cout<<numbers<<":"<<digits<<endl;
    }
    return 0;
}
