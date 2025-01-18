#include <iostream>
using namespace std;

void reverseFirstHalf(int arr[], int N) {
    int mid = N / 2;

    for (int i = 0; i < mid / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[mid - i - 1];
        arr[mid - i - 1] = temp;
    }
}

int main() {
    int N;
    cin >> N; 
    int arr[1000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    reverseFirstHalf(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
