#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[1000];
    int k;
    cin >> k;
    while (cin.getline(inputText, 1000))
    {
        const int len = strlen(inputText);
        for (int i = 0; i < len; i++)
        {
            if (inputText[i] == 'a' || inputText[i] == 'e' || inputText[i] == 'i' || inputText[i] == 'o' ||
                inputText[i] == 'u' || inputText[i] == 'A' || inputText[i] == 'E' || inputText[i] == 'I' ||
                inputText[i] == 'O' || inputText[i] == 'U')
            {
                for (int j = 0; j < k; j++)
                {
                    cout << inputText[i];
                }
            }
            else
            {
                cout << inputText[i];
            }
        }
    }

    return 0;
}
