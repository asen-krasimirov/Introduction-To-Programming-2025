

#include <iostream>
using namespace std;

//PART 1

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void my_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//1
int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; 
}

//2
void palindrome(int arr[], int n)
{
    int x = 0;

    for (int i = 0; i <= n / 2 ; i++) {

        if (arr[i] != arr[n - i - 1]) {
            x = 1;
            break;
        }
    }

    if (x == 1) {
        cout << "Not Palindrome";
    }
    else {
        cout << "Palindrome";
    }
}

//3
void reverseFirstHalf(int arr[], int n) {
    int mid = n / 2;
    for (int i = 0; i < mid / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[mid - i - 1];
        arr[mid - i - 1] = temp;
    }
    print(arr, n);
}

//4
void removeAtIndex(int arr[], int n, int index) {
    
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = -1; 

    print(arr, n);
}

//5
int findMissingElement(int arr[], int n) {
    int expectedSum = n * (n - 1) / 2; 
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

//6 
void countOccurrences(int arr[], int n) {
    int counts[20] = { 0 };

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < 20) {
            counts[arr[i]]++;
        }
    }

    for (int i = 0; i < 20; i++) {
        cout << i << " occurs " << counts[i] << " times" << endl;
    }
}

//7 
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

//8 
double my_abs(double num) {
    return (num < 0) ? -num : num;
}

void findAverageAndClosest(int arr[], int n) {
    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = sum / n;
    
    int closest = arr[0];
    double minDiff = my_abs(arr[0] - avg);

    for (int i = 1; i < n; i++) {
        double diff = my_abs(arr[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            closest = arr[i];
        }
    }

    cout << avg << endl;
    cout << closest << endl;
}

//9
void findMinAndMax(int arr[], int n) {
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

// PART 2

// 1
void filterInRange(int arr[], int n, int result[], int& resultSize, int a, int b) {
    resultSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            result[resultSize++] = arr[i];
        }
    }
}

// 2
int my_max(int a, int b) {
    return (a > b) ? a : b;
}

int longestDecreasingSubsequence(int arr[], int n) {
    int maxLength = 0, currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }

    return my_max(maxLength, currentLength);
}

// 3
int longestSequenceOfEqualNumbers(int arr[], int n) {
    int maxLength = 0, currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }

    return my_max(maxLength, currentLength);
}

// 4
void zeroOutInvalidNumbers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        bool containsIndex = false;

        while (temp > 0) {
            if (temp % 10 == i) {
                containsIndex = true;
                break;
            }
            temp /= 10;
        }

        if (!containsIndex) {
            arr[i] = 0;
        }
    }
    print( arr,  n);
}

//PART 3

//1
void findUnionAndIntersection(int arr1[], int n1, int arr2[], int n2, int unionArr[], int& unionSize, int intersectionArr[], int& intersectionSize) {
    unionSize = 0;
    intersectionSize = 0;

    for (int i = 0; i < n1; i++) {
        unionArr[unionSize++] = arr1[i];
    }

    
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unionArr[unionSize++] = arr2[i];
        }
    }

   
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyAdded = false;
                for (int k = 0; k < intersectionSize; k++) {
                    if (intersectionArr[k] == arr1[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    intersectionArr[intersectionSize++] = arr1[i];
                }
            }
        }
    }
}

//2
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int result[], int& resultSize) {
    resultSize = 0;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[resultSize++] = arr1[i++];
        }
        else {
            result[resultSize++] = arr2[j++];
        }
    }

    while (i < n1) {
        result[resultSize++] = arr1[i++];
    }

    while (j < n2) {
        result[resultSize++] = arr2[j++];
    }
}

//3
bool areLinearlyDependent(int arr1[], int n1, int arr2[], int n2) {
    if (n1 != n2) {
        return false;
    }

    int ratio = -1;

    for (int i = 0; i < n1; i++) {
        if (arr2[i] == 0) {
            if (arr1[i] != 0) {
                return false;
            }
        }
        else {
            int currentRatio = arr1[i] / arr2[i];
            if (arr1[i] % arr2[i] != 0) {
                return false;
            }
            if (ratio == -1) {
                ratio = currentRatio;
            }
            else if (ratio != currentRatio) {
                return false;
            }
        }
    }

    return true;
}

//4
void zigzagSort(int arr[], int n) {
    bool greater = true;

    for (int i = 0; i < n - 1; i++) {
        if (greater) {
            if (arr[i] < arr[i + 1]) {
                my_swap(arr[i], arr[i + 1]);
            }
        }
        else {
            if (arr[i] > arr[i + 1]) {
                my_swap(arr[i], arr[i + 1]);
            }
        }
        greater = !greater;
    }
}

//5
void incrementNumberArray(int arr[], int n) {
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
    }
}

int main()
{
    const int MAX_SIZE = 1000;

    int n,index;
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Invalid" << endl;
        return 1;
    }

     //5. const int size = 20;
    //int arr[size - 1];

    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
   //4. cin >> index;
   // if (index < 0 || index >= n) {
   //     return 1;
   // }
   // removeAtIndex(arr, n, index);

    //5. int missing = findMissingElement(arr, n);
    //cout << missing << endl;

    //Part2
    //1
    //int a,b
   /* cin >> a >> b;

    int result[n], resultSize;
    filterInRange(arr, n, result, resultSize, a, b);

    
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;*/

    //Part 3
    //1
    
   /*
    for (int i = 0; i < unionSize; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < intersectionSize; i++) {
        cout << intersectionArr[i] << " ";
    }
    cout << endl;*/

    
}



