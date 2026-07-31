#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) return mid;       // element found
        else if (arr[mid] < key) left = mid + 1;  // go right
        else right = mid - 1;                     // go left
    }

    return -1; // element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 10};  // MUST be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

