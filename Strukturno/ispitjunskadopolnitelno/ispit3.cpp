#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[100];
    int n;
    char find[4] = "A1c";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(inputText, 100);
        const int len = strlen(inputText);
        const int findlen = strlen(find);
        int counter = 0;
        for (int j = 0; j <= len - findlen; j++)
        {
            for (int k = 0; k < len; k++)
            {
                inputText[k] = tolower(inputText[k]);
            }
            for (int k = 0; k < findlen; k++)
            {
                find[k] = tolower(find[k]);
            }

            if (strncmp(&inputText[j], find, findlen) == 0)
            {
                counter++;
                j += findlen - 1;
            }
            if (counter >= 2)
            {
                cout << inputText << endl;
                break;
            }
        }
    }


    return 0;
}
