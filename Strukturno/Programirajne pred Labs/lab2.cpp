#include<iostream>


using namespace std;


int main() {
  int array[100];
    int size=0;
    int k=0;
    int counter=0;
    cin>>size;
    cin>>k;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
        if (array[i]==k)
        {
            counter++;
        }
        
    }
    cout<<endl;
    cout<<"Brojot "<<k<<" vo nizata se naojga "<<counter<<" pati "<<endl;

return 0;
}