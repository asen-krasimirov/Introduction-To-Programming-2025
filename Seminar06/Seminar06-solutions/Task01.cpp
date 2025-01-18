#include <iostream>
using namespace std;

int findFirstDuplicate(int arr[], int N) {
    bool seen[1000] = {false}; 

    for (int i = 0; i < N; i++) {
        if (seen[arr[i]]) {
            return arr[i]; 
        }
        seen[arr[i]] = true; 
    }

    return -1; 
}

int main() {
    int N;
    cin >> N; 
    int arr[1000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = findFirstDuplicate(arr, N);
    if (result == -1) {
        cout << "No duplicates" << endl;
    } else {
        cout << "First duplicate: " << result << endl;
    }

    return 0;
}
