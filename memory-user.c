#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error! Not enough or too many arguments used!\n");
        return 1;
    }

    // Convert the argument to an integer (array size in megabytes)
    int size_in_mb = atoi(argv[1]);

    // Allocate memory for the array (1 MB = 1,000,000 bytes; divided by sizeof(int) to get the count of integers)
    int size = size_in_mb * 1000000 / sizeof(int);
    int *memory_allocation_array = malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (memory_allocation_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Stream through the array indefinitely, touching each entry
    int index = 0;
    while (1) {
        memory_allocation_array[index] = index;
        index = (index + 1) % size;
    }

    return 0;
}

/*********************************************
Your name: Logan Anglin
Question 2: There are 8094 megabytes of memory in my system. There are 5750 megagabytes of free memory in my system. This seems right considering how many background processes
may be running on my system.
Question 4: There are now only 5468 free megabytes of memory on my system. This is less than what was originally available, but I was epecting it to be much lower considering
the argument I passed was 5000.
Question 7: <your answer>
Question 8: <your answer>
*********************************************/