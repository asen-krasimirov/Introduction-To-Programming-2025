#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
void powerSet(int arr[], int size)
{
    int repetition=1;
    for (int i = 0; i < size; i++)
    {
        repetition = repetition * 2;
    }

    for (int i = 0; i < repetition; i++)
    {
        cout << "[";
        int copy = i;
        for (int j = 0; j < size; j++)
        {
            if (copy & 1) cout <<" "<<arr[j] << " ";
            copy = copy >> 1;
        }
        cout << "], ";
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    powerSet(arr, size);
}
