#include <iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    bool ediniciParenBroj=false;
    int desetki=0;
    int edinici=0;
    int stotki=0;
    edinici=edinici*10 + a%10;
    a/=10;
    desetki=desetki*10 + a%10;
    a/=10;
    stotki=stotki*10 + a%10;
    cout<<"Vrednosta na stotki, desetki i edinici e: "<<stotki<<","<<desetki<<","<<edinici<<endl;
    if (edinici%2==0)
    {
        ediniciParenBroj=true;
    }
    cout<<"Vredonsta na promenlivata ediniciParenBroj e " << ediniciParenBroj<<endl;
    return 0;
}