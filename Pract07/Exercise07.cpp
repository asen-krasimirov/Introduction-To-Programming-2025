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
void sum2Matrixes(int matrix1[][COLS], int matrix2[][COLS], int userRows, int userCols)
{
	for (int i = 0; i < userRows; i++)
	{
		for (int j = 0; j < userCols; j++)
		{
			cout << matrix1[i][j] + matrix2[i][j] << " ";
		}
		cout << endl;
	}
}
void scalarMatrix(int matrix[][COLS], int scalar, int userRows, int userCols)
{
	for (int i = 0; i < userRows; i++)
	{
		for (int j = 0; j < userCols; j++)
		{
			cout << (scalar)*(matrix[i][j])<< " ";
		}
		cout << endl;
	}
}
int main()
{
	int matrix1[ROWS][COLS];
	int matrix2[ROWS][COLS];
	int userRows, userCols;
	cin >> userRows >> userCols;
	fillMatrix(matrix1, userRows, userCols);
	fillMatrix(matrix2, userRows, userCols);
	cout << endl;
	sum2Matrixes(matrix1, matrix2, userRows, userCols);
	cout << endl;
	int scalar;
	cin >> scalar;
	scalarMatrix(matrix1, scalar, userRows, userCols);
}
