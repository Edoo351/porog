#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char str[200];
    while (cin.getline(str, 200))
    {
        const int n = strlen(str);
        for (int i = 0; i < n; i++)
        {
            if (isalpha(str[i]))
            {
                char lower = tolower(str[i]);
                char code = lower + 3;
                if (code > 74)
                {
                    code = 'a' + (code - 'z' - 1);
                }
                cout << code;
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
}
