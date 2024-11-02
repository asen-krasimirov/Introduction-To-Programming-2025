#include <iostream>
using namespace std;
void isEven(int num)
{
    if (num % 2 == 0) cout << "The number is even.";
    else cout << "The number is odd.";
}
int main()
{
    int num;
    cin >> num;
    isEven(num);
}
