#include <iostream>

using namespace std;

void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool empty(int arrau[], int size)
{
	bool empty = false;
	if (size == 0) 
	{
		cout << "Empty!" << endl;
		return true;
	}
}

//zad 1.1
int dublicateNumber(const int arr[], int size)
{
	int dublicate = arr[0];
	for (int i = 1; i < size; i++)
	{
			if (dublicate == arr[i])
			{
				cout << arr[i] << " ";
			}
			else
			{
				++dublicate;
			}
	}
	return 0;
}

//zad 1.2
bool isSymetrical(const int arr[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - 1 - i])
		{
			return false;
		}
	}

	return true;
}

//zad 1.3
void turnNumber(int arr[], int size)
{
	for (int i = 0; i < size/2; i++)
	{
		swap(arr[i],arr[size/2 - 1]);
	}
}

//zad 1.4
void removeElement(int array[], int& size, int num)
{
	if (num >= 0 && num < size)
	{
		for (int i = num; i < size - 1; ++i)
		{
			array[i] = array[i + 1];
		}
		--size;
	}
	else
	{
		cout << "Invalid index!" << endl;
	}
}

//zad 1.5
int findMissingElement(int array[], int size) 
{
	int expectedSum = 20 * (20 + 1) / 2;

	int actualSum = 0;
	for (int i = 0; i < size; ++i) 
	{
		actualSum += array[i];
	}

	return expectedSum - actualSum;
}

//zad 1.6
void countOccurrences(int array[], int size)
{
	int count[20] = { 0 }; 

	for (int i = 0; i < size; ++i) 
	{
		if (array[i] >= 0 && array[i] < 20) 
		{
			count[array[i]]++;
		}
	}

	for (int i = 0; i < 20; ++i)
	{
		cout << i <<"-" << count[i] << endl;
	}
}

//zad 1.7
bool isSorted(int array[], int size) 
{
	for (int i = 0; i < size - 1; ++i) 
	{
		if (array[i] > array[i + 1])
		{
			return false;  
		}
	}
	return true; 
}
void sorted(int array[], int size)
{
	if (isSorted(array, size)) 
	{
		cout << "Sorted" << endl;
	}
	else {
		cout << "Unsorted" << endl;
	}

}

//zad 1.8
int average(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) 
	{
		sum += array[i];
	}
	double average = (double)sum / size;
	return average;
}
int closestNum(int array[], int size)
{
	int averageNum = average(array, size);
	int closest = array[0];
	double min = array[0] - averageNum;
	if (min < 0)
	{
		min = -min;
	}
	for (int i = 1; i < size; ++i) 
	{
		double minN = array[i] - averageNum;
		if (minN < 0)
		{
			minN = -minN;
		}
		if (minN < min)
		{
			min = minN;
			closest = array[i];
		}
	}
	return closest;
}

//zad 1.9
void findMinMax(int array[], int size, int& min, int& max)
{
	min = array[0];
	max = array[0];

	for (int i = 1; i < size; ++i) 
	{
		if (array[i] < min)
		{
			min = array[i];  
		}
		if (array[i] > max) 
		{
			max = array[i];  
		}
	}
}

//zad 2.1
void fillArray(int arr[], int size, int result[], int& resultSize, int a, int b) {
	
	resultSize = 0;
	for (int i = 0; i < size; ++i) 
	{
		if (arr[i] >= a && arr[i] <= b) 
		{ 
			result[resultSize] = arr[i];  
			resultSize++;  
		}
	}
}

//2.2
int longestConsistencyInArray(int arr[], int size) 
{
	int longestLength = 1;  
	int length = 1;  

	for (int i = 1; i < size; ++i) 
	{
		if (arr[i] < arr[i - 1]) 
		{
			length++; 
		}
		else 
		{
			if (length > longestLength) 
			{
				longestLength = length;
			}
			length = 1; 
		}
	}
	if (length > longestLength) 
	{
		longestLength = length;
	}

	return longestLength;
}

//2.3
int longestNumConsistency(int arr[], int size) 
{
	int longestLength = 1;    
	int length = 1;   

	for (int i = 1; i < size; ++i) 
	{
		if (arr[i] == arr[i - 1])
		{
			length++; 
		}
		else 
		{
			if (length > longestLength) 
			{
				longestLength = length;
			}
			length = 1;  
		}
	}
	if (length > longestLength) {
		longestLength = length;
	}

	return longestLength;
}

//2.4
bool checkNumber(int number, int digit) 
{
	while (number != 0)
	{  
		int digit = number % 10;  
		if (digit < 0)
		{
			digit = -digit;
		}
		if (digit == digit)
		{
			return true;
		}
		number /= 10;
	}
	return false;
}
void zeroInvalidElements(int arr[], int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		if (!checkNumber(arr[i], i))
		{
			arr[i] = 0;  
		}
	}
}

//3.1
void  newArray(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize)
{
	resultSize = 0;
	for (int i = 0; i < size1; ++i)
	{
		result[resultSize++] = arr1[i];
	}
	for (int i = 0; i < size2; ++i) 
	{
		bool found = false;
		for (int j = 0; j < size1; ++j) 
		{
			if (arr2[i] == arr1[j]) 
			{
				found = true;
				break;
			}
		}
		if (!found) 
		{
			result[resultSize++] = arr2[i];
		}
	}
}
void intersectionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize) 
{
	resultSize = 0;
	for (int i = 0; i < size1; ++i)
	{
		for (int j = 0; j < size2; ++j) 
		{
			if (arr1[i] == arr2[j]) 
			{
				bool added = false;
				for (int k = 0; k < resultSize; ++k) 
				{
					if (result[k] == arr1[i]) 
					{
						added = true;
						break;
					}
				}
				if (!added) 
				{
					result[resultSize++] = arr1[i];
				}
			}
		}
	}
}

//3.2
void sortedArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& sizeR) 
{
	sizeR = 0;
	int i = 0, j = 0;
	while (i < size1 && j < size2) 
	{
		if (arr1[i] > arr2[j]) 
		{
			result[sizeR++] = arr2[j++];
		}
		else if (arr1[i] < arr2[j])
		{
			result[sizeR++] = arr1[i++];
		}
		else 
		{
			result[sizeR++] = arr1[i++];
			j++;
		}
	}
	while (i < size1) 
	{
		result[sizeR++] = arr1[i++];
	}

	while (j < size2) 
	{
		result[sizeR++] = arr2[j++];
	}
}

//3.3
bool areLinearlyDependent(int arr1[], int size1, int arr2[], int size2) {
	if (size1 != size2)
	{
		return false;
	}
	int sum = 0;
	for (int i = 0; i < size1; ++i) 
	{
		sum += arr1[i] * arr2[i];
	}
	return sum == 0;
}

//3.4
void incrementNumber(int arr[], int size) 
{
	int add = 1;  
	for (int i = size - 1; i >= 0 && add; --i) 
	{
		arr[i] += add;  
		if (arr[i] == 10) 
		{  
			arr[i] = 0;
			add = 1;
		}
		else 
		{
			add = 0;  
		}
	}
}

int main()
{

}

