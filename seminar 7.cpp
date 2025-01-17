

#include <iostream>

using namespace std;



//1
int find_min_element(int matrix[3][3], int rows, int cols) {
    int min_element = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
            }
        }
    }
    return min_element;
}

//2
void print_diagonals(int matrix[3][3], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

   
    for (int i = 0; i < n; i++) {
        cout << matrix[i][n - 1 - i] << " ";
    }
    cout << endl;
}

//3
void zigzag_print(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) { 
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
        }
        else { 
            for (int j = cols - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

//4
bool is_triangular(int matrix[3][3], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

//5
void transpose(int matrix[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void print_matrix(int matrix[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//6 //11
bool is_magic_square(int matrix[3][3], int n) {
    int sum = 0;


    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
    }

    
    for (int i = 1; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum != sum) return false;
    }

   
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += matrix[i][j];
        }
        if (col_sum != sum) return false;
    }

    
    int main_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        main_diag_sum += matrix[i][i];
    }
    if (main_diag_sum != sum) return false;

  
    int secondary_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        secondary_diag_sum += matrix[i][n - 1 - i];
    }
    if (secondary_diag_sum != sum) return false;

    return true;
}

//7

void print_result(int matrix[2][3]);

void add_matrices(int matrix1[2][3], int matrix2[2][3], int result[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    print_result(result);
}
void print_result(int matrix[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply_matrix_by_scalar(int matrix[2][3], int scalar) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] *= scalar;
        }
    }
    print_matrix(matrix, scalar);
}



//8
void multiply_matrices(int matrix1[2][2], int matrix2[2][3], int result[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3;j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void print_matrix(int matrix[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

//9
void spiral_print(int matrix[3][3], int n) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        ++top;

        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        --right;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            --bottom;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            ++left;
        }
    }
    cout << endl;
}

//10
void rotate_matrix_90(int matrix[3][3], int n) {
    for (int i = 0; i < n / 2; ++i) {
        for (int j = i; j < n - i - 1; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
    print_matrix( matrix, n);
}




int main()
{
    int const MAX_SIZE =3;
    int matrix1[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    int matrix2[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }
    int result[2][3];
    add_matrices(matrix1, matrix2, result);
   
    //int scalar;
    //cin >> scalar;
    //multiply_matrix_by_scalar(matrix, scalar);


}

