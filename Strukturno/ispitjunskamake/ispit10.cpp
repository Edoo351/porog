#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char z1;
    cin >> z1;
    char z2;
    cin >> z2;
    char inputText[100];
    bool prit;
    while (cin.getline(inputText, 100))
    {
        bool print = false;
        const int len = strlen(inputText);
        for (int i = 0; i < len; i++)
        {
            if (inputText[i] == '#')
            {
                return 0;
            }
            if (inputText[i] == z2)
            {
                print = false;
            }
            if (inputText[i] == z1)
            {
                print = true;
                continue;
            }
            if (print)
            {
                cout << inputText[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
