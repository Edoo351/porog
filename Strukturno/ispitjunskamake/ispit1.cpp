#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char inputText[100];
    int total = 0;
    while (cin.getline(inputText, 100))
    {
        const int len = strlen(inputText);
        for (int i = 0; i < len; i++)
        {
            if (inputText[i] == '#')
            {
                break;
            }
            tolower(inputText[i]);
            if (inputText[i] == 'a' || inputText[i] == 'e' || inputText[i] == 'i' || inputText[i] == 'o' ||
                inputText[i] == 'u')
            {
                if (inputText[i + 1] == 'a' || inputText[i + 1] == 'e' || inputText[i + 1] == 'i' ||
                    inputText[i + 1] == 'o' || inputText[i + 1] == 'u')
                {
                    cout << inputText[i];
                    cout << inputText[i + 1] << endl;
                    total++;
                }
            }
        }
    }
    cout << total;


    return 0;
}
