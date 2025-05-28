#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[100];
    char filter[100];
    int digits = 0;
    int inputLen = 0;
    while (cin.getline(inputText, 100))
    {

        int len = strlen(inputText);
        int digit = 0;
        for (int i = 0; i < len; i++)
        {
            if (inputText[i] == '0')
            {
                break;
            }
            if (isdigit(inputText[i]))
            {
                digit++;
            }
        }
        if (digit > 2 && len >= inputLen)
        {
            digits = digit;
            inputLen = len;
            strcpy(filter, inputText);
        }
    }
    bool print = false;
    bool stop = true;
    int stopdigit = 0;
    for (int i = 0; i < strlen(filter); i++)
    {
        if (isdigit(filter[i]))
        {
            print = true;
            stopdigit++;
        }
        if (isdigit(filter[i]) && stopdigit == digits)
        {
            stop = false;
        }
        if (print)
        {
            cout << filter[i];
        }
        if (stop)
        {
            return 0;
        }
    }
}
