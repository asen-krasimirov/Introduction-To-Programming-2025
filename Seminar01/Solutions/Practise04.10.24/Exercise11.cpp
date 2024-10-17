#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    bool isSmaller = a < b;
    cout << isSmaller * a + !isSmaller * b;
}