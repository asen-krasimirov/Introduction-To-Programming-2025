#include <iostream>
using namespace std; int lengthNum(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int sortNum(int number)
{
    int sorted = 0;
    for (int i = 9; i >= 0; i--)
    {
        int temp = number;
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit == i)
            {
                sorted = sorted * 10;
                sorted = sorted + digit;
            }
            temp = temp/10;
        }
    }
    return sorted;
}
int main()
{
    int number;
    cin >> number;
    while (number < 1)
    {
        cout << "Enter a positive number." << endl;
        cin >> number;
    }
    cout<<sortNum(number);

}
