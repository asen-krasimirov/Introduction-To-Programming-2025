// Prac10_CharArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//0
//1
int CountOfFind(char* arr, char ch)
{
    int counter = 0;
    while (*arr)
    {
        if (*arr == ch) counter++;
        arr++;
    }
    return counter;
}
//2
void SaveSmallLetters(char* src, char* dest)
{
    while (*src)
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
//3
int GetLenOfChar(char* arr)
{
    int counter = 0;
    while (*arr)
    {
        counter++;
        arr++;
    }
    return counter;
}
char * Substring(char* arr, int beg, int end)
{
    int len = GetLenOfChar(arr);
    if (beg > len) return nullptr;
    int ind = 0;
    if (end > len) end = len;
    for (int i = beg; i <= end; i++)
    {
        *(arr+ind)= *(arr + i);
        ind++;
    }
    *(arr + ind) = '\0';
    return arr;
}
//4
int CompareLex(char* arr1, char* arr2)
{
    while (*arr1 && *arr2)
    {
        if (*arr1 > *arr2) return 1;
        else if (*arr1 < *arr2) return -1;
        arr1++;
        arr2++;
    }
    if (*arr1)
    {
        return 1;
    }
    else if (*arr2) return -1;
    else return 0;
}
//5
void ReplaceWith(char* arr, char x, char a, char b)
{
    int len = GetLenOfChar(arr);
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) == x)
        {
            counter++;
            *(arr + i) = (counter % 2 == 0) ? b : a;
        }
    }
}
//6 analogy to 5
//7 -- ?
void LongestPrefix(char* arr1, char* arr2, char* arr3)
{
 /*   int ind = 0;
    while (*(arr1+ind) && *(arr2+ind) && *(arr3+ind))
    {
        if (*(arr1+ind) != *(arr2+ind) || *(arr1+ind) != *(arr3+ind) || *(arr2+ind) != *(arr3+ind)) break;
        ind++;
    }
    *(arr1 + ind) = '\0';
    cout << arr1;*/

    int len1 = GetLenOfChar(arr1);
    int len2 = GetLenOfChar(arr2);
    int len3 = GetLenOfChar(arr3);

    
}
//8 -- ?
void CountFindOfDigits(char* src, char* res)
{
    int len = GetLenOfChar(src);
    char currentCh;
    int counter = 1;
    int i = 0;
    for ( ;i < len; i++)
    {
        currentCh = *(src + i);
        counter = 1;
        for (int j = i+1; j < len; j++)
        {
            if (*(src + j) == *(src + i)) counter++;
        }
        res[i] = counter;
    }
    res[i] = '\0';
    cout << res;
}
//9
void XorArrays(char* arr1, char* arr2,char *res)
{
    int len1 = GetLenOfChar(arr1);
    int len2 = GetLenOfChar(arr2);
    int ind = 0;
    for (int i = 0; i < len1; i++)
    {
        bool flag = false;
        for (int j = 0; j < len2; j++)
        {
            if (arr1[i] == arr2[j]) flag = true;
        }
        if (!flag) res[ind++] = arr1[i];
    }
    for (int i = 0; i < len2; i++)
    {
        bool flag = false;
        for (int j = 0; j < len1; j++)
        {
            if (arr2[i] == arr1[j]) flag = true;
        }
        if (!flag) res[ind++] = arr2[i];
    }
    res[ind] = '\0';
    cout << res;
}
//10
void RemoveDuplicated(char* arr)
{
   
}
int main()
{
    int const MAX_SIZE = 1024;
    //3
    /*   char arr[] = "Hello";
    char* res;
    res= Substring(arr,5,6);
    cout << res;*/
    //6
   /* char arr[] = "H_ll_ my fri_nd";
    ReplaceWith(arr, '_', 'e', 'o');
    cout << arr;*/
  
    char arr[] = "cbacdcbc";
    RemoveDuplicated(arr);

}