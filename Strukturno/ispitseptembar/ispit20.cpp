#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char inputText[100];
    cin.getline(inputText,100);
    char firstletter='\0';
    char secondletter='\0';
    bool print = false;
    for (int i = 0; inputText[i]!='\0'&& !print; i++)
    {
        if (isdigit(inputText[i]))
        {
            if (firstletter=='\0')
            {
                firstletter=inputText[i];
            }
            if (firstletter!='\0'&&secondletter=='\0')
            {
                secondletter=inputText[i];
            }

        }
        if (firstletter!='\0')
        {
            cout<<inputText[i];
        }
        if (secondletter!='\0'&&inputText[i]==secondletter)
        {
            print=true;
        }
    }
    if (firstletter=='\0')
    {
        cout<<"No digits";
    }

    return 0;
}
