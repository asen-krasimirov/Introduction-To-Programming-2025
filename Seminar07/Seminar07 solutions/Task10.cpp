#include <iostream>
using namespace std;

void rotate(int matrix[][20], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >= 0; j--)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void read(int matrix[][20], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    int matrix[20][20];
    int n, m;
    cin >> n;
    cin >> m;
    read(matrix, n, m);
    rotate(matrix, n, m);
}