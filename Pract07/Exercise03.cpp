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
void zigZagMatrix(int matrix[][COLS], int userRows, int userCols)
{
	for (int i = 0; i < userRows; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < userCols; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = userCols-1; j >= 0; j--)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
}
int main()
{
	int matrix[ROWS][COLS];
	int userRows, userCols;
	cin >> userRows >> userCols;
	fillMatrix(matrix, userRows, userCols);
	cout << endl;
	zigZagMatrix(matrix, userRows, userCols);
}
