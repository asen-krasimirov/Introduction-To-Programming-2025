#include <iostream>

using namespace std;


void print_array(const int arr[], int arr_size) {
	for (int i = 0; i < arr_size; i++) {	// 0...3
		cout << arr[i] << " ";
	}
	cout << endl;
}

void enter_array(int arr[], int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		cin >> arr[i];
	}
}

bool linear_search(const int arr[], int arr_size, int element_to_find) {
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == element_to_find) {
			return true;
		}
	}

	return false;
}

bool binary_search(const int arr[], int arr_size, int elem) {
	int left_index = 0, right_index = arr_size - 1;

	while (left_index <= right_index) {
		int middle_index = (left_index + right_index) / 2;

		if (arr[middle_index] == elem) {
			return true;
		}

		if (arr[middle_index] < elem) {
			left_index = middle_index + 1;
		}
		else {
			right_index = middle_index - 1;
		}
	}

	return false;
}

void swap_elements(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void reverse_array(int arr[], int arr_size) {
	int half_index = arr_size / 2;

	for (int i = 0; i < half_index; i++) {
		swap_elements(
			arr[i], arr[arr_size - i - 1]
		);
	}
}

void selection_sort_array(int arr[], int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		int minimal_element_index = i;

		for (int j = i + 1; j < arr_size; j++) {
			if (arr[j] < arr[minimal_element_index]) {
				minimal_element_index = j;
			}
		}

		if (minimal_element_index != i) {
			swap_elements(arr[i], arr[minimal_element_index]);
		}
	}
}

void easy_sort_array(int arr[], int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		for (int j = 0; j < arr_size; j++) {
			if (arr[i] < arr[j]) {
				swap_elements(arr[i], arr[j]);
			}
		}
	}
}

int main() {
	const int SIZE = 6;
	int arr[SIZE];

	enter_array(arr, SIZE);
	print_array(arr, SIZE);
	cout << binary_search(arr, SIZE, 10);

	return 0;
}
