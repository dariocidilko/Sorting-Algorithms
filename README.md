# Sorting Algorithms in C (6 Classic & More)
Collection of classic sorting algorithms in C with a custom dataset generator.

This project contains implementations of the following sorting algorithms:

1. Bubble Sort
2. Cocktail Sort (Bonus)
3. Insertion Sort
4. Selection Sort
5. Heap Sort
6. Quick Sort
7. Merge Sort

The project is designed for learning, experimentation and comparing how different sorting algorithms perform on the same dataset.

# Compilation & Running

Compile the project: gcc main.c src/*.c -o sorter
Run: ./sorter

# Custom Dataset Generation

The repository includes a Python script: gen_custom-dataset.py

This script generates a .csv file containing random integers.

You can customize:

- Number of integers (N)
- Value range (LOW, HIGH)

Example usage: python gen_custom-dataset.py

This will create: Custom-Numbers.csv

You can then place this inside the 'data' folder and use this file as input in main.c.
