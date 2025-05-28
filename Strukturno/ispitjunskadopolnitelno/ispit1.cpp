#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome(char *s, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
bool special(char *s, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (!isalnum(s[i]))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    cin.ignore();
    char inputText[100];
    char longestText[100] = "";
    for (int i = 0; i < n; i++)
    {
        cin.getline(inputText, 100);
        const int len = strlen(inputText);
        if (isPalindrome(inputText, len) && special(inputText, len))
        {
            if (len > strlen(longestText))
            {
                strcpy(longestText, inputText);
            }
        }
    }

    if (strlen(longestText) == 0)
    {
        cout << "Nema!" << endl;
    }
    else{
    cout << longestText;
    }
    return 0;
}
