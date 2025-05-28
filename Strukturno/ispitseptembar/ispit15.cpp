#include <cstring>
#include <iostream>
using namespace std;
int main()
{

    char inputText[200];
    while (cin.getline(inputText, 200))
    {
        const int n = strlen(inputText);
        for (int i = 0; i < n; i++)
        {
            if (isalpha(inputText[i]))
            {
                char lower = tolower(inputText[i]);
                char shift = lower + 3;
                if (shift > 'z')
                {
                    shift = 'a' + (shift - 'z' - 1);
                }
                cout << shift;
            }
            else
            {
                cout << inputText[i];
            }
        }
        cout<<endl;
    }
}
