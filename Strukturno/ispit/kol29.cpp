#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
bool isPalindrome(const char* inputText){
    int low=0;
    char vovels[30];
    for (int i=0;i<strlen(inputText);i++)
{
    char lowerch=tolower(inputText[i]);
    if (lowerch == 'a' || lowerch == 'e' || lowerch == 'i' || lowerch == 'o' || lowerch == 'u')
    {
        strcpy(vovels[i],lowerch);
    }
}
 int high = strlen(vovels);
    while (low<high)
    {
      if (vovels[low]!=vovels[high])
      {
        return false;
      }
        low++;
        high--;
    }
    return true;

}
int main(){
    char inputText[30];
   while ( cin.getline(inputText,30))
   {
        if (isPalindrome(inputText))
        {
            cout<<inputText;
        }

   }





}
