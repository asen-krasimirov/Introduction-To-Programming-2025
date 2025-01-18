// Yasen_Task08NumeralSystems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Help Functions
long long custom_pow(int num, int pow)
{
    long long res = 1;
    while (pow-- != 0)
    {
        res *= num;
    }
    return res;
}
//Get length of number
int GetLen(char* num)
{
    int counter = 0;
    while (*num != 0) { counter++; num++; }
    return counter;
}
//Converting Any System to Ten System
long long ConvertAnyToTen(char * num, int type) //Problem when starting with zero!
{
    long long res = 0;
    int pow = 0;
    int times;
    int len = GetLen(num)-1;
    for (int i = len; i >=0; i--)
    {
        if (num[i] >= 'A' && num[i] <= 'F') times = num[i]-'A'+10;
        else times = num[i] - '0';
        res += custom_pow(type, pow++) * times;
    }
    return res;
}
//011

//0
int GetCountOfOnesInBinary(int num) {
    int countOfOnes = 0;
    while (num != 0)
    {
        if (num % 2 == 1) countOfOnes++;
        num >>= 1; //num/=2;
    }
    return countOfOnes;
}
//1
void ConvertTenToAny(int num,int type)
{
    char buffer[32];
    int i = 0;
    int pow = 0;
    while (num!=0)
    {
        char currentChr = (num % type < 10) ? '0'+num % type : ('A' + num % type) - 10;
        buffer[i++]=currentChr;
        num /= type;
    }
    for (int j = i-1; j >=0; j--)
    {
        cout << buffer[j];
    }
    
}
//1
void ConvertThreeToEight(char num[])
{
    int ten = ConvertAnyToTen(num, 3);
    cout << "Three to eight is: ";
    ConvertTenToAny(ten, 8);
}

//2
void ConvertEightToThree(char num[])
{
    int ten = ConvertAnyToTen(num,8);
    cout << "Eight to three is: ";
    ConvertTenToAny(ten, 3);
}
//4
void Show32BitReprAsBinary(int num);

int main()
{
    //0
    /*cout<<GetCountOfOnesInBinary(189);*/

    //1
 /*   char arr[] = "BEEF";
    cout<<ConvertAnyToTen(arr, 16);
    ConvertTenToAny(48879, 16);*/
    //2 
    /*char num[] = { '0','1','1','\0'};
    cout<<ConvertAnyToTen(num, 2);*/
    /*ConvertThreeToEight(101);*/

    /*char arr[] = "12120";
    ConvertThreeToEight(arr);*/

    /*char arr[] = "226";
    ConvertEightToThree(arr);*/
}
