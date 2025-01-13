#include <iostream>

using namespace std;

int len(int n) {
    if (n == 0) {
        return 1;
    }
    int len = 0;
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}

int power(int n, int power) {
    int res = 1;
    for (int i = 0; i < power; i++) {
        res *= n;
    }
    return res;
}


int sort(int n) {
    //Calculate length
    int length = len(n);
    //Initialize with very low value
    int max=INT_MIN;
    //Save the position of the current max number
    int position = 0;
    //Answer
    int ans = 0;
    while (n > 0) {
        int nCopy = n;
        //Iterate through the numbers to find the biggest
        for (int i = 0; i < length; i++) {
            int digit = nCopy % 10;
            nCopy /= 10;
            if (digit > max) {
                max = digit;
                position = i;
            }
        }
        //Get the digit
        int digit = (n / power(10, position)) % 10;
        //Add it to answer in the frontest position
        ans += digit * power(10, --length);
        //Get the remainging numbers
        int remainingNumbers = (n % power(10, position));
        //Remove the remeaning numbers
        n /= power(10, position) * 10;
        //Add zeroes value for replacement.
        n *= power(10, position);
        //Add again the numbers
        n += remainingNumbers;
        //Reset max
        max = INT_MIN;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << sort(n);
    return 0;
}
