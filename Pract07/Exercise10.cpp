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
void transponeMatrix(int matrix[][COLS], int userRows, int userCols)
{
    for (int i = 0; i < userCols; i++)
    {
        for (int j = userRows - 1; j >= 0; j--)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int matrix[ROWS][COLS];
    int userRows, userCols;
    cin >> userRows >> userCols;
    fillMatrix(matrix, userRows, userCols);
    transponeMatrix(matrix, userRows, userCols);
}
