#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[100];
    int counter = 0;
    while (cin.getline(inputText, 100))
    {
        bool hex = true;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (!isxdigit(inputText[i]) || isspace(inputText[i]))
            {
                hex = false;
                break;
            }
        }


        if (hex)
        {
            counter++;
            for (int i = 0; i < strlen(inputText); i++)
            {
                inputText[i] = toupper(inputText[i]);
            }
            cout << inputText << endl;
        }
    }
    cout << "Total: " << counter << endl;

    return 0;
}
