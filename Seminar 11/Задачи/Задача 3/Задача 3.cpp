#include <iostream>

int main()
{
	char str[1024];
	int beg;
	int end;
	std::cin >> str >> beg >> end;
	char substr[1024]{};
	int i = 0;
	int j = 0;
	if (beg > end) return 0;
	while (i <= end || str[i] != '\0') {
		if (i >= beg && i <= end) {
			substr[j] = str[i];
			j++;
		}
	}
	std::cout << substr;
	return 0;
}