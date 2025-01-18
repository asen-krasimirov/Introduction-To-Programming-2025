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
int smallestEllement(int matrix[][COLS], int userRows, int userCols)
{
	int min = INT_MAX;
	for (int i = 0; i < userRows; i++)
	{
		for (int j = 0; j < userCols; j++)
		{
			if (min > matrix[i][j]) min = matrix[i][j];
		}
	}
	return min;
}
int main()
{
    int matrix[ROWS][COLS];
	int userRows, userCols;
	cin >> userRows >> userCols;
	fillMatrix(matrix, userRows, userCols);
	cout << "The smallest element in the matrix is " << smallestEllement(matrix, userRows, userCols);
}
