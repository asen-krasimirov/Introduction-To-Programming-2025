#include <iostream>

int main()
{
	const int MSIZE = 3;
	int arr[MSIZE][MSIZE];

	for (int i = 0; i < MSIZE; i++)
	{
		for (int j = 0; j < MSIZE; j++)
		{
			int number;
			std::cin >> number;
			arr[i][j] = number;
		}
	}
	int turns = 0;
	while (turns<=MSIZE/2)
	{
		for (int i = turns; i < MSIZE - turns; i++)
		{
			std::cout << arr[turns][i];
		}
		for (int i = turns+1; i < MSIZE - turns; i++)
		{
			std::cout << arr[i][MSIZE - turns-1];
		}
		for (int i = MSIZE - 2 - turns; i >= turns; i--)
		{
			std::cout << arr[MSIZE - 1 - turns][i];
		}
		for (int i = MSIZE - 2 - turns; i > turns; i--)
		{
			std::cout << arr[i][turns];
		}
		turns++;
	}
}