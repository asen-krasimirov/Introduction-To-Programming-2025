#include <iostream>
using namespace std;

void print_matrix(int matrix[][10], int n, int m) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void read_matrix(int matrix[][10], int n, int m) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int min_element(int matrix[][10], int n, int m)
{
	int min = matrix[0][0];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
	return min;
}

int main()
{
	int matrix[10][10];
	int n, m;
	cout << "Enter rows: ";
	cin >> n;
	cout << "Enter columns: ";
	cin >> m;
	read_matrix(matrix, n, m);
	cout << "Smallest element: " << min_element(matrix, n, m);
}

