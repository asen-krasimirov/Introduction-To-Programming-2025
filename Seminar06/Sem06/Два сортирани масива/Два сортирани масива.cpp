#include <iostream>

int main()
{
	int n1, n2;
	std::cin >> n1 >> n2;
	int arr1[1024];
	int arr2[1024];
	int result[1024];
	for (int i = 0; i < n1; i++)
	{
		int number;
		std::cin >> number;
		arr1[i] = number;
	}
	for (int i = 0; i < n2; i++)
	{
		int number;
		std::cin >> number;
		arr2[i] = number;
	}
	int arr1Index = 0;
	int arr2Index = 0;
	int resultIndex = 0;
	while (true)
	{
		if (arr1[arr1Index] < arr2[arr2Index])
		{
			if (arr1Index < n1)
			{
				result[resultIndex] = arr1[arr1Index];
				arr1Index++;
			}
			else
			{
				if (arr2Index < n2)
				{
					result[resultIndex] = arr2[arr2Index];
				}
			}
		}
		else
		{
			result[resultIndex] = arr2[arr2Index];
			if (arr2Index < n2)
			{
				arr2Index++;
			}
			else
			{
				if (arr1Index < n1)
				{
					result[resultIndex] = arr1[arr1Index];
				}
			}
		}
		resultIndex++;
		if (resultIndex == n1 + n2)
		{
			break;
		}
	}

	for (int i = 0; i < n1 + n2; i++)
	{
		std::cout << result[i];
	}
}