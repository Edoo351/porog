#include <iostream>
using namespace std;
int main(){
    int array[100];
    int size=0;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i]%2==0)
        {
            array[i]=array[i]+array[i-1];
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}