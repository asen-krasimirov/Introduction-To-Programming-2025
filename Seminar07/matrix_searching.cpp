#include <iostream>

using namespace std;


bool search_in_matrix(int matrix[3][3], int element) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] == element) {
				return true;
			}
		}
	}

	return false;
}

int main() {

	int m[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};
	
	cout << search_in_matrix(m, -1);

	return 0;
}
