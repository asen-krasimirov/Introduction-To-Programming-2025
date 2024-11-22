// 5.2. Решение

#include <iostream>

using namespace std;

const int n = 4;

void custom_order_traversal(int matrix[n][n]) {
    for (int j = 0; j < n; j++) {
        cout << matrix[0][j] << " ";
    }

    for (int j = n - 1; j >= 0; j--) {
        cout << matrix[3][j] << " ";
    }

    for (int j = n - 1; j >= 0; j--) {
        cout << matrix[1][j] << " ";
    }

    for (int j = 0; j < n; j++) {
        cout << matrix[2][j] << " ";
    }
}

int main() {
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    custom_order_traversal(matrix);

    return 0;
}
