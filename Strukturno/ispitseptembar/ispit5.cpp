#include <cstring>
#include <iostream>
using namespace std;

int brojac(const char *text)
{
    int count = 0;
    int len = strlen(text);
    int pocetok = 0;
    for (int i = 0; i <= len; i++)
    {
        if (text[i] == ' ' || text[i] == ',' || text[i] == '.'||text[i]=='\0')
        {
            int zborpocetok =i-pocetok;
            if (zborpocetok <= 3 && zborpocetok > 0)
            {
                count++;
            }
           pocetok = i + 1;
        }
    }
    return count;
}

int main()
{

    char inputText[100];
    char maxText[100]="";
    int max = 0;
    while (cin.getline(inputText, 100))
    {
        int counter = brojac(inputText);
        if (counter > max)
        {
            strcpy(maxText, inputText);
            max = counter;
        }
    }

    cout << max << ": " << maxText << endl;
    return 0;
}
