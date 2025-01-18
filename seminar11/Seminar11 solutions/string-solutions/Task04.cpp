#include <iostream>
using namespace std;

int compareStrings(const char* str1, const char* str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1; 
        }
        if (str1[i] > str2[i]) {
            return 1; 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; 
    } else if (str1[i] == '\0') {
        return -1; 
    } else {
        return 1; 
    }
}

int main() {
    char str1[1024], str2[1024];
    cin.getline(str1, 1024);
    cin.getline(str2, 1024);

    cout << compareStrings(str1, str2) << endl;

    return 0;
}
