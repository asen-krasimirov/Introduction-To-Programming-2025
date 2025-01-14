#include <iostream>
using namespace std;

void print_matrix(int matrix[][20], int n) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void read_matrix(int matrix[][20], int n) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void main_diagonal(int matrix[][20], int n) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if(i == j)
			cout << matrix[i][j] << " ";
		}
	}
	cout << endl;
}

void reverse_diagonal(int matrix[][20], int n) {

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			//cout << i << " ";
			if (n == i + j + 1)
				cout << matrix[i][j] << " ";
		}
	}
	cout << endl;
}

int main()
{
	int matrix[20][20];
	int n;
	cout << "Enter matrix size: ";
	cin >> n;
	read_matrix(matrix, n);
	main_diagonal(matrix, n);
	reverse_diagonal(matrix, n);

}

