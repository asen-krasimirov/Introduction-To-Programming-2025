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
    int index;
    cin >> index;
    int newArray[elements];
    for (int i = 0, j=0; i < n; i++,j++)
    {
        if (i == index - 1)
            newArray[i] = arr[++j];
        else
            newArray[i] = arr[j];
    }
    newArray[n - 1] = -1;
    for (int i = 0; i < n; i++)
    {
        cout << newArray[i] << " ";
    }
}
