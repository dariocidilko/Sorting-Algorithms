import random

N = 100000 # Choose how many numbers to generate within the dataset.

LOW = -10 # Choose the lowest a number can generate.
HIGH = 10 # Choose the highest a number can generate.

# Generate a '.csv' file and write the numbers to that file.
with open("Custom-Numbers.csv", "w") as file:
    Numbers = []
    
    for _ in range(N):
        Numbers.append(str(random.randint(LOW, HIGH)))
    
    file.write(",".join(Numbers))

    print(f"'Custom-Numbers.csv' with {N} random numbers has been created.")