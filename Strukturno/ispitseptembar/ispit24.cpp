#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[1000];
    char filter[1000];
    bool space;
    while (cin.getline(inputText, 1000))
    {

        const int len = strlen(inputText);
        for (int i = 0; i < len; i++)
        {
            space = false;
            if (isalpha(inputText[i]))
            {
                cout << inputText[i];
            }
            if (isalpha(inputText[i - 1]))
            {
                space = true;
            }
            if (isalnum(inputText[i + 1]) && space)
            {
                cout << endl;
            }

            if (isspace(inputText[i]) && space)
            {
                cout << endl;
            }
        }
    }


    return 0;
}
