#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

double counter(char* inputText){
    int digit=0;
    int letter=0;
    for (int i = 0; i < strlen(inputText); i++)
    {
        if (isdigit(inputText[i]))
        {
            digit++;
        }
        else if (isalpha(inputText[i])){
            letter++;
        }
    }
    return digit/letter;
}

int main(){
    char inputText[100];
    char filter [100];
    int max=0;
    while (cin.getline(inputText,100))
    {
        int maxLine=counter(inputText);

        if (maxLine>max)
        {
            maxLine=0;
            strcpy(filter,inputText);
        }

    }
    cout<<filter<<endl;

    return 0;
}
