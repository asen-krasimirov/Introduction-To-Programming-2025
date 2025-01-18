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
void spiralPrint(int matrix[][COLS], int userRows, int userCols)
{
    //To see 
}
int main()
{
    int matrix[ROWS][COLS];
    int userRows, userCols;
    cin >> userRows >> userCols;
    fillMatrix(matrix, userRows, userCols);

}
