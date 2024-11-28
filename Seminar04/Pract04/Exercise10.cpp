#include <iostream>
using namespace std;
void checkSquare(int n)
{
    if (n == 0 || n == 1)
    {
        cout <<n<<" - yes (" << n << "^2)" << endl;
        return;
    }
    for (int i =2; i <=n/2; i++)
    {
        if (n == i * i)
        {
            cout << n << " - yes (" << i << "^2)" << endl;
            return;
        }
    }
    cout << n << " - no (?^2)" << endl;
}
int main()
{
    int input;
    cin >> input;
    while (input < 0)
    {
        cout << "You cannot enter a negative number." << endl;
        cin >> input;
    }
    checkSquare(input);
}
