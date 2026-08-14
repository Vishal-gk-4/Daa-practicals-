#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check if left child is bigger
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Check if right child is bigger
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not the parent
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Fix the affected subtree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Step 1: Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Step 2: Move largest element to the end
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);

        // Fix the heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 1};

    int n = 5;

    heapSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
  conclusion : i had  done this practical it is based on the binary search ( exactly 2 nodes ) not more than that , and it helps us to sorting either ascending order or descending order
time complexity is big O (n log n) and space complexity big O (1)
