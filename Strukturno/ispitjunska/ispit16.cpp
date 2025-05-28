#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char inputText[20];
    int total = 0;
    while (cin.getline(inputText, 20))
    {
        bool hex = true;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (!isxdigit(inputText[i]))
            {
                hex = false;
                break;
            }
        }

        if (hex)
        {
            for (int i = 0; i < strlen(inputText); i++)
            {
                inputText[i] = toupper(inputText[i]);
            }
            cout << inputText << endl;
            total++;
            cout << endl;
        }
    }
    cout << "Total: " << total;
    return 0;
}
