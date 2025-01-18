#include <iostream>
using namespace std;

void addMatrices(int matrix1[100][100], int matrix2[100][100], int result[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrixWithNumber(int matrix[100][100], int result[100][100], int rows, int cols, int num) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * num;
        }
    }
}

void printMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cin >> rows >> cols;

    int matrix1[100][100], matrix2[100][100], result[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);
    printMatrix(result, rows, cols);

    int num;
    cin >> num;

    multiplyMatrixWithNumber(matrix1, result, rows, cols, num);
    printMatrix(result, rows, cols);

    return 0;
}
