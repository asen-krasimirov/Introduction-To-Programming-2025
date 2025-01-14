#include <iostream>
using namespace std;

bool isTriangularMatrix(int matrix[100][100], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false; 
            }
        }
    }
    return true; 
}

int main() {
    int n;
    cin >> n; 

    int matrix[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << isTriangularMatrix(matrix, n) << endl;

    return 0;
}
