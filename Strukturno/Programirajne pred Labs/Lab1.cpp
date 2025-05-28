#include<iostream>


using namespace std;


int main() {
  int array[100];
    int size=0;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    int array1[100];
    int size1=0;
    cin>>size1;
    for (int i = 0; i < size1; i++)
    {
        cin>>array1[i];
    }
     for (int i = 0,j=0; i < size|| j<size1; i++ ,j++) {
             if (i!=size)
             {
                cout<<array[i]<<" ";
             } 
              if (j!=size1)
              {
                cout << array1[j] << " ";
              }
            
        }
     return 0;
    }
    
    