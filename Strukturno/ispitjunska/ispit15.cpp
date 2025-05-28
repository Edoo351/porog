#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char text[1010];
    char filter[1010];
    while (cin.getline(text, 1000))
    {
        int j = 0;
        bool shkrojne = false;
        for (int i = 0; i < strlen(text); i++)
        {
            if (isalpha(text[i]))
            {
                filter[j] = text[i];
                j++;
                shkrojne = true;
            }
            if (isspace(text[i]))
            {
                if (j > 0 && !isspace(filter[j - 1]))
                {
                    filter[j] = text[i];
                    j++;
                }
            }
        }
        filter[j] = '\0';
        if (shkrojne)
        {
            for (int i = 0; i < strlen(filter); i++)
            {
                cout << filter[i];
                if (isspace(filter[i]))
                {
                    cout << endl;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
