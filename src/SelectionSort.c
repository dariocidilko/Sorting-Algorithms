#include <stdio.h>

// This is a basic swap function.
static void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int smallest = i; // Assume that the current element is the smallest.

        // Iterate through the unsorted section to find the actual smallest element.
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        if (smallest != i) swap(&arr[i], &arr[smallest]);
    }
}