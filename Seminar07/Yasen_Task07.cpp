// Yasen_Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//0
void printMatrix(int matrix[][100], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void readMatrix(int matrix[][100], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
//1
int MinElement(int matrix[][3], int size);
//2
void PrintDiag(int matrix[100][100], int n);
//3
void ZigZag(int matrix[100][100], int n, int m);
//4
bool IsMatrixTriangle(int matrix[100][100], int n, int m);
//5
void TransposeMatrix(int matrix[100][100], int n);
//6
void IsMatrixMagicSquare(int matrix[100][100], int n, int m);
//7,8-????????
void OperationsWithMatrix(int matrix[100][100], int n, int m);
//9
void PrintSpiral(int matrix[100][100], int n, int m);
//10
void TurnRight(int matrix[100][100], int n, int m);
//11==6?

int main()
{
	int matrix[100][100];
	int n, m;
	cout << "Rows: ";
	cin >> n;
	cout << "Columns: ";
	cin >> m;
	cout << "\n";
	readMatrix(matrix, n, m);
	cout << endl;
	/*printMatrix(matrix, n, m);*/
	cout << "\n";
	//1
	/*cout << "Min element is : " << MinElement(matrix, 3);*/
	//2
	/*PrintDiag(matrix, n);*/
	//3
	/*ZigZag(matrix, n, m);*/
	//4
	/*cout<<IsMatrixTriangle(matrix, n, m);*/
	//5
	/*TransposeMatrix(matrix, n);*/
	//6
	/*IsMatrixMagicSquare(matrix, n, m);*/
	//7,8
	/*OperationsWithMatrix(matrix, n, m);*/
	//9
	PrintSpiral(matrix, n, m);
	//10
	/*TurnRight(matrix, n, m);*/
}
//1
int MinElement(int matrix[][3], int size)
{
	int min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] < min) min = matrix[i][j];
		}
	}
	return min;
}
//2
void PrintDiag(int matrix[100][100], int n)
{
	cout << "Main Diagonal: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) cout << matrix[i][i] << " ";
		}
	}
	cout << "\nSecond Diagonal: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j == n - 1) cout << matrix[i][j] << " ";
		}
	}
}
//3
void ZigZag(int matrix[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix[i][j] << " ";
			}
		}
		else
		{
			for (int j = m - 1; j >= 0; j--)
			{
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
}
//4
bool IsMatrixTriangle(int matrix[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i > j) {
				if (matrix[i][j] != 0)
				{
					return false;
				}
			}
		}
	}
	return true;
}
//5
void swap_custom(int matrix[100][100], int& i, int& j)
{
	int temp = matrix[i][j];
	matrix[i][j] = matrix[j][i];
	matrix[j][i] = temp;
}
void TransposeMatrix(int matrix[100][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j) {
				swap_custom(matrix, i, j);
			}
		}
	}
	printMatrix(matrix, n, n);
}
//6
//6.1
int SumOfRows(int matrix[100][100], int n, int m)
{
	int sum = -1;
	for (int i = 0; i < n; i++)
	{
		int tempSum = 0;
		for (int j = 0; j < m; j++)
		{
			tempSum += matrix[i][j];
		}
		if (i != 0 && sum != tempSum) { sum = -1; break; }
		else sum = tempSum;
	}
	return sum;
}
int SumOfCols(int matrix[100][100], int n, int m)
{
	int sum = -1;
	for (int j = 0; j < m; j++)
	{
		int tempSum = 0;
		for (int i = 0; i < n; i++)
		{
			tempSum += matrix[i][j];
		}
		if (j != 0 && sum != tempSum) { sum = -1; break; }
		else sum = tempSum;
	}
	return sum;
}
int SumOfMainDiag(int matrix[100][100], int n, int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j) sum += matrix[i][j];
		}
	}
	return sum;
}
int SumOfSecondDiag(int matrix[100][100], int n, int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i + j == n - 1) sum += matrix[i][j];
		}
	}
	return sum;
}
void IsMatrixMagicSquare(int matrix[100][100], int n, int m)
{
	int r = SumOfRows(matrix, n, m);
	if (r == -1) { cout << "Rows Sum Is Not Equal!"; return; }
	int c = SumOfCols(matrix, n, m);
	if (c == -1) { cout << "Columns Sum Is Not Equal!"; return; }
	int md = SumOfMainDiag(matrix, n, m);
	int sd = SumOfSecondDiag(matrix, n, m);

	if (r == c)
	{
		if (c == md)
		{
			if (md == sd)
			{
				cout << "This Matrix Is Magic Square!"; return;
			}
		}
	}
	cout << "Not Magic Square!";
}
//7
//7.1
void MultipByNum(int matrix[100][100], int n, int m, int num)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] *= num;
		}
	}
	cout << '\n';
	printMatrix(matrix, n, m);
}
//7.2																						
int SumRowTimesColumn(int matrix[100][100], int matrix2[100][100], int currentRow,int currentCol,int m)
{
	int element = 0;
	for (int i = 0; i < m; i++)
	{
		element+=matrix[currentRow][i]* matrix2[i][currentCol];
	}
	return element;
}
void MultipWithMatrix(int matrix[100][100], int matrix2[100][100], int rows, int m, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< SumRowTimesColumn(matrix, matrix2, i,j,m)<<" ";
		}
		cout << endl;
	}
}
void OperationsWithMatrix(int matrix[100][100], int n, int m)
{
	cout << "Enter operator ( + or * ): ";
	char op; cin >> op;
	if (op == '+')
	{
		cout << "Enter matrix B: \n";
		int smatr[100][100]; readMatrix(smatr, n, m);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				matrix[i][j] += smatr[i][j];
			}
		}
		cout << "Matrix A + Matrix B is equal to: \n";
		printMatrix(matrix, n, m);
	}
	else if (op == '*')
	{
		cout << "Enter type of * (1 for number, 2 for matrix):";
		int opt; cin >> opt;
		if (opt == 1)
		{
			cout << "Plase enter number to multiply: ";
			int num; cin >> num;
			MultipByNum(matrix, n, m, num);
		}
		else if (opt == 2)
		{
			int rows;
			int cols;
			do
			{
				cout << "Rows: ";
				cin >> rows;
				cout << "Cols: ";
				cin >> cols;
				if (rows != m) cout << "Try again!";
			} while (rows!=m);
			int matrix2[100][100];
			readMatrix(matrix2, rows, cols);
			MultipWithMatrix(matrix, matrix2, n, m, cols);
		}
	}
}
//9

	//1 2 3 4 5  -------> i=0,j<=m
	//6 7 8 9 1  
	//2 3 4 5 6
	//7 8 9 1 2
    //        |
    //        |
    //     j=n,i<=0
