#include <iostream>
using namespace std;
int cmp(int a ,int b){
    int tmp=b;
    int counter=0;
    int position=1;
    while (tmp>0)
    {
        if (position%2==0&&tmp%10==a)
        {
            counter++;
        }
        tmp/=10;
        position++;
    }
    return counter;
}
void printMax(int a,int b,int c){
    if (cmp(a,b)>=cmp(a,c))
    {
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }

}
int main(){
    int a,b,c;
    while (cin>>a>>b>>c)
    {
        printMax(a,b,c);
    }

    return 0;
}
