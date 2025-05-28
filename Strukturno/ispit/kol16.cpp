#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    int counter=0;
    char inputText[21];
    while (cin.getline(inputText,20))
    {
        if (!cin) {
            cin.clear(); // Clear the error flag
            cin.ignore(20, '\n'); // Ignore the rest of the line up to a large number of characters
        }
      bool isHex=true;
      for (int i = 0; i < strlen(inputText); i++)
      {
          if (!isxdigit(inputText[i]))
          {
            isHex=false;
            break;
          }
      }
      if (isHex)
      {
        counter++;
        for (int j = 0; j < strlen(inputText); j++)
        {
          cout<<char(toupper(inputText[j]));
        } cout<<endl;
      }

    }
    cout<<"Total: "<<counter;
    return 0;
}
