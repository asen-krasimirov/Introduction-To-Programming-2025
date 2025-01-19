#include <iostream>

int firstRepeatedNumber(const int arr[], int length)
{
	bool isFound = false;
	int repeatedNumber;
	for (int i = 0; i < length; i++)
	{
		int desiredNumber = arr[i];
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] == desiredNumber)
			{
				isFound = true;
				repeatedNumber = arr[j];
				break;
			}
		}
		if (isFound)
		{
			break;
		}
	}
	return repeatedNumber;
}
bool Palindrome(const int arr[], int length)
{
	bool isPalindrome = true;
	int middle = length / 2;
	int leftIndex = middle - 1;
	int rightIndex = middle;
	while (rightIndex != length && leftIndex != -1)
	{
		if (arr[leftIndex] != arr[rightIndex])
		{
			isPalindrome = false;
			break;
		}
		leftIndex--;
		rightIndex++;
	}
	return isPalindrome;
}

void SwapFirstHalf(int arr[], int length)
{
	int middle = length / 2;
	for (int i = 0; i < middle / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[middle - i - 1];
		arr[middle - i - 1] = temp;
	}
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i];
	}
}

void removeElement(int arr[], int length, int index)
{
	for (int i = 0; i < length - 1; i++)
	{
		if (i == index)
		{
			for (int j = i; j < length - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
	}
	arr[length - 1] = -1;
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i];
	}
}

int main()
{
	int n;
	std::cin >> n;
	int arr[1024];

	for (int i = 0; i < n; i++)
	{
		int number;
		std::cin >> number;
		arr[i] = number;
	}
	//std::cout << firstRepeatedNumber(arr, n);
	//std::cout << Palindrome(arr, n);
	//SwapFirstHalf(arr, n);
	//removeElement(arr, n, 4);
}