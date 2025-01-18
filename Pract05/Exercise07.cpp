#include <iostream>
using namespace std;
long int raisePower(int a, int b)
{
    if (b < 0) return 1;
    long int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    return result;
}
int lengthNum(long int n)
{
    if (n == 0) return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
void splitInHalf(long int num, long int& part1, long int& part2)
{
    int length = lengthNum(num);
    if (length % 2 == 0)
    {
        part1 = num / raisePower(10, length / 2);
        part2 = num % raisePower(10, length / 2);
    }
    else
    {
        part1 = num / raisePower(10, (length / 2));
        part2 = num % raisePower(10, (length / 2));
    }
}
int main()
{
	long int input;
	cin >> input;
	long int part1=0, part2=0;
    splitInHalf(input, part1, part2);
    cout << part1 << " " << part2;
}
