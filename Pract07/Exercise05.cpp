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
void trMatrix(int matrix[][COLS], int userRowsCols)
{
	for (int i = 0; i < userRowsCols; i++)
	{
		for (int j = 0; j < userRowsCols; j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int matrix[ROWS][COLS];
	int userRowsCols;
	cin >> userRowsCols;
	fillMatrix(matrix, userRowsCols);
	cout << endl;
	trMatrix(matrix, userRowsCols);
}
