#include <iostream>

int main()
{
    char str1[1024]{};
    char str2[1024]{};
    std::cin >> str1;
    int i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
			str2[j] = str1[i];
			j++;
        }
        i++;
    }
    std::cout << str2;
}