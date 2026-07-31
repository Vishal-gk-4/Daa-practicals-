#include <iostream>
using namespace std;

// Merge two sorted parts
void merge(int arr[], int l, int m, int r) {
    int n = r - l + 1;
    int* temp = new int[n];  // dynamically allocate temporary array

    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (int x = 0; x < n; x++) arr[l + x] = temp[x];

    delete[] temp;  // free memory
}

// Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);     // left half
        mergeSort(arr, m + 1, r); // right half
        merge(arr, l, m, r);      // merge them
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
