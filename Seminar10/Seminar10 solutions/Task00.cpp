#include<iostream>
using namespace std;

void f(char*& pArr)
{
    pArr = nullptr;
}

int main()
{
    char arr[10] = {'a', 'b', 'c'};
    char * pArr = arr;
    f(pArr);
    cout << pArr;
}