#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    char inputText[31];
    bool flag;
    while (!cin.eof())
    {
        cin.getline(inputText,30);
        flag=false;
        int len=strlen(inputText);
        for (int i = 0,j= len-1; i < strlen(inputText)/2; i++,j--)
        {

            char a=tolower(inputText[i]);
            char b= tolower(inputText[j]);
            if (a!=b&& ((a=='a'||a=='e'||a=='i'||a=='o'||a=='u')||(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')))
            {
               flag=true;
               break;
            }


        }
       if (flag==false)
       {
        cout<<inputText<<endl;
       }


    }


    return 0;
}
