// ExerciseDynamicMemoryAlloc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//1
double AvgGrates()
{
    int count;
    cin >> count;
    double * grates=new double[count];
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> *(grates + i);
        sum += *(grates + i);
    }
    delete [] grates;
    return sum / count;

}
//2
void MinAndMax()
{
    int size;
    cin >> size;
    double* arr = new double[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    double min = arr[0];
    double max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) min = arr[i];
        else if (arr[i] > max) max = arr[i];
    }
    cout << "Min : " << min << endl << "Max : " << max;
    delete[] arr;
}

//3.0
char* ReadCharArr()
{
    int size;
    cin >> size;
    char* arr = new char[size+1];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    arr[size] = '\0';
    return arr;
}
int GetSizeOfCharArr(char* arr)
{
    int size = 0;
    while (*arr)
    {
        size++;
        arr++;
    }
    return size;
}
//3
bool IsPall()
{
    bool flag=true;
    char* arr = ReadCharArr();
    int size = GetSizeOfCharArr(arr);
    for (int i = 0; i < size/2; i++)
    {
        if (arr[i] != arr[size - 1 - i]) {
            flag = false; break;
        }
    }
    delete[] arr;
    return flag;
}
//4
int *  Binary(int num)
{
    int i = 0;
    int cpy = num;
    while (cpy != 0)
    {
        cpy /= 2;
        i++;
    }
    int* arr = new int[i];
    int cInd = 0;
    while (num != 0)
    {
        arr[cInd++] = num % 2;
        num /= 2;
    }
    for (int j = i-1; j >=0 ; j--)
    {
        cout << arr[j];
    }
    return arr;

}

int GetCountInt(int num)
{
    int c = 0;
    while (num != 0)
    {
        c++;
        num /= 10;
    }
    return c;
}
//5
int ReverseNum(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
bool NumberPall(int num)
{
    int reversed = ReverseNum(num);
    return reversed == num;
}
//6
void Func6(int n, int k)
{
    int * arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 0; c<10;)
    {
        cout << arr[i] << " ";
        if (i + k > n - 1) i = i + k - n;
        else i += k;
        c++;
    }
    delete[]arr;

}
//7
long long cust_pow(int num, int pow)
{
    long long res = 1;
    while (pow-- != 0) res *= num;
    return res;
}
//8
void MinElEachRow(int* arr,int rows,int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int min = *(arr + i);
        for (int j = 0; j < cols; j++)
        {
            if (*(arr + i * cols + j) < min) min = *(arr + i * cols + j);
        }
        cout << min << " ";
    }
}
//9
void FindNegativeEls(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int counter = 0;
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < 0) counter++;
        }
        cout << counter << " ";
    }
}
void ReadMatrix(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}
bool SymmetricMainDiago(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] != arr[j][i]) return false;
        }
    }
    return true;
}
bool UnderMain(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i > j) if (arr[i][j] != 0) return false;
        }
    }
    return true;
}
bool AboveSecond(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i + j< rows-1) if (arr[i][j] != 0) return false;
        }
    }
    return true;
}
bool IsTriangle(int** arr, int rows, int cols)
{
    if (UnderMain(arr, rows, cols) || AboveSecond(arr, rows, cols)) return true;
    return false;
}
bool CmpRows(int* row1, int* row2,int cols)
{
    for (int i = 0; i < cols; i++)
    {
        if (row1[i] > row2[i]) return true;
        else if (row1[i] < row2[i]) return false;
    }
    return false;
}
void swap_rows(int * row1,int * row2,int cols)
{
    for (int i = 0; i < cols; i++)
    {
        int temp = row1[i];
        row1[i] = row2[i];
        row2[i] = temp;
    }
}
void SortMatrix(int** arr, int rows,int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int min_row_index = i;
        for (int j = i+1; j < rows; j++)
        {
            if (CmpRows(arr[i], arr[j], cols)) min_row_index = j;
        }
        if (min_row_index != i)
        {
            swap_rows(arr[i], arr[min_row_index],cols);
        }
    }
}
bool Diagos(int** arr, int rows, int cols)
{

}
int main()
{
    int rows,cols; cin >>rows>>cols;
    int** arr = new int* [rows];
    ReadMatrix(arr, rows, cols);
    SortMatrix(arr,rows,cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[]arr;
}
