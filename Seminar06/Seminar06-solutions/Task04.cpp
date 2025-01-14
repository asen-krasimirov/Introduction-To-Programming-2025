#include <iostream>
using namespace std;

void removeElementAtIndex(int arr[], int N, int index) {
    for (int i = index; i < N - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    arr[N - 1] = -1; 
}

int main() {
    int N, index;
    cin >> N; 
    int arr[1000];


    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> index; 

    removeElementAtIndex(arr, N, index);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
