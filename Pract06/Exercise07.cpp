#include <iostream>
using namespace std;
void isArraySorted (int arr[], int n)
{
    bool isSorted=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i]) isSorted = 0;
    }
    if (isSorted) cout << "It is sorted." << endl;
    else cout << "It is sorted." << endl;
}
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
    isArraySorted(arr, n);
}
