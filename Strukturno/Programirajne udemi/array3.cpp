#include <iostream>
using namespace std;
int main ()
{
    int array [100];
    int size=0;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    
    float sum=0;
    float average=0;


    for (int i = 0; i < size; i++)
    {
        sum+=array[i];
    }
    average=(float)(sum/size);
    cout<<"Average is "<<average<<endl;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>average)
        {
            cout<<"1 ";
        } else if (array[i] == average){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }
    
    return 0;
}