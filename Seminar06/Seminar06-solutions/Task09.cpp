#include <iostream>
using namespace std;

void findMinMax(int arr[], int N, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
}

int main() {
    int N;
    cin >> N; 
    int arr[1000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, N, min, max); 

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
