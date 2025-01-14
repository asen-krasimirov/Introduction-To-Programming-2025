#include <iostream>
using namespace std;

bool isMagicSquare(int matrix[100][100], int n) {
    int magicSum = 0;


    for (int j = 0; j < n; j++) {
        magicSum += matrix[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != magicSum) {
            return false;
        }
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];
    }
    if (mainDiagonalSum != magicSum) {
        return false;
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }
    if (secondaryDiagonalSum != magicSum) {
        return false;
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

    if (isMagicSquare(matrix, n)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
