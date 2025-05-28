#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;
int main(){
    char inputText[80];
    while (cin.getline(inputText,80))
    {
        int sum=0;
        char tmp[80];
        for (int i = 0; i < strlen(inputText); i++)
        {
           if (isalpha(inputText[i]))
           {
            cout<<inputText[i];
            if (strlen(tmp)>0)
            {
                sum+=stoi(tmp);
                for(int j=0;j<strlen(tmp);j++) {
                    tmp[j] = '\0';
                }
            }

           }
           if (isdigit(inputText[i]))
           {
                strcat(tmp,&inputText[i]);
           }

        }
        if (strlen(tmp)>0)
        {
            sum+=atoi(tmp);
        }



        cout<<sum;


    }




    return 0;
}
