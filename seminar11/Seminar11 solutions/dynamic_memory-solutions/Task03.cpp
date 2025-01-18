#include <iostream>
using namespace std;

int * Cycle_arr(int * arr, int size, int k)
{
    if (arr == nullptr) return nullptr;
    int * cArr = new int[size];
    k %= size; 

    for (int i = 0; i < size; i++)
    {
        cArr[i] = arr[(i + size - k) % size]; 
    }
    return cArr;
}

int main()
{
    int size, k;
    cout << "Enter number of elements:" << endl;
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size." << endl;
        return 1;
    }

    int * arr = new int[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Cycle right by how much?" << endl;
    cin >> k;

    int * pArr = Cycle_arr(arr, size, k);

    cout << "Resulting array after cycling:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << pArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] pArr;

    return 0;
}
