#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int biggest;
    biggest = { (a > b && a > c) ? (a) : (biggest = {(b>c)?b:c})};
    cout << biggest;
}