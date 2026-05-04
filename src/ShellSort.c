#include <stdio.h>

void shellSort(int arr[], int n) {

    // Start with a large gap and reduce it eventually.
    for (int gap = n / 2; gap > 0; gap /= 2) {

        // Perform a gapped insertion sort.
        for (int i = gap; i < n; i++) {

            int temp = arr[i];
            int j = i;

            // Shift elements that are greater than temp to make space.
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;

        }
    }
}