#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int N) {
    int i = 0, j = N - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false; 
        }
        i++;
        j--;
    }

    return true; 
}

int main() {
    int N;
    cin >> N; 
    int arr[1000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, N)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
