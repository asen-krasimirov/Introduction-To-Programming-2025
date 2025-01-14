#include <iostream>
using namespace std;

char* insertCharacterAtPositions(const char* str, int positions[], int size, char S, int& newLength) {
    
    newLength = 0;
    while (str[newLength] != '\0') newLength++; 
    
    char* result = new char[newLength + size + 1];

    int i = 0, j = 0, k = 0;

    while (str[i] != '\0' || j < size) {
        if (j < size && i == positions[j]) {
            result[k++] = S; 
            j++; 
        } else {
            result[k++] = str[i++];
        }
    }

    while (str[i] != '\0') {
        result[k++] = str[i++];
    }

    result[k] = '\0'; 

    return result;
}

int main() {
    char inputStr[100];
    cin.getline(inputStr, 100);

    int n;
    cin >> n;

    int* positions = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    char S;
    cin >> S;

    int newLength = 0;
    char* result = insertCharacterAtPositions(inputStr, positions, n, S, newLength);

    cout << result << endl;

    delete[] positions;
    delete[] result;

    return 0;
}
