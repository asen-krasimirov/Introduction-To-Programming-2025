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
    int arr [elements];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Element " << i + 1 << " with value " << arr[i] << " is repeated." << endl;
                return 0;
            }
        }
    }
    cout << "No repetition!"<<endl;
}
