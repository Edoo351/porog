#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
     char inputText[100];
    int k=0;
    cin>>k;
    cin.ignore();
    cin.getline(inputText,100);
    for (int i = 0; i <strlen(inputText); i++)
    {
        char standart = tolower(inputText[i]);
        if (standart=='a'||standart=='e'||standart=='i'||standart=='o'||standart=='u')
        {
           for (int j = 0; j < k; j++)
           {
            cout<<inputText[i];
           }

        }
        else{
            cout<<inputText[i];
        }
    }

}
