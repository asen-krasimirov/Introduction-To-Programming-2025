#include <iostream>
using namespace std;

char* concatFirstAndLastWords(const char* str, int& newLength) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int startFirstWord = 0;
    while (str[startFirstWord] == ' ' && startFirstWord < len) {
        startFirstWord++;
    }

    int endFirstWord = startFirstWord;
    while (str[endFirstWord] != ' ' && endFirstWord < len) {
        endFirstWord++;
    }

    int endLastWord = len - 1;
    while (str[endLastWord] == ' ' && endLastWord >= 0) {
        endLastWord--;
    }

    int startLastWord = endLastWord;
    while (startLastWord >= 0 && str[startLastWord] != ' ') {
        startLastWord--;
    }
    startLastWord++;

    newLength = (endFirstWord - startFirstWord) + (endLastWord - startLastWord) + 2;

    char* result = new char[newLength];
    int index = 0;


    for (int i = startFirstWord; i < endFirstWord; i++) {
        result[index++] = str[i];
    }

    result[index++] = ' ';

    for (int i = startLastWord; i <= endLastWord; i++) {
        result[index++] = str[i];
    }

    result[index] = '\0';

    return result;
}

int main() {
    char inputStr[100];
    cin.getline(inputStr, 100);

    int newLength = 0;
    char* result = concatFirstAndLastWords(inputStr, newLength);

    cout << result << endl; 

    delete[] result;

    return 0;
}
