#include <iostream>
using namespace std;
int main()
{
    int inputN, sumOfInputNums=0, tempInput;
    cin >> inputN;
    for (int i = 1; i < inputN; i++)
    {
        cin >> tempInput;
        sumOfInputNums += tempInput;
    }
    int sumOfAllNums = 0;
    for (int i = 1; i <=inputN ; i++)
    {
        sumOfAllNums += i;
    }
    int missingNumber = sumOfAllNums - sumOfInputNums;
    cout << missingNumber;
}
