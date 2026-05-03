#include <stdio.h>
#include <stdbool.h>

// This is a basic swap function.
static void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Cocktail sort is known as bidirectional bubble sort.
void cocktailSort(int arr[], int n) {

    int start = 0;
    int end = n - 1;
    bool swapped = true;

    while (swapped) {
        swapped = false;

        // Forward passing, go from left to right. (Like normal Bubble Sort)
        for (int i = start; i < end; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }

        if (swapped == false) break;

        swapped = false;

        // Backward passing, go from right to left.
        for (int i = end - 1; i >= start; i--) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }

        start++;
        end--;
    }
}