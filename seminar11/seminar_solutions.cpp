#include <iostream>


using namespace std;

void print_array(const int* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " -> ";
    }
}

int* get_array(int len) {
    int* res = new int[len];

    for (int i = 0; i < len; i++) {
        cin >> res[i];
    }

    return res;
}

int get_str_len(const char* str) {
    int ctr = 0;

    while (*str != '\0') {
        ctr++;
        str++;
    }

    return ctr;
}

bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

char* censor_digits(const char* str) {
    int str_len = get_str_len(str); // 123\0 -> 3

    char* censored_str = new char[str_len + 1];
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (is_digit(str[i])) {
            censored_str[i] = '*';
        }
        else {
            censored_str[i] = str[i];
        }
    }

    censored_str[str_len] = '\0';

    return censored_str;
}

void sort_array(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int* sort_and_concatenate_arrays(const int* arr1, int size1, const int*  arr2, int size2) {
    int total_size = size1 + size2;
    int* concatenated_array = new int[total_size];

    for (int i = 0; i < size1; ++i) {
        concatenated_array[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        concatenated_array[size1 + i] = arr2[i];
    }

    sort_array(concatenated_array, total_size);

    return concatenated_array;
}

char** get_small_and_capital_str(const char* str) {
    char** result = new char *[2];

    int len = get_str_len(str);

    result[0] = new char[len + 1];
    result[1] = new char[len + 1];

    // upper case
    for (int i = 0; i < len; ++i) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            c -= ('a' - 'A');
        }
        result[0][i] = c;
    }

    // lower case
    for (int i = 0; i < len; ++i) {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');
        }
        result[1][i] = c;
    }

    result[0][len] = '\0';
    result[1][len] = '\0';

    return result;
}

int main() {
    const char* input_str = "Hello, World!";

    // hello, world!
    // HELLO, WORLD!

    char** result = get_small_and_capital_str(input_str);

    cout << result[0] << endl;
    cout << result[1] << endl;

    delete[] result[0];
    delete[] result[1];
    delete[] result;

    return 0;
}

