// CharArrayPracticum11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int numOfOccurence(char* arr, char ch)
{
    int count = 0;
    while (*arr)
    {
        if (*arr == ch) count++;
        arr++;
    }
    return count;
}
int charLen(char* arr)
{
    int c = 0;
    while (*arr)
    {
        c++;
        arr++;
    }
    return c;
}
bool IsSmallLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}
void getLower(char* arr,char * res)
{
    while (*arr)
    {
        if (IsSmallLetter(*arr))
        {
            *res = *arr;
            res++;
        }
        arr++;
    }
    *res = '\0';
}
//3
char* SubString(char* arr, int beg, int end)
{
    int len = charLen(arr);
    if (end > len) return arr;
    if (beg > len) return nullptr;
    if (arr==nullptr) return nullptr;
    char* res=new char[len];
    int j = 0;
    for (int i = beg; i <= end; i++)
    {
        res[j] = *(arr + i);
        j++;
    }
    *(res+end) = '\0';
    return res;

}
//4
int LexCmp(char* arr1, char* arr2)
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
    return 0;
}
//5
void Replace(char* arr, char ch, char nechetno, char chetno)
{
    int counter = 0;
    while (*arr)
    {
        if (*arr == ch)
        {
            counter++;
            if (counter % 2 == 0) *arr = chetno;
            else *arr = nechetno;
        }
        arr++;
    }
}
//7
//char* Prefix(char* a1, char* a2, char* a3)
//{
//    int len1 = charLen(a1);
//    int len2 = charLen(a2);
//    int len3 = charLen(a3);
//
//    int i = 0;
//    if (len1 < len2 && len1 < len3)
//    {
//        for (int i = 0; i < len1; i++)
//        {
//            if (a1[i] == a2[i] && a1[i] == a3[i])
//            {
//                while (a1[i])
//                {
//                    if (a1[i] != a2[i] || a1[i] != a3[i]) break;
//                }
//            }
//        }
//    }
//}
//8
void CountOfOcc(char* arr, char* res)
{
    int len = charLen(arr);
    for (int i = 0; i < len; i++)
    {
        int count = 1;
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] == arr[j]) count++;
        }
        res[i] = count;
    }
    res[len] = '\0';
}
int main()
{
    const int MAX_SIZE = 1024;
  /*  char a1[] = "autocar";
    char a2[] = "racecar";
    char a3[] = "car";
    
    char * res=Prefix(a1, a2, a3);
    cout << res;*/

    char arr[] = "4231148";
    char res[10];
    CountOfOcc(arr, res);
    cout << res;
}