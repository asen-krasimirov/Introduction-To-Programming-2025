#include <iostream>

//task 1

int firstRepeatingElement(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return arr[i];
			}
		}
	}
	return -1;
}

//task 2

bool isPalindrom(int* arr, int size)
{
	int j = size - 1;
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[j])
			return false;
		j--;
	}
	return  true;
}

//task 3
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArray(int* arr, int size)
{
	int j = size / 2 - 1;
	for (int i = 0; i < size / 4; i++)
	{
		swap(arr[i], arr[j]);
		j--;
	}
}

//task 4
int* removeElement(int* arr, int size, int index)
{
	if (index < 0 || index > size)
		return nullptr;
	for (int j = index; j < size - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
	return arr;
}

//task 5
int findMissedElement(int* arr, int size)
{
	bool histogram[21] {false};
	for (int i = 0; i < size; i++)
	{
		histogram[arr[i]] = true;
	}
	for (int i = 0; i <= size; i++)
	{
		if (!histogram[i])
			return i;
	}
	return -1;
}

//task 6

void printNumberCount(int* arr, int size)
{
	int histogram[20] {0};
	for (int i = 0; i < size; i++)
	{
		histogram[arr[i]]++;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << histogram[i] << " ";
	}
}

//task 7

bool isSorted(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] != arr[i + 1] - 1)
			return false;
	}
	return true;
}

//task 8

void returnAverageValue(int* arr, int size)
{
	int result[2];
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		average += arr[i];
	}
	average = average / size;

	int closestElement = 0;
	double absValue = (double)1e5;
	for (int i = 0; i < size; i++)
	{
		int currValue = average - arr[i];
		if (std::abs(currValue) < absValue)
		{
			absValue = currValue;
			closestElement = arr[i];
		}
	}
	std::cout << average << " " << closestElement << std::endl;
}

//task 9

void returnMinAndMax(int* arr, int size)
{
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		else if (arr[i] > max)
			max = arr[i];
	}
	std::cout << "Min: " << min << "\nMax: " << max;
}

//task 10

void returnNumsInInterval(int* arr, int size, int a, int b, int* result, int& resultSize)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
			result[resultSize++] = arr[i];
	}
}

//task 11

int longestDecreasingSequencec(int* arr, int size)
{
	if (!size)
		return 0;
	int currCount = 1;
	int maxCount = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			currCount++;
		else
			currCount = 1;
		if (currCount > maxCount)
			maxCount = currCount;
	}
	return maxCount;
}

//task 12

int longestEqualSequence(int* arr, int size)
{
	if (!size)
		return 0;
	int currCount = 1;
	int maxCount = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1])
			currCount++;
		else
			currCount = 1;
		if (currCount > maxCount)
			maxCount = currCount;
	}
	return maxCount;
}

//task 13

bool containsK(int n, int k)
{
	while (n != 0)
	{
		if (n % 10 == k)
			return true;
		n /= 10;
	}
	return false;
}

void makeNumsToZero(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (!containsK(arr[i], i))
			arr[i] = 0;
	}
}

//task 14

void findIntersection(int* arr1, int size1, int* arr2, int size2,
	int* result, int& resultSize1)
{
	bool hist1[1000]{false};
	bool hist2[1000]{false};
	for (int i = 0; i < size1; i++)
		hist1[arr1[i]] = true;
	for (int i = 0; i < size2; i++)
		hist2[arr2[i]] = true;
	for (int i = 0; i < size1; i++)
	{
		if (hist1[arr1[i]] && hist2[arr1[i]])
		{
			result[resultSize1++] = arr1[i];
			hist1[arr1[i]] = false;
		}
	}
}

void findUnion(int* arr1, int size1, int* arr2, int size2,
	int* result, int& resultSize2)
{
	bool hist1[1000]{ false };
	for (int i = 0; i < size1; i++)
	{
		if(!hist1[arr1[i]])
			result[resultSize2++] = arr1[i];
		hist1[arr1[i]] = true;
	}
	for (int i = 0; i < size2; i++)
	{
		if (!hist1[arr2[i]])
		{
			result[resultSize2++] = arr2[i];
		}
	}
}

void unionAndIntersection(int* arr1, int size1, int* arr2, int size2,
	int** result, int rows, int& cols) //stack overflow, thats why i use int**
{
	int firstSize = 0;
	int secondSize = 0;
	findIntersection(arr1, size1, arr2, size2, result[0], firstSize);
	findUnion(arr1, size1, arr2, size2, result[1], secondSize);
	cols = std::max(firstSize, secondSize);
}

//task 15

void mergesortedArrays(int* arr1, int size1, int* arr2, int size2, int* result, int& resultSize)
{
	int firstIter = 0;
	int secondIter = 0;
	while (firstIter < size1 && secondIter < size2)
	{
		if (arr1[firstIter] < arr2[secondIter])
		{
			result[resultSize++] = arr1[firstIter++];
		}
		else 
		{
			result[resultSize++] = arr2[secondIter++];
		}
	}
	while (firstIter < size1)
	{
		result[resultSize++] = arr1[firstIter++];
	}
	while (secondIter < size2)
	{
		result[resultSize++] = arr2[secondIter++];
	}
}

//task 16

bool areLinearlyDependent(int* arr1, int size1, int* arr2, int size2) {
	if (size1 != size2) return false;
	int k = arr2[0] / arr1[0]; 
	for (int i = 1; i < size1; i++) {
		if (arr2[i] != arr1[i] * k) { 
			return false;
		}
	}
	return true;
}

//task 17

void rearrange(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		if (i % 2 == 0 && arr[i] < arr[i + 1]) {
			std::swap(arr[i], arr[i + 1]);
		}
		if (i % 2 != 0 && arr[i] > arr[i + 1]) {
			std::swap(arr[i], arr[i + 1]);
		}
	}
}