#include <iostream>
using namespace std;
int main()
{
    const int elements = 20;
    int arr[elements];
    for (int i = 0; i < elements; i++)
    {
        cin >> arr[i];
    }
    bool lostElementExists=1;
    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements; j++)
        {
            if (i == arr[j])
                lostElementExists = 0;
        }
        if (lostElementExists)
        {
            cout << i << endl;
            return 0;
        }
        lostElementExists = 1;
    }

}
