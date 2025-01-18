// PointersAndRefTask10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//0
void ChangeToNull(int* pa)
{
    pa = nullptr;
}
//1
void cust_swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
//2
void toLow(char& a)
{
    if (a >= 'A' && a <= 'Z') a = a + 'a' - 'A';
}
void toUp(char& a)
{
    if (a >= 'a' && a <= 'z') a = a - ('a' - 'A');
}
//3
void sort3(int& min, int& mid, int& max)
{
    int MIN = (min < mid) ? (min < max) ? min : max : (mid < max) ? mid : max;
    int MAX = (min > mid) ? (min > max) ? min : max : (mid > max) ? mid : max;
    int MID = min + mid + max - MIN - MAX;
    min = MIN;
    max = MAX;
    mid = MID;
}
//4 -- !!!
int GCD(int ch, int zn) //16 20 --> zn%16=4; 4/16 
{
    int res = (ch > zn) ? zn : ch;
    while (res > 1)
    {
        if (ch % res == 0 && zn % res == 0) break;
        res--;
    }
    return res;
}
void F4(int& ch, int& zn)
{
    int gcd = GCD(ch, zn);
    ch /= gcd;
    zn /= gcd;
}
void F4Res(int ch1, int zn1,int ch2,int zn2)
{
    F4(ch1, zn1);
    F4(ch2, zn2);
    int lcm = (zn1 / GCD(zn1, zn2)) * zn2;
    cout << ch1 << "/" << zn1 << " + " << ch2 << "/" << zn2 << endl;
    if (lcm != zn1)
    {
        ch1 = lcm * ch1;
    }
    if (lcm != zn2) ch2 = lcm * ch2;
    cout << ch1 + ch2 << "/" << lcm;
}
//5 - ?
int cust_pow(int n, int pow)
{
    int res = 1;
    while (pow-- != 0) res *= n;
    return res;
}
int getLenInt(int n)
{
    int c = 0;
    while (n != 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
void ChangeNums(int n, int m, int k)// 12345 2
{
    int procent = cust_pow(10, k);
    int lenOfn= getLenInt(n);
    int lenOfm = getLenInt(m);
    int newN = 0;
    int newM = 0;
    for (int i = 0; i < lenOfn; i++)
    {
        int currentDigit = n % (cust_pow(10, k--));
        if()
        newN = newN * 10 + currentDigit;
    }
}
//6
void PrintINTArray(int* arr, int size)
{
    if (arr == nullptr) return;
    if (*arr - '0' >= 0 || *arr - '0' <= 9)
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(arr + i)<<" ";
        }
    }
}
void PrintCHARArray(char* arr)
{
    while (*arr)
    {
        cout << *arr << " ";
        arr++;
    }
}
//7.1 -- ?
int GetLenOfCharArr(char* arr)
{
    int c = 0;
    while (*arr)
    {
        c++;
        arr++;
    }
    return c;
}
void ConcatChars(char* arr1, char* arr2)
{
    while (*arr1)
    {
        arr1++;
    }
    while (*arr2)
    {
        *arr1 = *arr2;
        arr2++;
        arr1++;
    }
    *arr1 = '\0';
}
bool IsCharConcatPall(char* arr1, char* arr2)
{
    ConcatChars(arr1, arr2);
    cout << arr1;
    
    int len = GetLenOfCharArr(arr1);
    for (int i = 0; i < len/2; i++)
    {
        if (arr1[i] != arr1[len - i - 1]) return false;
    }
    return true;
}
//7.2
void ConcatINTArr(int* arr1, int* arr2,int size1,int size2,int *res)
{
    int ind = 0;
    for (int i = 0; i < size1; i++)
    {
        res[ind++] = arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        res[ind++] = arr2[j];
    }
}
bool IsINTConcatPall(int* arr1, int* arr2,int size1,int size2)
{
    const int SIZE = 50;
    int res[50];
    ConcatINTArr(arr1, arr2, size1, size2, res);
    int s = size1 + size2;
    for (int i = 0; i < s/2; i++)
    {
        if (res[i] != res[s - i - 1]) return false;
    }
    return true;
}
int main()
{
    /*char arr1[] = "abc";
    char arr2[] = "cba";
    cout << IsCharConcatPall(arr1, arr2);*/

    /*int arr1[] = { 1,2,3 };
    int arr2[] = { 3,2,1 };
    cout << IsINTConcatPall(arr1, arr2,3,3);*/
}