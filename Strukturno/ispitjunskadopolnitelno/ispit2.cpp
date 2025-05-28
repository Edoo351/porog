#include <iostream>
using namespace std;
int main()
{
    int matrix[400][400];
    int n;
    cin >> n;
    int counter = 0;
    int counter1=0;
    while (counter * counter < n)
    {
        counter++;

    }
    int row=0;
    int col=0;
    bool down=true;
    for (int i = 1; i <= n; i++)
    {
        matrix[row][col]=i;

        if(down){
            row++;
        }
        else{
            row--;
        }
        if (row==counter)
        {
            down=false;
            col++;
            row--;
        }
        else if (row>0)
        {
            down=true;
            row++;
            col++;
        }



    }

    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
