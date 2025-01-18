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
    for (int i = 0; i < n/4; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n / 2 - 1 - i];
        arr[n / 2 - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
