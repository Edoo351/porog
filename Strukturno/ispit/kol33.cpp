#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin >> N;

    int matrix[N][N];

    // Input matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
   int tmp=0;
    int array[100]={0};
    for (int i = 0; i < N-1; i++)
    {
        array[tmp++]+=matrix[0][i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j+i==N-1)
            {
              array[tmp++]+=matrix[i][j];
            }

        }

    }

    for (int j = 1; j < N; j++)
    {
         array[tmp++]+=matrix[N-1][j];
    }

    for (int i = 0; i < tmp; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int array1[tmp];
     for (int i = 0; i < tmp; i++) {
        array1[i] = array[tmp - 1 - i];
    }

    for (int i = 0; i < tmp; i++) {
        cout << array1[i] << " ";
    }
    cout<<endl;
   int tmp1=0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j+i==N-1)
            {
                matrix[i][j]=array1[tmp1++];
            }
            if (i>=0&&i<N)
            {
               matrix[i][j]=array1[tmp1++];
            }
            if (j>1&&j<N)
            {
              matrix[i][j]=array1[tmp1++];
            }

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
