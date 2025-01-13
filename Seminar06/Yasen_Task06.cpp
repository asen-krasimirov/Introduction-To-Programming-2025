

#include <iostream>
using namespace std;
const int CheckInput();
void MakeAnArray(const int n);
void PrintArray(const int arr[], int size);

//Part 1

//1
void FindFirstRepeatingElement(const int arr[], int size);
//2
void CheckForPallindrom(const int arr[], int size);
//3
void ReverseFirstHalf(int arr[], int size);
void Custom_Swap(int& a, int& b); //helping function
//4
void RemoveElement(int arr[], int size, int index);
//5
void FindMissingElement(int arr[19]);
//6 („упи се при {0})
void CounterOfRepeats(int arr[20]);
//7
void IsArraySorted(const int arr[], int size);
//8
void AverageValueOfArray(const int arr[], int size);
//9
void FindMaxAndMin(const int arr[], int size);

//Part 2
//1
void FillArray(const int arr[], int size1, int result[], int a, int b);
//2
void LongestDecliningInARow(const int arr[], int size);
//3
void LongestEqualInARow(const int arr[], int size);
//4
void SetZeroIndex(int arr[], int size);
int main()
{
	//1
	int arr[] = { 0, 2, 3, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 1, 18, 17, 20, 19 };
	/*FindFirstRepeatingElement(arr, 5);*/

	//2
	/*CheckForPallindrom(arr, 4);*/

	//3
	/*ReverseFirstHalf(arr, 6);*/

	//4
	/*RemoveElement(arr,7,4);*/

	//5
	/*FindMissingElement(arr);*/

	//6
	int arr2[] = { 5, 7 ,1, 4, 3,9,10 };
	/*CounterOfRepeats(arr2);*/

	//7
	/*IsArraySorted(arr2,7);*/

	//8
	/*AverageValueOfArray(arr2,4);*/
	
	//9
	/*FindMaxAndMin(arr2, 4);*/

	//PrintArray(arr, 7);


	//1
	/*int res[7];
	FillArray(arr2, 7, res, 2, 8);*/

	//2
	/*int arr3[] = { 1 ,2 ,7 ,3 ,2 ,8 ,4 };
	LongestDecliningInARow(arr3, 7);*/

	//3
	/*int arr4[] = { 3 ,3 ,2 ,2 ,2 ,5 ,2 ,2 ,3 ,3 ,3 };
	LongestEqualInARow(arr4, 11);*/

    //4
	/*int arr5[] = { 0 ,0 ,23 ,47 ,47 ,65 ,66};
	SetZeroIndex(arr5, 7);*/
}

//0 
//const int CheckInput() {
//	int input;
//	do
//	{
//		cout << "Please enter number between 1 and 1000: ";
//		cin >> input;
//		if (input < 1 || input>1000) cout << "Please try again!" << "\n";
//		else break;
//	} while (true);
//	return input;
//}

void MakeAnArray()
{


}
void PrintArray(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
//1
void FindFirstRepeatingElement(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j]) { cout << "First repeating element is at index " << j << " : " << arr[i]; return; }
		}
	}
	cout << "Couldn't find repeating element to the given one";
}
//2
void CheckForPallindrom(const int arr[], int size)
{
	int temp = size;
	for (int i = 0; i < size / 2; i++) //1 2 2 1 ; 1 2 1 ;  1,2,2,4,2,2,1
	{
		if (arr[temp - 1] != arr[i]) { cout << "Not pallindrom!"; return; }
		temp--;
	}
	cout << "Pallindrom :)";
}
//3
void Custom_Swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}
void ReverseFirstHalf(int arr[], int size)  //1 2 1 0
{
	int temp = size / 2;
	for (int i = 0; i < size / 4; i++)
	{
		cout << arr[i] << " " << arr[temp - 1] << "\n";
		Custom_Swap(arr[i], arr[temp - 1]);
		cout << arr[i] << " " << arr[temp - 1] << "\n";
		temp--;
	}

}
//4
void RemoveElement(int arr[], int size, int index)
{
	bool found = false;
	for (int i = 0; i < size - 1; i++)
	{
		if (found) Custom_Swap(arr[i], arr[i + 1]);
		else if (i == index)
		{
			Custom_Swap(arr[i], arr[i + 1]);
			found = true;
		}
	}
	arr[size - 1] = -1;
}
//5
void FindMissingElement(int arr[19])
{
	bool checker[21]{ 0 };
	for (int i = 0; i < 19; i++)
	{
		checker[arr[i]] = true;
	}
	for (int j = 0; j < 20; j++)
	{
		if (!checker[j]) { cout << "Missing number is: " << j; return; }
	}
}
//6
void CounterOfRepeats(int arr[20]) // 1 , 2 , 3 , 4 , 5 , 6 , 7
{
	bool checked[20]{ 0 };
	for (int i = 0; i < 20; i++)
	{
		if (checked[arr[i]]) continue;
		checked[arr[i]] = true;
		int counter = 0;
		for (int j = 0; j < 20; j++)
		{
			if (arr[i] == arr[j])
			{
				counter++;
			}
		}
		cout << "Number " << arr[i] << " is found " << counter << " times." << "\n";
	}
}
//7
void IsArraySorted(const int arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min) { cout << "The array is not sorted!"; return; }
		min = arr[i];
	}
	cout << "This array is sorted OK.";
}
//8
void AverageValueOfArray(const int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	sum = (sum / size);
	cout << sum << "\n";
	sum = (int)(sum * 10);
	sum = ((int)sum % 10 > 4) ? (int)(sum / 10) + 1 : (int)sum/10;
	cout << "Average value is : " << sum;
}
//9
void FindMaxAndMin(const int arr[], int size)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
		else if (arr[i] < min) min = arr[i];
	}
	cout << "Min : " << min << "\nMax : " << max;
}

//Part 2
//1
void FillArray(const int arr[], int size1, int result[], int a, int b)
{
	int t = 0;
	for (int i = 0; i < size1; i++)
	{
		if (arr[i] >= a && arr[i] <= b) 
		{ 
			result[t] = arr[i]; t++;
		}
	}
	PrintArray(result, t);
}
//2
void LongestDecliningInARow(const int arr[], int size)
{
 	int counter = 0;
	int temp=arr[0];
	int max=0;
	for (int i = 0; i < size; i++)
	{
		 if (arr[i] > temp) {
			if (counter > max) max = counter;
			counter = 0;
		}
		else {
			counter++; temp = arr[i];
		}
		 if (counter == 0)
		 {
			 temp = arr[i];
			 counter++;
		 }
	}
	cout << max;
}
//3
void LongestEqualInARow(const int arr[], int size)
{
	int counter = 0;
	int temp=arr[0];
	int max = 0;
	for (int i = 0; i < size; i++)
	{
	    if (arr[i] != temp) {
			if (counter > max) max = counter;
			counter = 0;
		}
		else {
			counter++; temp = arr[i];
		}
		if (counter == 0)
		{
			temp = arr[i];
			counter++;
		}
	}
	cout << max;
}
//4
bool ContainNumber(int num, int toFind)
{
	if (num == 0) return (toFind == 0) ? true : false;
	while (num != 0)
	{
		if (num % 10 == toFind) return true;
		num /= 10;
	}
	return false;
}
void SetZeroIndex(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (!ContainNumber(arr[i], i)) arr[i] = 0;
	}
	PrintArray(arr, size);
}