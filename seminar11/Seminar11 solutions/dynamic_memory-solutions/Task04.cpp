// Да се напише функция, която приема масив с произволна дължина и връща нов масив,
// за който е заделено точно количество памет, който е съставен само от елементите, 
// които се делят на поне 1 от съседите си.

#include<iostream>
using namespace std;

int * function(int * pArr, const int size, int &resultSize)
{
    if(pArr == nullptr)return nullptr;
    int * temp = new int[size];
    int index = 0;

    for(int i = 0; i < size; i++)
    {
        bool divisibleByNext = (i < size - 1) && (pArr[i] % pArr[i+1] == 0);
        bool divisibleByPrev = (i > 0) && (pArr[i] % pArr[i-1] == 0);

        if (divisibleByNext || divisibleByPrev)
        {
            temp[index] = pArr[i];
            index++;
        }
    }
    int * resultArr = new int[index];
    for(int j = 0; j < index; j++)
    {
        resultArr[j] = temp[j];
    }
    resultSize = index;
    delete[] temp;
    return resultArr;
}

void InputArray(int * array, const int size)
{
    if(array == nullptr){return;}
    for(int i = 0; i < size; i++)
    {
        cin >> *(array+i); 
    }
}

int main()
{
    int size;
    cout << "Enter num of elements:" << endl;
    cin >> size;
    int * pArr = new int[size];
    cout << "Input Array elements" << endl;
    InputArray(pArr, size);
 
    int resultSize;
    int * resultArr = function(pArr, size, resultSize);
    for(int i = 0; i < resultSize; i++)
    {
        cout << resultArr[i] << " ";
    }

    delete[] resultArr;
    delete[] pArr;
}