#include <iostream>
using namespace std;
int findPower2(int a)
{
    int temp = a;
    int count = 0;
    while (temp != 1)
    {
        temp = temp / 2;
        count++;
    }
    unsigned distance1 = a - (2 ^ count);
    unsigned distance2 = a - (2 ^ (count + 1));
    if (distance1 < distance2) return count;
    else return (count + 1);
}
int main()
{
    int input;
    cin>>input;
    while (input <= 100 && input >= 100000)
    {
        cout << "Input must be in the range [100;100000]."<<endl;
        cin >> input;
    }
    cout << findPower2(input);
}
