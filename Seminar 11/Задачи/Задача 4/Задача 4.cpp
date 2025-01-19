#include <iostream>

int main()
{
    char str1[1024];
    char str2[1024];
    std::cin >> str1 >> str2;
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1;
        }
        else if (str1[i] < str2[i]) {
            return -1;
        }
        else {
			i++;
            if (str1[i] == '\0' && str2[i]!='\0') return -1;
            if (str1[i] != '\0' && str2[i]=='\0') return 1;
        }
    }
    return 0;
}