#include <iostream>
using namespace std;
int main()
{
    int n, inputNum, sum=0;
    bool isPrime = 1;;
    cin >> n >> inputNum;
    while (inputNum != -1)
    {
        for (int i = 2; i < inputNum; i++)
        {
            if (inputNum % i == 0) isPrime = 0;
        }
        if (isPrime && n%inputNum!=0) sum += inputNum;
        cin >> inputNum;
        isPrime = 1;
    }
    cout << sum;
}
