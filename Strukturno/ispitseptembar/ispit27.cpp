#include <cstring>
#include <iostream>
using namespace std;

double counter(char *inputText)
{
    const int len = strlen(inputText);
    double digits = 0;
    double letters = 0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit(inputText[i]))
        {
            digits++;
        }
        if (isalpha(inputText[i]))
        {
            letters++;
        }
    }
    if (letters == 0)
    {
        return 0;
    }

    return digits / letters;
}

int main()
{
    char inputText[100];
    double maxdigit = 0;
    char filter[100];
    while (cin.getline(inputText, 100))
    {
        double max = counter(inputText);
        if (max >= maxdigit)
        {
            strcpy(filter, inputText);
            maxdigit = max;
        }
    }
    cout << filter << endl;


    return 0;
}
