#include <iostream>

using namespace std;

void printMatrix(int matrix[][3], int rows, int colons)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colons; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

//zad 1
void minMatrix(const int matrix[][3], int rows, int colomns) 
{
	int min = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
		}
	}
cout << min << endl;
}

//zad 2
void printMainDiagonal(int matrix[3][3]) 
{
	for (int i = 0; i < 3; i++)
	{
		cout << matrix[i][i] << " ";
	}
}
void printsecondDiagonal(int matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << matrix[i][3-i-1] << " ";
	}
}

//zad 3
void printZigZag(int matrix[][3], int rows, int colomns) {
	for (int i = 0; i < rows; ++i) 
	{
		if (i % 2 == 0) 
		{
			for (int j = 0; j < colomns; ++j)
			{
				cout << matrix[i][j] << " ";
			}
		}
		else 
		{
			for (int j = colomns - 1; j >= 0; --j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;
}

//zad 4
bool isTriangularMatrix(int matrix[][3], int n) 
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (matrix[i][j] != 0) 
			{
				return false;
			}
		}
	}
	return true; 
}

//зад 5
void transposeMatrix(int matrix[][3], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j) 
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

//zad 6
bool isMagicSquare(int matrix[][3], int n) {
	int magicSum = 0;

	
	for (int j = 0; j < n; ++j)
	{
		magicSum += matrix[0][j];
	}

	
	for (int i = 1; i < n; ++i)
	{
		int rowSum = 0;
		for (int j = 0; j < n; ++j) 
		{
			rowSum += matrix[i][j];
		}
		if (rowSum != magicSum) 
		{
			return false;
		}
	}

	
	for (int j = 0; j < n; ++j) 
	{
		int colSum = 0;
		for (int i = 0; i < n; ++i) 
		{
			colSum += matrix[i][j];
		}
		if (colSum != magicSum)
		{
			return false;
		}
	}

	int mainDiagonalSum = 0;
	for (int i = 0; i < n; ++i) 
	{
		mainDiagonalSum += matrix[i][i];
	}
	if (mainDiagonalSum != magicSum) 
	{
		return false;
	}

	int secondaryDiagonalSum = 0;
	for (int i = 0; i < n; ++i) 
	{
		secondaryDiagonalSum += matrix[i][n - i - 1];
	}
	if (secondaryDiagonalSum != magicSum)
	{
		return false;
	}
	return true;
}

//zad 7
void addMatrices(int matrix1[][3], int matrix2[][3], int result[][3], int rows, int cols) 
{
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < cols; ++j) 
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}
void multiplyMatrixByNumber(int matrix[][3], int result[][3], int rows, int cols, int number) 
{
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < cols; ++j) 
		{
			result[i][j] = matrix[i][j] * number;
		}
	}
}

//zad 8
void multiplyMatrices(int matrix1[][3], int matrix2[][3], int result[][3], int rows1, int cols1, int cols2) {
	for (int i = 0; i < rows1; ++i) 
	{
		for (int j = 0; j < cols2; ++j)
		{
			result[i][j] = 0;
		}
	}
	for (int i = 0; i < rows1; ++i) 
	{
		for (int j = 0; j < cols2; ++j) 
		{
			for (int k = 0; k < cols1; ++k) 
			{
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

//zad 9
void printSpiral(int matrix[][3], int rows, int cols) 
{
	int top = 0, left = 0;
	int bottom = rows - 1, right = cols - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; ++i) 
		{
			cout << matrix[top][i] << " " << endl;
		}
		top++;

		for (int i = top; i <= bottom; ++i) 
		{
		    cout << matrix[i][right] << " " ;
		}
		right--;

		if (top <= bottom) 
		{
			for (int i = right; i >= left; --i) 
			{
				cout << matrix[bottom][i] << " " << endl;
			}
			bottom--;
		}

		if (left <= right) 
		{
			for (int i = bottom; i >= top; --i) 
			{
				cout << matrix[i][left] << " " << endl;
			}
			left++;
		}
	}
}

//zad 10
void rotateMatrixRight(int matrix[][100], int result[][3], int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			result[j][rows - 1 - i] = matrix[i][j];
		}
	}
}


int main()
{
	int matrix[3][3] = { 
		{3, 5, 2}, 
		{8, 1, 7},
		{4, 6, 9} };
}
