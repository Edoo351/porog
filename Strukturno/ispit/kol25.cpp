#include<iostream>
using namespace std;
int main(){
    int mA[100][100];
    int mB[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mA[i][j];
        }

    }
      for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mB[i][j]=mA[i][j];
        }

    }
     for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int counter=0;
            if (mA[i+1][j]==1)
            {
               counter++;
            }
            if (mA[i][j+1]==1)
            {
                counter++;
            }
            if (mA[i-1][j]==1)
            {
                counter++;
            }
            if (mA[i][j-1]==1)
            {
               counter++;
            }
            if (counter>=3)
            {
                mB[i][j]=1;
            }

        }

    }
 for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mB[i][j];
        }
        cout<<endl;
    }

    return 0;
}
