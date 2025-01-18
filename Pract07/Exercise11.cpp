#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
void fillMatrix(int matrix[][COLS], int userRowsCols)
{
    for (int i = 0; i < userRowsCols; i++)
    {
        for (int j = 0; j < userRowsCols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
bool isMagicSquare(int matrix[][COLS], int userRowsCols)
{
    int sum = 0;
    for (int i = 0; i < userRowsCols; i++)
    {
        sum += matrix[0][i];
    }
    int tempSumRows = 0;
    int tempSumCols = 0;
    for (int i = 1; i < userRowsCols; i++)
    {
        for (int j = 0; j < userRowsCols; j++)
        {
            tempSumRows += matrix[i][j];
            tempSumCols += matrix[j][i];
        }
        if (tempSumRows != sum || tempSumCols != sum) return false;
        tempSumRows = 0;
        tempSumCols = 0;
    }
    int sum1Diagonal = 0;
    int sum2Diagonal = 0;
    for (int i = 0; i < userRowsCols; i++)
    {
        sum1Diagonal += matrix[i][i];
        sum2Diagonal += matrix[i][userRowsCols - i - 1];
    }
    if (sum1Diagonal != sum || sum2Diagonal != sum) return false;
    else return true;
}
int main()
{
    int matrix[ROWS][COLS];
    int userRowsCols;
    cin >> userRowsCols;
    fillMatrix(matrix, userRowsCols);
    if (isMagicSquare(matrix, userRowsCols)) cout << "yes" << endl;
    else cout << "no" << endl;
}