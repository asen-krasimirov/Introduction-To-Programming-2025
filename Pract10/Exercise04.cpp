#include <iostream>
using namespace std;
int findUnique(const int* arr, int size)
{
    int result= arr[0];
	for (int i = 1; i < size; i++)
	{
		result = result ^ arr[i];
	}
	return result;
}
int main()
{
    int arr[] = { 9,18,9,12,18,15,12 };
	cout << findUnique(arr, 7);
}
