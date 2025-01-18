// Да се напише програма, която приема 2 масива от цели числа с произволна големина, както и число К. 
// Програмата да връща нов масив, за който е заделено точно количество памет, 
// който да е съставен само от числата, съдържащи се в двата масива, които се делят на К.

#include<iostream>
using namespace std;

int* Fill_newArray(int * array1, int * array2, int k, int size1, int size2, int &resultSize)
{
    if(array1 == nullptr || array2 == nullptr) return nullptr;
    int * temp = new int[size1+size2];

    int index = 0;
    for(int i = 0; i < size1; i++)
    {
        if(*(array1+i) % k == 0)
        {
            temp[index] = *(array1+i); 
            index++;
        }
    }
    for(int i = 0; i < size2; i++)
    {
        if(*(array2+i) % k == 0)
        {
            temp[index] = *(array2+i); 
            index++;
        }
    }

    int * result = new int[index];
    for(int i = 0; i < index; i++)
    {
        result[i] = temp[i];
    }
    delete[] temp;
    resultSize = index;
    return result;
}

void Input_array(int * array, const int size)
{
    if(array == nullptr){return;}
    for(int i = 0; i < size; i++)
    {
        cin >> *(array+i); 
    }
}

int main()
{
    int size1, size2;
    cout << "Enter number of elements in the first array:" << endl;
    cin >> size1;
    int * array1 = new int[size1];
    cout << "Enter the elements of the first array: " << endl;
    Input_array(array1, size1);

    cout << "Enter number of elements in the second array: " << endl;
    cin >> size2;
    int * array2 = new int[size2];
    cout << "Enter the elements of the first array: " << endl;
    Input_array(array2, size2);

    int k;
    cout << "Enter the divisor:" << endl;
    cin >> k;

    int resultSize;
    int *resultArray = Fill_newArray(array1, array2, k, size1, size2, resultSize);

    cout << "The elements from both arrays that are divisible by " << k << "are:" << endl;
    for(int i = 0; i < resultSize; i++)
    {
        cout << resultArray[i] << " ";
    }

    delete[] array1;
    delete[] array2;
    delete[] resultArray;
}