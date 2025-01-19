#include <iostream>

int main()
{
	char str[1024];
	char symbol1;
	char symbol2;
	char symbol3;
	std::cin >> str >> symbol1 >> symbol2>>symbol3;
	int i = 0;
	while (str[i] != '\0') {
		if (str[i]==symbol1 && i % 2 == 0) {
			str[i] = symbol2;
		}
		else if (str[i]==symbol1 && i%2!=0) {
			str[i] = symbol3;
		}
		i++;
	}
	std::cout << str;
}