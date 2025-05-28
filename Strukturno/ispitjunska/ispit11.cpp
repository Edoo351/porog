#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char inputText[100];
    cin.getline(inputText, 100);
    char firstNumber = '\0';
    char secondNumber = '\0';
    bool stopPrint = false;
    for (int i = 0; inputText[i] != '\0' && !stopPrint; i++)
    {
        if (isdigit(inputText[i]))
        {
            if (firstNumber == '\0')
            {
                firstNumber = inputText[i];
            }
            else if (secondNumber == '\0' && firstNumber != '\0')
            {
                secondNumber = inputText[i];
            }
        }
        if (firstNumber != '\0')
        {
            cout << inputText[i];
        }
        else if (secondNumber != '\0' && inputText[i] == secondNumber)
        {
            stopPrint = true;
        }
    }
    if (firstNumber == '\0')
    {
        cout << "No digits" << endl;
    }


    return 0;
}
