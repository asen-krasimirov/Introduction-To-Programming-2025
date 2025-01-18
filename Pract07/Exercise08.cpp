#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
void fillMatrix(int matrix[][COLS], int userRows, int userCols)
{
    for (int i = 0; i < userRows; i++)
    {
        for (int j = 0; j < userCols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void multiplyMatrices(int matrix1[][COLS], int matrix2[][COLS], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        cout << "You cannot multiply these matrices." << endl;
        return;
    }
    for (int m1rows = 0; m1rows < rows1; m1rows++)
    {
        for (int m2cols = 0; m2cols < cols2; m2cols++)
        {
            int sum = 0;
            for (int index = 0; index < cols1; index++)
            {
                sum = sum + (matrix1[m1rows][index] * matrix2[index][m2cols]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    
}
int main()
{
    cout << "Size of first matrix:";
    int rows1=0, cols1=0, rows2=0, cols2=0;
    cin >> rows1 >> cols1;
    cout << endl;
    cout << "Size of second matrix:";
    cin >> rows2 >> cols2; 
    cout << endl;
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    fillMatrix(matrix1, rows1, cols1);
    fillMatrix(matrix2, rows2, cols2);
    multiplyMatrices(matrix1, matrix2, rows1, cols1, rows2, cols2);
}
