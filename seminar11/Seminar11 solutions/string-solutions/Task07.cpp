#include <iostream>
using namespace std;

char* longestCommonPrefix(char* str1, char* str2, char* str3) {
    static char result[1024];
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str3[i] != '\0') {
        if (str1[i] == str2[i] && str2[i] == str3[i]) {
            result[i] = str1[i]; 
        } else {
            break; 
        }
        i++;
    }
    result[i] = '\0'; 
    return result;
}

int main() {
    char str1[1024], str2[1024], str3[1024];

    cin.getline(str1, 1024);
    cin.getline(str2, 1024);
    cin.getline(str3, 1024);

    cout << longestCommonPrefix(str1, str2, str3) << endl;

    return 0;
}
