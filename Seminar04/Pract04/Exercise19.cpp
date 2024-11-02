#include <iostream>
using namespace std;
int sumDigits(long long int num)
{
    if (num == 0) return 1;
    else
    {
        long long int temp = num;
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }
        return sum;
    }
}
int main()
{
    long long int input;
    cin >> input;
    long long int answer = input;
    do
    {
        answer = sumDigits(answer);
    }
    while (answer > 9);
    cout << answer;
}
