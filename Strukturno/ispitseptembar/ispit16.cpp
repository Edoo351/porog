#include <iostream>
using namespace std;
int calculate(int a, int c){
    int counter=0;
    int position=0;
    int tmp=a;
    while (tmp>0)
    {
        if (tmp%10==c&&position%2!=0)
        {
            counter++;
        }
        position++;
        tmp/=10;
    }
    return counter;
}


void print (int a,int b, int c){
    if (calculate(a,c)>=calculate(b,c))
    {
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
}

int main(){
    int a , b , c ;
    while (cin>>a>>b>>c)
    {
        print(a,b,c);
    }

    return 0;
}
