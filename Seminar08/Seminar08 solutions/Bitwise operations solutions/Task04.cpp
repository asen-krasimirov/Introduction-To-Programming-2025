#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findUniqueNumber(arr, n) << endl;

    return 0;
}
