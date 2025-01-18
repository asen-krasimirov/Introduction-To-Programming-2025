#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n < 1 || n>1000)
    {
        cout << "Invalid value!" << endl;
        cin >> n;
    }
    const int elements = 1000;
    int arr[elements];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arrRightToLeft[elements];
    for (int i = 0; i < n; i++)
    {
        arrRightToLeft[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arrRightToLeft[i])
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
}