void PrintStraightRow(int matrix[100][100],int& i,int& j,int m)
{
	while (j < m)
	{
		cout << matrix[i][j++] << " ";
	}
}
void PrintStraightColumn(int matrix[100][100], int& i, int& j, int n)
{
	j--;
	while (i < n - 1)
	{
		cout << matrix[++i][j] << " ";
	}
	
}
void PrintBackRow(int matrix[100][100], int& i, int& j, int n,int& step)
{
	while (j > step)
	{
		cout << matrix[i][--j] << " ";
	}
	step++;
}
void PrintBackColumn(int matrix[100][100], int& i, int& j,int& st)
{
	while (i > st+1)
	{
		cout << matrix[--i][j] << " ";
	}
	st++;
}
void PrintSpiral(int matrix[100][100], int n, int m)
{
	//int counter = 0;
	//int i = 0;
	//int copyOfm = m;
	//int copyOfn = n;
	//int step = 0; int st = 0;
	//for (int p = 0; p <copyOfn; p++)
	//{
	//	for (int j = 0; j < copyOfm; j++)
	//	{
	//		PrintStraightRow(matrix, i, j, copyOfm);
	//		PrintStraightColumn(matrix, i, j, copyOfn);
	//		PrintBackRow(matrix, i, j, copyOfn,step);
	//		PrintBackColumn(matrix, i, j, st);
	//		copyOfm--;
	//		copyOfn--;
	//	}
	//}
	int top = 0;
	int bottom = n;
	int left = 0;
	int right = m;
	while (true)
	{
		//left to right
		for (int i = 0; i < right; i++)
		{
			cout << matrix[top][i] << " ";
		}
		top++;
		//top to bottom
		for (int i = top; i <= bottom; i++)
		{
			cout << matrix[i][right] << " ";
		}
		right--;
		//right to left
		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
			{
				cout << matrix[bottom][i];
			}
			bottom--;
		}
	}
}

//10
void TurnRight(int matrix[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = m-1; j >=0 ; j--)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}