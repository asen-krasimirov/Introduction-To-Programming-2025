#include<iostream>
using namespace std;

void PointerSwap(int *& pA, int *& pB)
{ 
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}

// void ReferenceSwap(int& a, int& b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int a = 10;
    int b = 5;
    int * pA = &a;
    int *pB = &b;

    PointerSwap(pA, pB);
    cout << "*pA = " << *pA << "  ";
    cout << "*pB = " << *pB << endl;

    // ReferenceSwap(a, b);
    // cout << "a = " << a << "  ";
    // cout << "b = " << b;

}