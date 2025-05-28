#include <cstring>
#include <iostream>
using namespace std;

void transform(char *text, int x)
{
    if (*text=='\0')
    {
        return ;
    }
    if (isalpha(*text))
    {
        if (islower(*text))
        {
            *text = ((int)*text + x - 'a') %26 + 'a';
        }
         if (isupper(*text))
        {
            *text = ((int)*text + x - 'A') %26 + 'A';
        }
    }

    transform(text + 1, x);
}

int main()
{
    int n, x;
    cin >> n >> x;
    char text[100];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(text, 100);
        transform(text, x);
        cout << text << endl;
    }


    return 0;
}
