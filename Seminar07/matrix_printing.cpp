#include <iostream>

using namespace std;


void print_matrix(int matrix[][3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void print_main_diagonal(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << matrix[i][i] << " ";
	}
}

void print_secondary_diagonal(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << matrix[i][3 - i - 1] << " ";
	}
}

void print_spiral(int matrix[3][3]) {
	int top = 0;
	int bottom = 2;
	int left = 0;
	int right = 2;

	while (top <= bottom && left <= right) {
		// left -> right
		for (int i = left; i <= right; i++) {
			cout << matrix[top][i] << " ";
		}
		top++;

		// top -> bottom
		for (int i = top; i <= bottom; i++) {
			cout << matrix[i][right] << " ";
		}
		right--;

		// right -> left
		if (top <= bottom) {
			for (int i = right; i >= left; i--) {
				cout << matrix[bottom][i] << " ";
			}
			bottom--;
		}

		// bottom -> top
		if (left <= right) {
			for (int i = bottom; i >= top; i--) {
				cout << matrix[i][left] << " ";
			}
			left++;
		}
	}
}

int main() {
	
	return 0;
}
