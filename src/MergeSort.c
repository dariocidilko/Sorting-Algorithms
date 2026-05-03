#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int middle, int right) {

    int T1 = middle - left + 1;
    int T2 = right - middle;

    // Create temporary arrays.
    int L[T1], R[T2];

    // Copy data into the temporary arrays.
    for (int i = 0; i < T1; i++) L[i] = arr[left + i];

    for (int j = 0; j < T2; j++) R[j] = arr[middle + j + 1];

    // Merge the temporary arrays back into the original array.
    int i = 0, j = 0, k = left;

    while (i < T1 && j < T2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < T1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < T2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {

    if (left < right) {
        int middle = left + (right - left) / 2;

        // Sort the first and second halves of the array, then merge them together.
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}