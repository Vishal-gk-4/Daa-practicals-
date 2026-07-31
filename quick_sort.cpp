#include <iostream>
using namespace std;

// Function to swap two numbers


// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // pivot = last element
    int i = low - 1;        // boundary for small elements

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  // place pivot correctly
    return (i + 1);               // return pivot index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);        // left part
        quickSort(arr, pi + 1, high);       // right part
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
