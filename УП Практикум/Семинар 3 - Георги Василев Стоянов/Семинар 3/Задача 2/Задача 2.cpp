#include <iostream>

int main()
{
	int start, end;
	std::cin >> start >> end;
	if (start > end || start < 0 || end>255)
	{
		std::cout << "Invalid codes!";
		return 0;
	}
	for (int i = start; i <= end; i++)
	{
		std::cout << (char)i << "\n";
	}
	return 0;
}