#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; // Taking the last element as pivot
        int i = low - 1; // Index of smaller element

        // Partitioning the array
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++; // Increment the smaller element index
                swap(arr[i], arr[j]); // Swap elements
            }
        }

        // Place the pivot element in the correct position
        swap(arr[i + 1], arr[high]);

        int pi = i + 1; // Pivot index after partitioning

        // Recursively sort the subarrays before and after pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 80, 30, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    // Printing the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

