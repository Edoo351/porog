/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). 
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), 
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.*/
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int mildNumber=-1;
    bool mild;
    for (int i = m; i <= n; i++)
    {
        mild=true;
        int number=i;
        while (number>0)
        {
            int digit=number%10;
            if (digit%2!=0)
            {
                mild=false;
                break;
            }
            number/=10;
        }
        if (mild)
        {
            mildNumber=i;
            break;
        }
        

    }
    if (mildNumber!=-1)
    {
        cout<<mildNumber<<endl;
    }
    else{
        cout<<"NE"<<endl;
    }
    return 0;
}