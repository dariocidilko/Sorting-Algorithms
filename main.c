#include <stdio.h>
#include <stdlib.h>
#include "src/SortingAlgorithms.h"

int main() {
    FILE *file = fopen("data/1K-Numbers.csv", "r"); // Choose which file to open within the 'data' folder.

    // Check if the file was opened successfully.
    if (!file) {
        printf("Error: File could not be opened. \n");
        return 1;
    }

    int capacity = 1000;
    int *arr = malloc(capacity * sizeof(int));
    int n = 0;

    // Re-allocate the capacity if the capacity is exceeded. 
    while (fscanf(file, "%d,", &arr[n]) == 1) {
        n++;

        if (n >= capacity) {
            capacity *= 2;

            int *temp = realloc(arr, capacity * sizeof(int));

            // Check if the memory allocation was successfull.
            if (!temp) {
                printf("Error: Memory allocation failed. \n");
                free(arr);
                return 1;
            }

            arr = temp;
        }
    }

    fclose(file);

    int choice;

    printf("Choose the sorting algorithm: \n");
    printf("1. Bubble Sort \n");
    printf("2. Cocktail Sort \n");
    printf("3. Insertion Sort \n");
    printf("4. Shell Sort \n");
    printf("5. Selection Sort \n");
    printf("6. Heap Sort \n");
    printf("7. Quick Sort \n");
    printf("8. Merge Sort \n");

    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            break;
        
        case 2:
            cocktailSort(arr, n);
            break;
        
        case 3:
            insertionSort(arr, n);
            break;

        case 4:
            shellSort(arr, n);
            break;
        
        case 5:
            selectionSort(arr, n);
            break;
        
        case 6:
            heapSort(arr, n);
            break;
        
        case 7:
            quickSort(arr, 0, n - 1);
            break;
        
        case 8:
            mergeSort(arr, 0, n - 1);
            break;

        default:
            printf("Error: Invalid choice. \n");
            free(arr);
            return 1;
    }

    // Print the sorted file.
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
    free(arr);
    return 0;
}