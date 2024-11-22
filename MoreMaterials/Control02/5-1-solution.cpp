// 5.1. Решение

#include <iostream>

using namespace std;

void find_saddle_point(int matrix[6][6], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int max_in_row = matrix[i][0];
        int col_index = 0;

        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] > max_in_row) {
                max_in_row = matrix[i][j];
                col_index = j;
            }
        }

        bool is_min_in_col = true;

        for (int k = 0; k < rows; ++k) {
            if (matrix[k][col_index] < max_in_row) {
                is_min_in_col = false;
                break;
            }
        }

        if (is_min_in_col) {
            cout << "Saddle point: (" << i + 1 << ", " << col_index + 1 << ")" << endl;
            return;
        }
    }

    cout << "No saddle point." << endl;
}

int main() {
    const int rows = 6, cols = 6;
    int matrix[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    find_saddle_point(matrix, rows, cols);

    return 0;
}
