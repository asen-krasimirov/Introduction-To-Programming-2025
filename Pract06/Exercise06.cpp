#include <iostream>
using namespace std;
int main()
{
    const int elements = 20;
    int arr[elements];
    for (int i = 0; i < elements; i++)
    {
        cin >> arr[i];
        while (arr[i] < 0 || arr[i]>19)
        {
            cout << "Incorrect value! Must be in [0,19]." << endl;
            cin >> arr[i];
        }
    }
    for (int i = 0; i < elements; i++)
    {
        int count = 0;
        for (int j = 0; j < elements; j++)
        {
            if (i == arr[j]) count++;
        }
        cout << i << " -> " << count << " times"<<endl;
    }
}
