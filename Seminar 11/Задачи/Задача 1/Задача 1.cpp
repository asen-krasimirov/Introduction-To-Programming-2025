#include <iostream>

int main()
{
    char str[1024]{};
    char symbol;
	std::cin >> str >> symbol;
	int count = 0;
	int i = 0;
	while (str[i]!='\0')
	{
		if (str[i] == symbol) {
			count++;
		}
		i++;
	}
	std::cout << count;
	return 0;
}