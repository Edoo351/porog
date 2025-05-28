#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    int n=0;
    int x=0;
    cin>>n>>x;
    cin.ignore();
    for (int i = 0; i <= n; i++)
    {
        char inputText[80];
        cin.getline(inputText,80);
        for (int j = 0; j < strlen(inputText); j++){
         if(isalpha(inputText[j]))
        {
            char base=isupper(inputText[j]) ? 'A':'a';
            int alphabetSize=26;
            char shiftedChar=(inputText[j]-base +x)%alphabetSize+base;
            cout<<shiftedChar;

        }
        else{
            cout<<inputText[j];
        }
        }
        cout<<endl;
    }
    return 0;
}
