
#include <iostream>

using namespace std;

///zad 1
int SwitchLastBit(int num) 
{
    int copy = num;
    int k = 0;
    while (true)
    {
        if (copy % 2 == 0) 
        { 
            k++; copy /= 2; 
        }
        else
            break;
    }
    return num^(1 << k);
}

//zad 2
int CodedNumInLastKBites(int n, int k) 
{
    int mask = 1 << k;
    return n & (mask - 1);
}

//zad 3
void Function3(int n, int k)
{
    if ((n & k) == k)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

//zad 4
int findUnique(int arr[], int size) 
{
    int unique = 0;

    for (int i = 0; i < size; i++) 
    {
        unique ^= arr[i];
    }

    return unique;
}

//zad 5
void printSubsets(int arr[], int size) 
{
    int totalSub = 1 << size; 
    for (int subMask = 0; subMask < totalSub; subMask++)
    {
        cout << "[";
        bool isFirst = true;

        for (int i = 0; i < size; i++)
        {
            if (subMask & (1 << i))
            { 
                if (!isFirst)
                {
                    cout << ", ";
                }
                cout << arr[i];
                isFirst = false;
            }
        }
        cout << "]" << endl;
    }
}

//zad 6
int Function6(int x, int m, int n) 
{
    x >>= (m - 1);
    return CodedNumInLastKBites(x, n);
}

//zad 8
int ChangeBit(int n, int p, bool b) 
{
    int mask = 1 << p;
    n = n ^ mask;
    return n;
}



int main()
{
  
}

