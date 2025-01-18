// Task08_bitwiseOp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//0
long long custom_pow(int num, int pow)
{
    long long sum = 1;
    while (pow-- != 0) sum *= num;
    return sum;
}
//1
int SwitchLastBit(int num) //1100 --> 1000  
{
    int copy = num;
    int k = 0;
    while (true)
    {
        if (copy % 2 == 0) { k++; copy /= 2; }
        else break;
    }
    return num^(1 << k);
}
//2
int CodedNumInLastKBites(int n, int k) //00 -> 0 ; 01->0 ; 11->1; 10->1
{
    int mask = 1 << k;
    return n&(mask - 1);
}
//3
void Function3(int n, int k)
{
    if ((n & k) == k) cout << "true";
    else cout << "false";
}
//4
int FindNotRepeatedNum(int arr[],int size)
{
    //1
    //bool flag;
    //for (int i = 0; i < size; i++)
    //{
    //    flag = false;
    //    for (int j = 0; j < size; j++)
    //    {
    //        if ((arr[i] ^ arr[j]) == 0 && i!=j) {
    //            flag = true; break;
    //        }
    //    }
    //    if (flag == false) return arr[i];
    //}
    
    //2
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        n ^= arr[i];
    }
    return n;
}
//5 - ?
int ToDecimalNumeralSys(int a)
{
    int res = 0;
    int pow = 0;
    while (a != 0)
    {
        res += custom_pow(10, pow++) * a % 10;
        a /= 10;
    }
    return res;
}
void Sub(int arr[], int size)
{

}
//6
int Function6(int x, int m, int n) //10000 3 3 -->100
{
    x >>= (m-1);
    return CodedNumInLastKBites(x, n);
}
//7

//8
int ChangeBit(int n, int p, bool b) //111 0 0 00 ^    2 1 ---> 1111 1 00
{                                   //000 1 0 00 
                                    //111 0 0 00
    int mask = 1 << p;
    n = n ^ mask;
    return n;
}

//9
//int ChangeBit2(int n, int p)
//{
//    if ((n ^ (1 << p)) != n) return n ^ (1 << p);
//
//}
int main()
{
   /* int n; cin >> n;
    int k; cin >> k;
    cout << endl;*/
    /*cout << SwitchLastBit(n);*/
    /*cout << CodedNumInLastKBites(n, k);*/ //1111 -> 11    10111101 -> 101
    /*Function3(n, k);*/ //1111 011 -> true //1101 101 -> true //1101 111 -> false
    
    //4
  /*  int arr[] = { 9,18,9,12,18,15,12 };
    cout<<FindNotRepeatedNum(arr,7);*/

    //5
    /*int arr[] = { 1,2,3 };
    Sub(arr, 3);*/

    //6
    /*cout << Function6(16, 4, 2);*/

    //7
    /*cout<<ChangeBit(120, 2,1);*/

    //8
    /*cout << ChangeBit(120, 4, 0);*/

}