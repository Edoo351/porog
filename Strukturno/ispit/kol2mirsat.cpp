#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int findIndexOfLetterInAlphabet(char *letter) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<strlen(alphabet);i++) {
        if(letter[0] == alphabet[i]) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char inputText[200];
    cin.getline(inputText, 200);
    for(int j=0;j<strlen(inputText);j++) {
        cout<<alphabet[findIndexOfLetterInAlphabet(&inputText[j]) + 3];
    }

    return 0;
}
