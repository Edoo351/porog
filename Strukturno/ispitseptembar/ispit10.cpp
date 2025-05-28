#include <cstring>
#include <iostream>
using namespace std;

void transform(char *inputText, int x)
{
    if (*inputText == '\0')
    {
        return;
    }
    else if (isalpha(*inputText))
    {
        if (islower(*inputText))
        {
            *inputText = ((int)*inputText + x - 'a') % 26 + 'a';
        }
        if (isupper(*inputText))
        {
            *inputText = ((int)*inputText + x - 'A') % 26 + 'A';
        }
    }
    transform(inputText + 1, x);
}

int main()
{
    int N, X;
    char inputText[1000];
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        cin.getline(inputText, 1000);
        transform(inputText, X);
        cout << inputText << endl;
    }
}
