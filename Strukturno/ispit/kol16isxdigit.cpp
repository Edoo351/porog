#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    bool simbol=true;
    int counter=0;
    char inputText[20];
   while (cin.getline(inputText,20))
   {
        cin.ignore();
      for (int i = 0; i < strlen(inputText); i++)
    {
        if (!isxdigit(inputText[i]))
        {
            simbol=false;
        }

        if (ispunct(inputText[i]))
        {
            simbol=false;
        }

    }
    if (simbol)
    {
        bool count=true;
    for (int i = 0; i < strlen(inputText); i++)
    {   char filter=toupper(inputText[i]);
        if(isxdigit(filter))
        {
          cout<<filter;
         if (count)
         {
            counter++;
            count=false;
         }
        }
    }
    cout<<endl;
    }
   }
    cout<<"Total: "<<counter;
    return 0;
}
