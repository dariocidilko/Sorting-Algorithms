#include <stdio.h>

// This is a basic swap function.
static void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This partition function uses the Hoare partition scheme.
int partition(int arr[], int low, int high) {

    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (1) {

        // Move j to the left until the element is smaller or equal to the pivot. (element <= pivot)
        do j--; while (i < j && arr[j] > pivot);

        // Move i to the right until the element is larger or equal to the pivot. (element >= pivot)
        do i++; while (arr[i] < pivot);

        if (i < j) {
            swap(&arr[i], &arr[j]);
        } else {
            return j;
        }
    }
}

void quickSort(int arr[], int low, int high) {

    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}