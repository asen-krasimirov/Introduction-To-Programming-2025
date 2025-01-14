#include <iostream>
using namespace std;

void generateSubsets(int arr[], int n) {
    int totalSubsets = 1 << n; 

    for (int mask = 0; mask < totalSubsets; mask++) {
        cout << "[";
        bool first = true;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { 
                if (!first) cout << ",";
                cout << arr[i];
                first = false;
            }
        }
        cout << "]" << endl;
    }
}

int main() {
    int n;
    cin >> n; 

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    generateSubsets(arr, n);

    return 0;
}
