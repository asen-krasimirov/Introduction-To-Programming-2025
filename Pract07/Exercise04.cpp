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
bool isTriangularMatrix(int matrix[][COLS], int userRowsCols)
{
	for (int i = 1; i < userRowsCols; i++)
	{
		for (int j = 0; j <i; j++)
		{
			if (matrix[i][j] != 0) return false;
		}
	}
	return true;
}
int main()
{
	int matrix[ROWS][COLS];
	int userRowsCols;
	cin >> userRowsCols;
	fillMatrix(matrix, userRowsCols);
	cout << isTriangularMatrix(matrix, userRowsCols);
}
