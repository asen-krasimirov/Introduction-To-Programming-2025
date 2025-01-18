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
void firstDiagonal(int matrix[][COLS], int userRowsCols)
{
	for (int i = 0; i < userRowsCols; i++)
	{
		cout << matrix[i][i] << " ";
	}
	cout << endl;
}
void secondDiagonal(int matrix[][COLS], int userRowsCols)
{
	for (int i = 0; i < userRowsCols; i++)
	{
		cout << matrix[i][userRowsCols - i-1] << " ";
	}
	cout << endl;
}
int main()
{
	int matrix[ROWS][COLS];
	int userRowsCols;
	cin >> userRowsCols;
	fillMatrix(matrix, userRowsCols);
	firstDiagonal(matrix, userRowsCols);
	secondDiagonal(matrix, userRowsCols);
}
