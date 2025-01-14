#include <iostream>

//task 1
int returnMinElement(int arr[1000][1000], int rows, int cols)
{
	int minEl = INT_MAX;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < minEl)
				minEl = arr[i][j];
		}
	}
}

//task 2
void printDiagonals(int arr[1000][1000], int rows)
{
	for (int i = 0; i < rows; i++) {
		std::cout << arr[i][i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < rows; i++) {
		std::cout << arr[i][rows - i - 1] << " ";
	}
}

//task 3
void printZigZag(int arr[1000][1000], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < cols; j++) {
				std::cout << arr[i][j] << " ";
			}
		}
		else {
			for (int j = cols - 1; j >= 0; j--) {
				std::cout << arr[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

//task 4
bool isTriangle(int arr[1000][1000], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j && arr[i][j] != 0)
				return false;
		}
	}
	return true;
}

//task 5
void transposeMatrix(int arr[1000][1000], int n)
{
	int transposed[1000][1000];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			transposed[j][i] = arr[i][j];
		}
	}
}

//task 6
int rowSum(int arr[1000][1000], int n, int ind)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[ind][i];
	}
	return sum;
}
int colSum(int arr[1000][1000], int n, int ind)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i][ind];
	}
	return sum;
}
int firstDiagonalSum(int arr[1000][1000], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i][i];
	}
	return sum;
}
int secondDiagonalSum(int arr[1000][1000], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i][n - i - 1];
	}
	return sum;
}
bool isMagicMatrix(int arr[1000][1000], int n)
{
	int magicSum = rowSum(arr, n, 0);
	for (int i = 1; i < n; i++)
	{
		if (rowSum(arr, n, i) != magicSum)
			return false;
	}
	for (int i = 0; i < n; i++)
	{
		if (colSum(arr, n, i) != magicSum)
			return false;
	}
	if (firstDiagonalSum(arr, n) != magicSum)
		return false;
	if (secondDiagonalSum(arr, n) != magicSum)
		return false;
	return true;
}

//task 7
void addMatrices(int arr1[1000][1000], int arr2[1000][1000], 
	int result[1000][1000], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void multiplyMatrixByNumber(int arr[1000][1000], int result[1000][1000], 
	int n, int m, int num)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			result[i][j] = arr[i][j] * num;
		}
	}
}

//task 8
void multiplyMatrices(int matrix1[1000][1000], int rows1, int cols1, int matrix2[1000][1000], int rows2, int cols2, int result[1000][1000])
{
	if (cols1 != rows2) {
		return;
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			for (int k = 0; k < cols1; k++) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

//task 9

void printSpiral(int arr[1000][1000], int rows, int cols)
{
	int top = 0, left = 0, bottom = rows - 1, right = cols - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
			std::cout << arr[top][i] << " ";
		top++;

		for (int i = top; i <= bottom; i++)
			std::cout << arr[i][right] << " ";
		right--;

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
				std::cout << arr[bottom][i] << " ";
			bottom--;
		}

		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
				std::cout << arr[i][left] << " ";
			left++;
		}
	}
}

//task 10
void rotateMatrixRight(int arr[1000][1000], int rows, int cols, int rotated[1000][1000])
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			rotated[j][rows - 1 - i] = arr[i][j];
}